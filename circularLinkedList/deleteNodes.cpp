Node* deleteBeg(Node* head){
  // Write your code here
  Node* temp = head->next;
  while(temp->next!=head){
    temp=temp->next;
  }
  temp->next = head->next;
  return temp->next;
}
Node* deleteEnd(Node* head){
  // Write your code here
  Node* temp = head->next;
  while(temp->next->next!=head){
    temp=temp->next;
  }
  temp->next = head;
  return head;
}
