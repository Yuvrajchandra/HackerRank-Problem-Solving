void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* tempPtr=head;
    while(tempPtr!=NULL)
    {
        cout<<tempPtr->data<<endl;
        tempPtr=tempPtr->next;
    }
}
