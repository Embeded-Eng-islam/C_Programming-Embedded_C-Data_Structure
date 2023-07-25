/*
 * linked_list.c
 *
 *  Created on: Mar 15, 2023
 *      Author: ELBOSTAN
 */

#include "stdio.h"
#include "stdlib.h"
#include"conio.h"
struct node{
  int data;
  struct node* ptr;

};
int main(){
struct node* first= (struct node*)malloc(sizeof(struct node));
struct node* second= malloc(sizeof(struct node));
struct node* third= malloc(sizeof(struct node));
struct node* head;
first->data=1;
second->data=2;
third->data=3;
first->ptr=second;
second->ptr=third;
third->ptr=0;
//when you add data middel
struct node* add =malloc(sizeof(struct node));
first->ptr=add;
add->ptr=second;
add->data=10;
//********* when you add data in the begaining
struct node* begain =malloc(sizeof(struct node));
head=begain;
begain->ptr=first;
begain->data=0;
//********when you add data at the end
struct node* last_item =malloc(sizeof(struct node));
third->ptr=last_item ;
last_item->ptr=0;
last_item->data=1000;
struct node* n=head;
while(n!=0){
	printf( "the num = %d \n",n->data);
			n=n->ptr;
}


return 0;
}
