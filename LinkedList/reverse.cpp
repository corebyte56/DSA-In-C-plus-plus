#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertEnd(Node* &head, int val){

    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

Node* reverseList(Node* head){

    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr != NULL){

        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

    }

    return prev;
}

void display(Node* head){

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}

int main(){

    Node* head = NULL;

    insertEnd(head,10);
    insertEnd(head,20);
    insertEnd(head,30);

    head = reverseList(head);

    display(head);

}