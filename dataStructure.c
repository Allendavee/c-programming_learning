// A simple C program for
// traversal of a linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// This function prints contents of linked list starting
// from the given node
void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

// Driver's code
int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;
    int sum;

    // allocate 4 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;      // assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // assign data to second node
    second->next = third;

    scanf("%d", &sum);

    third->data = sum; // assign data to third node
    third->next = fourth;

    fourth->data = 45; // assign data to fourth node
    fourth->next = NULL;

    // Function call
    printList(head);

    printf("\n");

    sum = second->data + fourth->data;
    printf("%d \n", sum);

    printf("%lu", sizeof(struct Node));

    return 0;
}
