//104. Maximum Depth of Binary Tree
//Given a binary tree, find its maximum depth.
//
//The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

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
    /* We can use a stack to dfs the tree. Push each node's children and their heights into the stack.
     * */
public:
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        stack<pair<TreeNode*,int>> stk;
        TreeNode* cur;
        int ch = 1, ans = 1;
        stk.push({root,1});
        while (stk.size()){
            cur = stk.top().first;
            ch = stk.top().second;
            stk.pop();
            while (cur){
                if (cur->right)
                    stk.push({cur->right,ch+1});
                cur = cur->left;
                ++ch;
            }
            ans = max(ans,ch-1);
        }
        return ans;
    }
};

int main() {

    return 0;
}