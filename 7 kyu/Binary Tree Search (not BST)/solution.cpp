struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};

bool search(int n, Node *root){
  if(!root){return false;}
  if(root->val == n){return true;}
  return search(n, root->left) || search(n, root->right);
}
