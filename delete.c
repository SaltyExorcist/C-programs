#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};

void deleteNode(struct Node** head_ref,int key)
{
  struct Node *temp= *head_ref, *prev;
  while (temp!=NULL && temp->data==key)
   {
    *head_ref=temp->next;
    free(temp);
    return;
  }

  if(temp!=NULL && temp->data!=key)
  {
    prev=temp;
    temp=temp->next;
  }

  if(temp==NULL)
  return;

  prev->next=temp->next;
}

void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ",node->data);
    node=node->next;
  }
}

int getCount(struct Node* head)
{
  int count=0;
  struct Node* current=head;
  while (current!=NULL)
  {
    count++;
    current=current->next;
  }
  return count;
}

int main()
{
  struct Node* head=(struct Node*)malloc(sizeof(struct Node));
  struct Node* second=(struct Node*)malloc(sizeof(struct Node));
  struct Node* third=(struct Node*)malloc(sizeof(struct Node));
  head->data=1;
  head->next=second;
  second->data=2;
  second->next=third;
  third->data=3;
  third->next=NULL;
  deleteNode(&head,1);
  getCount(head);
  printList(head);
}
