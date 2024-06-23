int min(int x,int y){
    return x<y?x:y;
}
int minDepth(struct TreeNode* root) {
   if(!root){
       return 0;
   }
   if(!root->left&&!root->right){
       return 1;
   }
   if(root->left&&!root->right){
       return minDepth(root->left)+1;
   }
    if(!root->left&&root->right){
       return minDepth(root->right)+1;
   }
    return 1+min(minDepth(root->left),minDepth(root->right));
}
