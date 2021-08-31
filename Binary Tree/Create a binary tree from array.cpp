struct Node* buildTree(int t[], int n){
  if(n==0) return NULL;
  struct Node* nodes[n];
  for(int i=0; i<n; i++){
	nodes[i] = newNode(t[i]);
  }
  for(int i=0; i<n/2; i++){
    nodes[i]->left = nodes[2*i + 1];
    if(2*i+2 >= n){
      nodes[i]->right = NULL;
    }else{
      nodes[i]->right = nodes[2*i + 2];
    }
  }
  return nodes[0];
}
