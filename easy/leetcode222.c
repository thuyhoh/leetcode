#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
       int val;
       struct TreeNode  *left;
       struct TreeNode  *right;
};
int countNodes(struct TreeNode* root) {
    if(root == NULL) return 0;
    else{
        return 1+ countNodes(root->left) + countNodes(root->right);
    }
}
int main(void){

    return 0;
}