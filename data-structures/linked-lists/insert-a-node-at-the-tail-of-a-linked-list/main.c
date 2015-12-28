/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  
  if(head != NULL)
  {
    Node* ptr = head;
    
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
      if(ptr->next == NULL)
      {
        Node* tail = (Node*)malloc(sizeof(Node));
        tail->data = data;
        tail->next = NULL;
        ptr->next = tail;
        break;
      }
    }
    
  }
  else
  {
    head = (Node*)malloc(sizeof(Node*));
    head->data = data;
    head->next = NULL;
  }
  
  return head;
}
