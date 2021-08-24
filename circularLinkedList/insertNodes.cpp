Node* insertBeg(Node* head, int data){
  // Write your code here
  if(head == NULL) {
    head = (Node*)malloc(sizeof(struct Node));
    head->data = data;
    head->next = head;
    return head;
  }
  Node* temp = head->next;
  while(temp->next != head){
    temp=temp->next;
  }
  temp->next = (Node*)malloc(sizeof(struct Node));
  temp->next->data = data;
  temp->next->next = head;
  head = temp->next;
  return head;
}
Node* insertEnd(Node* head, int data){
  // Write your code here
  if(head == NULL) {
    head = (Node*)malloc(sizeof(struct Node));
    head->data = data;
    head->next = head;
    return head;
  }
  Node* temp = head->next;
  while(temp->next != head){
    temp=temp->next;
  }
  temp->next = (Node*)malloc(sizeof(struct Node));
  temp->next->data = data;
  temp->next->next = head;
  return head;
}
