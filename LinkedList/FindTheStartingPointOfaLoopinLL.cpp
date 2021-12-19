Node* low = head;
Node* head = head;
while(low!=NULL and high!=NULL and high->next!=NULL){
	low=low->next;
	high=high->next->next;
	if(low==high){
		break;
	}
}
if(low!=high){
	return NULL;
}

low=head;
while(low!=high){
	low = low->next;
	high = high->next;
}

return low;