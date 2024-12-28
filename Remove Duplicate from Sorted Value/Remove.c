#include <stdio.h>

// Helper functions to create and print the linked list
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Create a sorted linked list: [1, 1, 2, 3, 3]
    struct ListNode* head = createNode(1);
    head->next = createNode(1);
    head->next->next = createNode(2);
    head->next->next->next = createNode(3);
    head->next->next->next->next = createNode(3);
    
    printf("Original list: ");
    printList(head);
    
    // Remove duplicates
    head = deleteDuplicates(head);
    
    printf("After removing duplicates: ");
    printList(head);
    
    return 0;
}
