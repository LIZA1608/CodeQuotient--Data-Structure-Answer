void reverseQueue(Queue *queue){
  // Write your code here 
  int size = 0;
  int arr[10000];
  while(!queue->isEmpty()){
    arr[size++] = queue->deQueue();
  }
  for(int i=size-1; i>=0; i--){
    queue->enQueue(arr[i]);
  }
}
