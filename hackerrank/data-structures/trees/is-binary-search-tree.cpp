// https://www.hackerrank.com/challenges/is-binary-search-tree
/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
    
    #include <climits>
    bool checkNode(Node* n,int min,int max){
        if (!n) return true; //leaf, don't disqualify
        if (n->data < min || n->data > max) return false;
        return checkNode(n->left,min,n->data -1) && checkNode(n->right,n->data+1,max);
    }

    bool checkBST(Node* root){
        return checkNode(root,INT_MIN,INT_MAX);
    }