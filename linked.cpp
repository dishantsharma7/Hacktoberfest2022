#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node( int data){
        this->data= data;
        this->next=NULL;
    }
   
};
 void insertathead(node* &head, int d){
        node* temp= new node(d);
        temp->next=head;
        head=temp;
    }
    void print(node* &head){
        node* temp=head; 
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp=temp->next;

            
        }
    }

int main(){
node* n1= new node(50);
node* head = n1;
print(head);
cout<<endl;
insertathead(head,20);
print(head);
cout<<endl;
return 0;
}
