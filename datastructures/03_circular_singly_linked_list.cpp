#include <iostream>

using namespace std;

class Node{
  public:
    int data;
    Node *next;

    Node(int val){
      data = val;
      next = nullptr;
    }
};

class CircularSinglyLinkedList{
  public:
    void printList(Node *last){
      Node *head = last->next;
      Node* temp = head;
    }
};

int main(){
  Node *head = new Node(22);
  head->next = new Node(59);
  head->next->next = new Node(91);
  Node *tail = new Node(73);
  head->next->next->next = tail;
  tail->next = head;

  CircularSinglyLinkedList cll;
  cll.printList(head);
}
