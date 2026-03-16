#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertBeginning(Node* &head, int val){
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node* head = NULL;

    insertBeginning(head,10);
    insertBeginning(head,20);
    insertBeginning(head,30);

    printList(head);
}