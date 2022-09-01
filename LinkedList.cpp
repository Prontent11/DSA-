#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    
     Node(int data){
        this->data=data;
        this->next=NULL;
    }
    void insertBetween(int d){
       Node* newNode=new Node(d);
    
       Node*temp=this->next;
       this->next=newNode;
       newNode->next=temp; 
    }
    
    void prepend(Node*&head,int d){
        Node*newNode=new Node(d);
        newNode->next=head;
        head=newNode;
        
    }
     void append(int d){
        Node*newNode=new Node(d);
        Node*temp=this;
        while(temp->next=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        temp->next=newNode;
        
    }
    void printList(){
        Node*temp=this;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    
    void reverseList(Node*&head){
        Node*cur=head;
        Node*prev=NULL;
        Node*next=NULL;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            
        }
        head=prev;
    }
    
    
    
};

int main(){
    Node*head;
    Node*n1=new Node(10);
    Node*n2=new Node(20);
    Node*n3=new Node(30);
    head=n1;
    n1->next=n2;
    n2->next=n3;
    n1->insertBetween(50);
    n2->prepend(head,35);
    n2->append(45);
    
    head->reverseList(head);
    head->printList();
    
    
}