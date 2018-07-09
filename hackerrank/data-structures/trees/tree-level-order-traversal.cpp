// https://www.hackerrank.com/challenges/tree-level-order-traversal

#include <iostream>
#include <cstddef>	
#include <queue>

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
    // #include<queue>
    // void LevelOrder(Node* root){
    //     queue<node*> q;
    //     Node *temp = root;
    //     while(temp!=nullptr){
    //         cout << temp->data <<" ";
    //         if(temp->left!=nullptr) q.push(temp->left);
    //         if(temp->right!=nullptr) q.push(temp->right);
    //          temp = q.front();  
    //         q.pop();
    //     }
    // }
    void levelOrder(Node* root){
        int h = height(root);
        int i;
        for (i=1; i<=h; i++)
            printGivenLevel(root, i);
    }
    void printGivenLevel(Node* root, int level){
        if (root == nullptr) return;
        if(level == 1) std::cout << root->data << " ";
        else if(level > 1){
            printGivenLevel(root->left, level-1);
            printGivenLevel(root->right, level-1);
        }
    }
    int height(Node* node){
        if (node==nullptr) return 0;
        else{
            int lheight = height(node->left);
            int rheight = height(node->right);
            if (lheight > rheight) return(lheight+1);
            else return(rheight+1);
        }
    }
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.levelOrder(root);
    return 0;
}