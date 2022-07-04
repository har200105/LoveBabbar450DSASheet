
if(N==0){
	return head;
}

Node* current = head;
int count=1;

while(count < N and current != NULL){
	current = current -> next;
	count++;
}

Node* nthNode = current;

while(current -> next != NULL){
	current = current->next;
}

current -> next = head;
head -> prev = current;
head = nthNode ->next;
head->prev = NULL;
nthNode->next = NULL;

