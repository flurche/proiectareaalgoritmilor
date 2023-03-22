#include "liste.h"
#include <stdlib.h>
#include <stdio.h>

void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

void modify(Node *head, int k, Data newVal)
{
    int i = 0;
    Node *temp = head;

    // Traverse the list until the k-th element is reached
    while (i < k && temp != NULL) {
        temp = temp->next;
        i++;
    }

    // If the k-th element exists, modify its value
    if (temp != NULL) {
        temp->val = newVal;
    }
}
