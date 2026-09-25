#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  Node(int val) {
    data = val;
    prev = nullptr;
    next = nullptr;
  }
};

class DoublyLinkedList {
public:
  void forwardTraversal(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
      cout << curr->data;
      if (curr->next != nullptr) {
        cout << " <-> ";
      }
      curr = curr->next;
    }
    cout << endl;
  }

  void backwardTraversal(Node *head) {
    Node *curr = head;
    // go to the end node first
    while (curr->next != nullptr) {
      curr = curr->next;
    }

    // just reassigning for easier understanding
    Node *tail = curr;

    while (tail != nullptr) {
      cout << tail->data;
      if (tail->prev != nullptr) {
        cout << " <-> ";
      }
      tail = tail->prev;
    }
    cout << endl;
  }

  Node *insertAtBeginning(Node *head, int new_val) {

    Node *newNode = new Node(new_val);

    newNode->next = head;

    // if LL is not empty, update prev pointer to newNode
    if (head != nullptr) {
      head->prev = newNode;
    }
    head = newNode;

    return head;
  }

  Node* insertAtEnd(Node *head, int new_val){
    Node *newNode = new Node(new_val);

    //if the list is empty return new node as head
    if (head == nullptr){
      head = newNode;
      return head;
    }
    // reach the end node
    Node *curr = head;
    while (curr->next != nullptr){
      curr = curr->next;
    }

    curr->next = newNode;
    newNode->prev = curr;

    return head;
  }
  
  Node* insertAtPosition(Node *head, int position, int new_val){
    Node *newNode = new Node(new_val);

    Node *curr = head;
    for (int i = 1; i < position - 1 && curr != nullptr; i++){
      curr = curr->next;
    }

    if (curr->next == nullptr){
      curr->next = newNode;
      newNode->prev = curr;
      return head;
    }
    newNode->next = curr->next;
    curr->next->prev = newNode;
    curr->next = newNode;
    newNode->prev = curr;

    return head;
  }

  Node* deleteFromFront(Node *head){

    if (head == nullptr){
      return nullptr;
    }

    
    head = head->next;
    delete head->prev;
    head->prev = nullptr;

    return head;
  }

  Node* deleteFromEnd(Node* head){
    if (head == nullptr){
      return nullptr;
    }

    if (head->next == nullptr){
      delete head;
      return nullptr;
    }

    // move to end
    Node *temp = head;
    while (temp->next != nullptr){
      temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;

    return head;
  }

  Node *deleteFromPosition(Node *head, int position){

    // if list is empty
    if (head == nullptr){
      return nullptr;
    }
    Node *curr = head;
    for (int i = 1; i < position && curr != nullptr; i++){
      curr = curr->next;
    }

    // if node to delete is not the first node, update previous node's next
    if (curr->prev != nullptr) {
      curr->prev->next = curr->next;
    }

    // if node to delete is not the last node
    if (curr->next != nullptr){
    curr->next->prev = curr->prev;
    }

    // if deleting the head 
    if (head == curr){
      head = curr->next;
    }

    delete curr;
    return head;  
  }
};

int main() {
  // first node
  Node *head = new Node(10);

  // second node
  head->next = new Node(44);
  head->next->prev = head;

  // third node
  head->next->next = new Node(210);
  head->next->next->prev = head->next;

  // fourth node
  head->next->next->next = new Node(67);
  head->next->next->next->prev = head->next->next;

  DoublyLinkedList dll;

  dll.forwardTraversal(head);

  dll.backwardTraversal(head);

  head = dll.insertAtBeginning(head, 33);
  dll.forwardTraversal(head);

  head = dll.insertAtEnd(head, 909);
  dll.forwardTraversal(head);

  head = dll.insertAtPosition(head, 3, 87);
  dll.forwardTraversal(head);

  head = dll.deleteFromFront(head);
  dll.forwardTraversal(head);

  head = dll.deleteFromEnd(head);
  dll.forwardTraversal(head);

  head = dll.deleteFromPosition(head, 3);
  dll.forwardTraversal(head);
  return 0;
}
