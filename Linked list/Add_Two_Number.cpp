/*
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

ListNode* createNode(int val) {
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l3 = createNode(0);
    int carry = 0;
    ListNode* head = l3;
    int value = 0;

    while (l1 && l2) {
        value = l1->val + l2->val + carry;
        carry = value / 10;
        l3->next = createNode(value % 10);
        l3 = l3->next;
        l2 = l2->next;
        l1 = l1->next;
    }

    while (l1) {
        value = l1->val + carry;
        carry = value / 10;
        l3->next = createNode(value % 10);
        l3 = l3->next;
        l1 = l1->next;
    }

    while (l2) {
        value = l2->val + carry;
        carry = value / 10;
        l3->next = createNode(value % 10);
        l3 = l3->next;
        l2 = l2->next;
    }

    if (carry > 0) {
        l3->next = createNode(carry);
    }

    ListNode* result = head->next;
    free(head);
    return result;
}

// Helper Function to print the Linked List
void printList(ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) {
            printf(" -> ");
        }
        head = head->next;
    }
    printf("\n");
}

int main() {
    ListNode* l1 = createNode(2);
    l1->next = createNode(4);
    l1->next->next = createNode(3);

    ListNode* l2 = createNode(5);
    l2->next = createNode(6);
    l2->next->next = createNode(4);

    printf("List 1: ");
    printList(l1);

    printf("List 2: ");
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    printf("Result: ");
    printList(result);

    return 0;
}

  */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        int carry = 0;
        ListNode* head = l3;
        int value = 0;
         while(l1 && l2){
            value = l1 -> val + l2 -> val + carry;
            carry = value / 10;
            l3 -> next = new ListNode(value % 10);
            l3 = l3 -> next;
            l2 = l2 -> next;
            l1 = l1 -> next;
         }
        
        while (l1){
            value = l1 -> val + carry;
            carry = value / 10;
            l3 -> next = new ListNode(value % 10);
            l3 = l3 -> next;
            l1 = l1 -> next;
         }
        while (l2){
            value = l2 -> val + carry;
            carry = value / 10;
            l3 -> next = new ListNode(value % 10);
            l3 = l3 -> next;
            l2 = l2 -> next;
        }

        if (carry > 0){
            l3->next = new ListNode(carry);
        }
         return head -> next ;
    }
};