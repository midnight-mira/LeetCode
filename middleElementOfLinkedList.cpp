#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;
};

void push(struct Node** head, int nodeData){
  Node* newNode = new Node;
  
  newNode->data = nodeData;
  newNode->next = *head;
  
  (*head) = newNode;
}

void append(struct Node** head, int nodeData){
  Node* newNode = new Node;
  
  newNode->data = nodeData;
  newNode->next = NULL;
  
  Node* last = *head;
  if(*head == NULL){
    *head = newNode;
    return;
  }
  while(last->next != NULL){
    last = last->next;
    last->next = newNode;
    return;
  }
}

void displayList ( struct Node *node )  
{  
   while ( node != NULL )  
   {  
      cout << node -> data << "-->";  
      node = node -> next;  
   }  
   
if ( node== NULL)  
cout<<"null";   
}  

void insertAfter ( struct Node* prevNode, int nodeData )  
{  
if ( prevNode == NULL )  
{  
   cout << "the given previous node is required,cannot be NULL";   
   return;   
      
}   
   struct Node* newNode1 =new Node;   
   newNode1 -> data = nodeData;  
   newNode1 -> next = prevNode -> next;  
   prevNode -> next = newNode1;  
}

void middleNode (Node* head){
  Node* slow = head;
  Node* fast = head;
  
  while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }

    cout<< slow->data;
}

int main() 
{
  struct Node* head = NULL;  
append ( &head, 15 );   
push ( &head, 25 );   
push ( &head, 35 );   
append ( &head, 45 );  
insertAfter ( head -> next, 55 );  
   
cout << "Final linked list: " << endl;  
displayList (head);  
middleNode(head);
   
return 0;  
}