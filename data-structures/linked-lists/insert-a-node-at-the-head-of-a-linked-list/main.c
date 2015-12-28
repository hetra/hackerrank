/*
 * Started 03/10/2015
 * Completed 03/10/2015
 * Score: 5.00
 */
/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
  
  Node* new_head = (Node*)malloc(sizeof(Node));
  
  new_head->data = data;
  new_head->next = head;
  
  return new_head;
}
