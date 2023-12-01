/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int check_symmetric(struct TreeNode*lp,struct TreeNode* rp){
    if(!lp&&!rp){
        return 1;
    }
    if(!lp||!rp){
        return 0;
    }
    return lp->val==rp->val&&check_symmetric(lp->left,rp->right)&&check_symmetric(lp->right,rp->left);
}
bool isSymmetric(struct TreeNode* root) {
    return check_symmetric(root,root);
}
