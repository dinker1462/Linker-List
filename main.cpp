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
void insertend(node *head)
{
	node* temp=head;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	newnode= new node;
	cout<<"Enter the data :";
	cin>>newnode->data;
	temp->link=newnode;
	newnode->link=NULL;
}

void display(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main() {
    node *head=NULL;
    display(head);
	int a;
	cout<<"Press 3 to Insert at end"<<endl;
	cin>>a;
	if(a==3)
	{
		insertend(head);
	}
    return 0;
}
