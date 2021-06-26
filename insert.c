#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};

void push(struct Node** head_ref,int new_data)
{
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next= (*head_ref);
  (*head_ref)=new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
  if(prev_node==NULL)
  {
    printf("Previous node cannot be null");
    return;
  }

  struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
  new_node->data=new_data;
  new_node->next=prev_node->next;
  prev_node->next=new_node;
}

void append(struct Node** head_ref,int new_data)
{
  struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
  struct Node *last=(*head_ref);
  new_node->data=new_data;
  new_node->next=NULL;

  if(*head_ref==NULL)
  {
    *head_ref=new_node;
  }

  while(last->next!=NULL)
  {
    last=last->next;
  }

  last->next=new_node;
}
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}

 int main()
 {
   struct Node* head=(struct Node*) malloc(sizeof(struct Node));
   struct Node* second=(struct Node*) malloc(sizeof(struct Node));
   struct Node* third=(struct Node*) malloc(sizeof(struct Node));
   head->data=2;
   head->next=second;
   second->data=3;
   second->next=third;
   third->data=4;
   third->next=NULL;
   push(&head,1);
   insertAfter(head->next,8);
   append(&head,9);
   printList(head);
   return 0;
 }
