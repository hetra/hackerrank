/*
 * Started: 2015-10-08T18:48:00+10:00
 * Completed: 2015-10-08T18:50:00+10:00
 * Score: 5.00
*/
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
  if(head == NULL) return;
  ReversePrint(head->next);
  printf("%d\n", head->data);
}
