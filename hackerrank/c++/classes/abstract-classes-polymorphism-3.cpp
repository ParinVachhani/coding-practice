//Problem link - https://www.hackerrank.com/challenges/abstract-classes-polymorphism
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/jorgechiquinv

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

// write a derived class LRUCache here to complete the code
class LRUCache : public Cache{
    public:
    LRUCache(int cp):Cache(){this->cp=cp; tail=head=NULL;}
    void set(int key, int value){
        auto it=mp.find(key);
        Node* newNode;
        if(!head){
            newNode= new Node(key,value);
            head=tail=newNode;
            mp.insert(make_pair(key,newNode));
        }else if(it!=mp.end()){
            Node* oldNode=it->second;
            oldNode->value=value;
            if(oldNode!=head){
                Node *prevNode=oldNode->prev,*nextNode=oldNode->next;
                prevNode->next=nextNode;
                nextNode ? nextNode->prev=prevNode : tail=prevNode;
                oldNode->prev=NULL;
                oldNode->next=head;
                head->prev=oldNode;
                head=oldNode;
            }
        }else{
            if(mp.size()==cp){
                Node* penultimate = tail->prev;
                penultimate=NULL;
                mp.erase(tail->key);
                delete tail;
                tail=penultimate;
            }
            newNode=new Node(NULL,head,key,value);
            head->prev=newNode;
            head=newNode;
            mp.insert(make_pair(key,newNode));
        }
    }
    int get(int key){
        auto it=mp.find(key);
        if(it!=mp.end())
            return (it->second)->value;
        else
            return -1;
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}