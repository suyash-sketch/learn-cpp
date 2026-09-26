#include <future>
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

      do {
        cout << temp->data << " ";
        temp = temp->next;
        
      } while (temp != head);
      cout << endl;
    }

    Node *insertAtBeginning(Node *tail, int new_val){
      Node *newNode = new Node(new_val);

      if (tail == nullptr){
        newNode->next = newNode;
        return newNode;
      }

      newNode->next = tail->next;
      tail->next = newNode;

      return tail;
    }

    Node *insertAtEnd(Node *tail, int new_val){
      Node *newNode = new Node(new_val);
      if (tail == nullptr){
        newNode->next = newNode;
        return newNode;
      }

      Node *curr = tail;
      newNode->next = curr->next;
      curr->next = newNode;

      tail = newNode;
      return tail;
    }

    Node *insertAtPosition(Node *tail, int position, int new_val){

      if (tail == nullptr){
        // if list is empty
        if (position != 1){
            cout << "Invalid position" << endl; 
        }

        // create a new node and make it point to itself
        Node *newNode = new Node(new_val);
        newNode->next = newNode;
        return newNode;
      }

      Node *newNode = new Node(new_val);

      Node *curr = tail->next;

      if (position == 1){
        newNode->next = curr;
        tail->next = newNode;

        return tail;
      }

      // traverse to position
      for (int i = 1; i < position - 1; i++){
        curr = curr->next;

        // if position is out of bounds
        if (curr == tail->next){
          cout << "Invalid Position" <<endl;
          return tail;
        }
      }

      // insert new node
      newNode->next = curr->next;
      curr->next =  newNode;

      // update tail if the new node is inserted at end
      if (curr == tail) tail = newNode;

      return tail;
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
  cll.printList(tail);

  tail = cll.insertAtBeginning(tail, 39);
  cll.printList(tail);

  tail = cll.insertAtEnd(tail, 303);
  cll.printList(tail);

  tail = cll.insertAtEnd(tail, 03);
  cll.printList(tail);

  tail = cll.insertAtPosition(tail, 3, 46);
  cll.printList(tail);
}
