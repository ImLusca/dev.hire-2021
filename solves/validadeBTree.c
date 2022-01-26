/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBranch(struct TreeNode* node,int* min,int* max){
    
    if(node == NULL){
        return 1;
    }    

    
    if((max && node->val >= *max) || (min && node->val <= *min)){             
        return 0;
    }     
    
    return isValidBranch(node->left,min, &(node->val)) && isValidBranch(node->right,&(node->val),max);    
    
}

bool isValidBST(struct TreeNode* root){
    return isValidBranch(root,NULL, NULL);    
}
