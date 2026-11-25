/*Question 15:
Write a program to detect a cycle in link list 
Do the complexity analysis also.*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//detect cycle
int detectCycle(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;  
        }
    }

    return 0; 
}

struct Node* createNode(int data) {
    struct Node *newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

int main() {

    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    head->next->next->next->next->next =
        head->next->next;

    if (detectCycle(head)) {
        printf("Cycle detected in the linked list.");
    }
    else {
        printf("No cycle detected in the linked list.");
    }

    return 0;
}
