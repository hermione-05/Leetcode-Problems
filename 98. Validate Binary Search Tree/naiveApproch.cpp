#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorder(TreeNode* root, vector<int>&v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }


   //called from main
    bool isValidBST(TreeNode* root) {
         //inorder    
        vector<int>v;
        inorder(root,v);
        if(v.size()==1) return true;
        int j=0;int i=1;
        while(i<v.size()){
            if(v[j]<v[i]){
                i++,j++;
            }
            else return false;
        }
        return true; 
    }
};

// Function to build a binary tree from user input
TreeNode* buildTree() {
    cout << "Enter the binary tree values (-1 for null nodes):\n";
    int val;
    cin >> val;
    if (val == -1) {
        return nullptr;
    }
    TreeNode* root = new TreeNode(val);
    std::cout << "Enter left subtree for " << val << ":\n";
    root->left = buildTree();
    std::cout << "Enter right subtree for " << val << ":\n";
    root->right = buildTree();
    return root;
}

int main() {
    Solution solution;
    TreeNode* root = buildTree();

    bool isValid = solution.isValidBST(root);

    if (isValid) {
        cout << "The binary tree is a valid BST." << std::endl;
    } else {
        cout << "The binary tree is not a valid BST." << std::endl;
    }

    return 0;
}
