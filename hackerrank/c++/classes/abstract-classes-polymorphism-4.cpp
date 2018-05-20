//Problem link - https://www.hackerrank.com/challenges/abstract-classes-polymorphism
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/patelvismay92

#include <unordered_map> //for faster retrival of key,value
#include <list> // to maintain the order of recently used keys
class LRUCache {
    int cap;
    unordered_map<int,int> pairsmap;
	list<int> keylist;
    public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    void set(int key, int value);
    int get(int key);
};

void LRUCache::set(int key, int value) {
    if(pairsmap.find(key) == pairsmap.end()) {
        pairsmap.insert(pair<int,int>(key, value));
        keylist.remove(key);
        keylist.push_front(key);
        if(keylist.size() > cap) {
            int garbagekey = keylist.back();
            keylist.pop_back();
            pairsmap.erase(garbagekey);
        }
    }
    else {
        pairsmap.erase(key);
        pairsmap.insert(pair<int,int>(key, value));
        keylist.remove(key);
        keylist.push_front(key);
    }
}

int LRUCache::get(int key) {
    if(pairsmap.find(key) == pairsmap.end()) {
        keylist.remove(key);
        keylist.push_front(key);
        if(keylist.size() > cap) {
            int garbagekey = keylist.back();
            keylist.pop_back();
            pairsmap.erase(garbagekey);
        }
        return -1;
    }
    else {
        keylist.remove(key);
        keylist.push_front(key);
        return pairsmap.find(key)->second;
    }
}

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