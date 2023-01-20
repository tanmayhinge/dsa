using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {

  LinkedList* head = linkedList;
  while(head->next != nullptr){
    if(head->value == head->next->value){
      head->next = head -> next -> next;
      continue;
    }
    head = head -> next;
  }

  return linkedList;
}
