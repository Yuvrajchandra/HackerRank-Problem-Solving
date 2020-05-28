SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temphead=head;
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
  
    for(int i=0; i<position-1; i++)
    {
        temphead=temphead->next;
    }  
    newNode->next=temphead->next;
    temphead->next=newNode;
    return head;
}
