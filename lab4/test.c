#include<stdio.h>
#include "liste.h"


int main() {
  // Create an empty linked list
  Node *head = NULL;

  // Add some elements to the linked list
  addAtEnd(&head, 1);
  addAtEnd(&head, 2);
  addAtEnd(&head, 3);

  // Display the linked list
  printf("Linked list: ");
  display(head);

  // Add an element to the beginning of the linked list
  addAtBeginning(&head, 0);
  modify(head, 0, 5);

  // Display the linked list again
  printf("Linked list after adding an element to the beginning: ");
  display(head);
  return 0;
}
