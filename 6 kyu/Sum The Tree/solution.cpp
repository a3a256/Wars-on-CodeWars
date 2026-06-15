// Return the sum of all values in the tree, including the root
int sumTheTreeValues(node* root) {
  if(!root){return 0;}
  return root->value + sumTheTreeValues(root->right) + sumTheTreeValues(root->left);
}
