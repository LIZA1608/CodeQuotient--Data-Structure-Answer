void enqueue(int item)
{
  if(front == -1 && rear == -1){
    front = 0;
  }
  array[++rear] = item;
}
// Method to remove an item from queue.
int dequeue()
{
  if(front > rear){
    return -1; 
  }
  return array[front++];
}
