/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    
    if(head != NULL)
    {
      Node* ptr = head;
      
      for(ptr=head;ptr!=NULL;ptr=ptr->next)
      {
        printf("%d\n", ptr->data);
      }
    }
}
