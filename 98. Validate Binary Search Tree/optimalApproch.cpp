#include <iostream>
#include <vector>
#include <climits>
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


    bool isValidBST(TreeNode* root, long min, long max) {
        if (root == nullptr) return true;

        if (root->val >= max || root->val <= min) return false;

        bool left = isValidBST(root->left, min, root->val);
        bool right = isValidBST(root->right, root->val, max);

        if (left && right) return true;

        return false;
    }

   //called from main
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }
};

// Function to build a binary tree from user input
TreeNode* buildTree() {
    std::cout << "Enter the binary tree values (-1 for null nodes):\n";
    int val;
    std::cin >> val;
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
