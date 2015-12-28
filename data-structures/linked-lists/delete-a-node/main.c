/*
 * Started: 2015-10-08T18:03:07+10:00
 * Completed: 2015-10-08T18:35:55+10:00
 * Score: 5.00
 */
/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method//0307
  int i = 0;

  if(head != NULL)
  { 
    Node* ptr = head;

    if(position == 0)
    {
      if(ptr->next != NULL)
      {
	return ptr->next;
      }
      else
      {
	ptr = NULL;
      }
    }
    
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
      if(i == (position - 1))
      {
        if(ptr->next != NULL)
        {
          if(ptr->next->next != NULL)
          {
            ptr->next = ptr->next->next;
          }
          else
          {
            ptr->next = NULL;
          }
        }
        else
        {
          ptr = NULL;
        }
      }
      
      i++;
    }
  }
  
  return head;
}
