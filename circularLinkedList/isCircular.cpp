int isCircular(Node* head){
  // Write your code here
  if(head == NULL) return 1;
  Node* temp = head->next;
  while(temp!=head){
    if(temp==NULL) return 0;
    temp = temp->next;
  }
  return 1;
}
