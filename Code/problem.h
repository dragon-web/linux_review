#pragma once 
#include"common.h"


typedef struct node
{
  int val;
  struct node* prev;
  struct node* next;
}node_t;
 
node_t *head;

bool insert(node_t head,int X);
bool delete(node_t *head, int X);
bool find(node_t *head,int X);



