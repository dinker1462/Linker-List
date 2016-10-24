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

void display(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main() {
    node *head=NULL;
    display(head);
    return 0;
}
