#include "LinkedList.h"


LinkedList::LinkedList(){
	head = NULL;
	length = 0;
}

LinkedList::~LinkedList(){
	node *trav;
	node *prev = head;
	if(!head){
		return;
	}
	while(trav){
		trav = prev->next;
		delete prev;
		prev = trav;
	}
}

LinkedList::LinkedList(int length, string *value){
	this->length = length;
	node *newnode;
	node *trav = head;
	for(int i  = 0; i < length; i++){
		newnode = new node();

		newnode->name = value[i];
		newnode->next = NULL;

		if(i==0){
			head = newnode;
			trav = head;
		}
		else{
			trav->next = newnode;
			trav = trav->next;
		}
	}
}

void LinkedList::display(){
	if(head == NULL)
		return;
	node *trav  = head;
	while(trav){
		cout<<trav->name<<" ";
		trav  = trav->next;
	}
	cout<<endl;
}


LinkedList* LinkedList::combine(LinkedList* two){

/*Implement this function.*/


	return NULL;
}