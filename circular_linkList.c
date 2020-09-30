#include <stdio.h>
#include <stdlib.h>

struct Node {
        int data;
        struct Node *next;
    };

void linkedlisttraversal (struct Node *head)
{
    struct Node *ptr = head;
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    // while (ptr != head)
    // {
    //     printf("%d\n", ptr->data);
    //     ptr = ptr->next;
    // }
    do {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr != head);
    
    
}
struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node)); // jisko insert karna h usko ptr point kr rha h
    ptr->data = data;
    struct Node *p = head->next; //p is a pointer pointing next to node.
    while (p->next != head){
        p = p->next; //At this point p points to the last node of this circular linked list.

    }
    p->next = ptr;
    ptr->next = head;
    head = ptr ;
    return head;
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    four = (struct Node *) malloc(sizeof(struct Node));

    head->data = 4;
    (*head).next = second;

    second->data = 3;
    second->next = third;

    third->data = 6;
    third->next = four;

    four->data = 1;
    four->next = head;
    head = insertAtFirst(head, 8);
    linkedlisttraversal(head);
    return 0;
}