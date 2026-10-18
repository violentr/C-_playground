#include <stdio.h>
#include <stdlib.h>

/* Learn about LinkedList data structure , simple implementation */

typedef struct node {
  int value;
  struct node *head;
}Node;

Node* add_node(Node *node, int value){
  Node *new_node = calloc(1, sizeof(Node));
  if (new_node == NULL) return NULL;
  new_node->value = value;

  if (node != NULL){
    new_node->head = node;
  }
  return new_node;
}
void print(Node *node){
  while (node != NULL){
    printf("%d ", node->value);
    node = node->head;
  }
  printf("\n");
}
/* free memory after use */
void destroy(Node *node){
  while(node != NULL){
    Node *tmp = node->head;
    free(node);
    node = tmp;
  }
}

int main(){
  Node * n = NULL;
  n = add_node(n, 1);
  n = add_node(n, 2);
  n = add_node(n, 3);
  print(n);
  destroy(n);
  return 0;
}
