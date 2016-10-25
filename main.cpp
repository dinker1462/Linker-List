//
//  main.cpp
//  Linker List 24-10-16
//
//  Created by Dinker on 10/24/16.
//  Copyright © 2016 Dinker. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    node* link;
    int data;
};
node * enterathead(node *head)
{
node *temp;
if(head==NULL)
{
head=new node;
cin>>head->data;
head->link=NULL;
}
else{
temp=new node;
temp->link=head;
head=temp;
cin>>temp->data;
}
return head;
}
void display(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main() {
    node *head=NULL;
   
cout<<"1. insertion at begining";
int a;
cin>>a;
if(a==1)
{
head=enterathead(head);
}
 display(head);
    return 0;
}
