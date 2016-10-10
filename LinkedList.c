#include <stdio.h>
#include <stdlib.h>

struct node {char c; struct node* next;};

struct node* insert_front(struct node* front, char data){
  struct node* n = (struct node*)malloc(sizeof(struct node));
  (*n).c = data;
  (*n).next=front;
  return n;
}
int main(){
  struct node* i = insert_front(0, 'a');
  i = insert_front(i, 'A');
  printf("&insert_front(0, 'a'): %c \n", (*(*i).next).c);
  return 0;
}
