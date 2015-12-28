/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
  
  int i = 0;
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->data = data;
  
  if(position == 0)
  {
    // insert at head
    new_node->next = head;
    
    return new_node;
  }
  
  if(head != NULL)
  {
    Node* ptr = head;
    
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
      // travserse the linked list until we arrive at position
      
      if(i == (position - 1))
      {
        // insert after current node
        if(ptr != NULL)
        {
          if(data != ptr->data)
          {
            new_node->next = ptr->next;
            ptr->next = new_node;
            break;  
          }
        }
      }
      
      i++;
    }
  }
  else
  {
    head = (Node*)malloc(sizeof(Node));
    head->data = data;
    head->next = NULL;
  }
  
  return head;
}
