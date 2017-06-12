//94. Binary Tree Inorder Traversal
//Given a binary tree, return the inorder traversal of its nodes' values.
//
//For example:
//Given binary tree [1,null,2,3],
//   1
//    \
//     2
//    /
//   3
//return [1,3,2].
//
//Note: Recursive solution is trivial, could you do it iteratively?

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    /* Traversal the tree from root, we handle its left child first and push itself to stack for future handling.
     * After handling a node without left child, get a node from stack top, add its value to answer and handle its
     * right child.
     */
public:
    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> ans, tmp;
//        if (!root)
//            return ans;
//        tmp = inorderTraversal(root->left);
//        ans.insert(ans.end(),tmp.begin(),tmp.end());
//        ans.push_back(root->val);
//        tmp = inorderTraversal(root->right);
//        ans.insert(ans.end(),tmp.begin(),tmp.end());
//        return ans;
        stack<TreeNode*> stk;
        vector<int> ans;
        TreeNode *cur = root;
        while (cur){
            stk.push(cur);
            cur = cur->left;
        }
        while (stk.size()){
            cur = stk.top();
            stk.pop();
            ans.push_back(cur->val);
            cur = cur->right;
            while (cur){
                stk.push(cur);
                cur = cur->left;
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}