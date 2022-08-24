#include<bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main(){

class Node{
    
    public:

		char data;
		Node* next;
		Node* prev;

		Node(char data){
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}

};


	Node* head = new Node('K');
	
	Node* first = NULL;
	first = new Node('A');
	head->next = first;
	first->prev = head;
	
	Node* second = NULL;
	second = new Node('S');
	first->next = second;
	second->prev = first;


	Node* third = NULL;
	third = new Node('H');
	second->next = third;
	third->prev = second;


	while(third != NULL){
		cout<<third->data<<endl;
		third = third->prev;
	}



}