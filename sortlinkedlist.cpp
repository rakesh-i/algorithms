//sorting of a linked list
#include<iostream>
#include<cstring>
#include<math.h>
#include<cfloat>

struct Node{
    int data;
    Node* next;
};

void insert(Node**, int);
void sort(Node**, Node*);
void print(Node**);

int main()
{
    Node *head = NULL;
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    insert(&head, 1);
    insert(&head, 9);
    print(&head);
}

void insert(Node **head, int a){
    Node *temp1 = new Node();
    temp1->next = NULL;
    temp1->data = a;
    sort(head, temp1);
}

void sort(Node **head, Node *t){
    static int count = 0;
    Node *temp1 = *head;
    Node *prev = temp1;
    if(count==0){               //first element
        *head = t;
        count++;
        return;
    }
    while((temp1!=NULL)&&(t->data>temp1->data)){ //parsing throug the list
        prev = temp1;
        temp1 = temp1->next;
    }
    if(t->data<(*head)->data){                  //less than first case.
        t->next = *head;
        *head = t;
        return;
    }
    t->next = temp1;
    prev->next = t;
    count++;                                    //counting the element;
}

void print(Node **head){
    Node *temp = *head;
    while(temp!=NULL){
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
    std::cout<<std::endl;
}

