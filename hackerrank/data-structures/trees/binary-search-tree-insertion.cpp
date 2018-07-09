// https://www.hackerrank.com/challenges/binary-search-tree-insertion

#include <iostream>
#include <cstddef>	

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
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }
/*
Node is defined as 

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

    Node* insert(Node * root, int data) {
        if(root == NULL) return new Node(data);
        else {
            if(data < root->data)
                root->left = insert(root->left, data);
            else if(data > root->data)
                root->right = insert(root->right, data);
            return root;
        }
    }
};

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
    
    myTree.preOrder(root);
  
    return 0;
}
