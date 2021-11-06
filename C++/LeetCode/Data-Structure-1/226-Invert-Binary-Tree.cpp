/**
 * 
 *  Author: Ivan Penev
 *  Source: https://leetcode.com/problems/invert-binary-tree/
 *  Time: O(n)
 *  Space: O(h)
 *
*/

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root)
        {
            invertTree(root->left);
            invertTree(root->right);

            std::swap(root->left, root->right);
        }
        return root;
    }
};