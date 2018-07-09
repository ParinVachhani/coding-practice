// https://www.hackerrank.com/challenges/tree-top-view/

#include<bits/stdc++.h>

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
    // void topView(Node* root)
    // {
    //     leftView(root->left);
    //     std::cout << root->data << " ";
    //     rightView(root->right);
    // }

    // void leftView(Node* root) {
    //     if (root == nullptr) return;
    //     leftView(root->left);
    //     std::cout << root->data << " ";
    // }

    // void rightView(Node* root) {
    //     if (root == nullptr) return;
    //     std::cout << root->data << " ";
    //     rightView(root->right);
    // }
    int w_min=-1,w_max=1,w=0;
    void inorder(Node *root,int w){ 
        if(root==NULL) return;
        if(w<w_min) w_min=w;
        if(w>w_max) w_max=w;
        if(root->left!=NULL) inorder(root->left,w-1);
        if(root->right!=NULL) inorder(root->right,w+1);
    }
    void top(Node *root,int arr[],int w,int h,int arr2[]){
        if(root==NULL) return;
        if(arr[w-w_min]==0 || h<arr2[w-w_min]){
            arr2[w-w_min]=h;
            arr[w-w_min]=root->data;
        }
        if(root->left!=NULL) top(root->left,arr,w-1,h+1,arr2);
        if(root->right!=NULL) top(root->right,arr,w+1,h+1,arr2);
    }
    void topView(Node * root){
        inorder(root,0);
        int arr[w_max-w_min+1],arr1[w_max-w_min+1];
        for(int i=0;i<w_max-w_min+1;i++){
            arr[i]=0;
            arr1[i]=90;
        }
        top(root,arr,0,1,arr1);
        for(int i=0;i<w_max-w_min+1;i++)
            std::cout<<arr[i]<<" ";
    }
}; //End of Solution

int main(){
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.topView(root);
    return 0;
}