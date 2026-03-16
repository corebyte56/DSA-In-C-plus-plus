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

void deleteFirst(Node* &head){

    if(head == NULL){
        cout << "List empty";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
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

    deleteFirst(head);

    display(head);

}