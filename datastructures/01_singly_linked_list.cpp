#include <iostream>
#include <vector>

using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node(int val){
      data = val;
      next = nullptr;
    }
};

class LinkedList{
  public:
    void printList(Node* head){
      Node* temp = head;
      while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }

  Node* convertArrayToLinkedList(vector<int> &arr){

      Node* head = new Node(arr[0]);
      Node* mover = head;

      for (int i=1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next; // or mover = tempk
      }

      return head;
    }    

    Node* insertAtBeginning(Node* head, int new_val){
      Node* newNode= new Node(new_val);
      newNode->next = head;
      head = newNode;

      return head;
    }

    Node* insertAtEnd(Node* head, int new_val){
      Node* newNode = new Node(new_val);

      // if list is empty, make newNode and return it as head
      if (head == nullptr){
        return newNode;
      }
      
      Node* temp = head;

      while (temp->next != nullptr){
        temp = temp->next;
      }

      temp->next = newNode;

      return head;
    }


    // 1 based indexing
    Node* insertAtPosition(Node* head, int new_val, int position){
      
      
      if (position < 1){
        return head;
      }

      // head will change position if pos = 1
      if (position == 1){
        Node* newNode = new Node(new_val);
        newNode->next = head;
        head = newNode;
        return head;
      }
      
      Node* curr = head;

      for (int i = 1; i < position - 1 && curr != nullptr; i++){
        curr = curr->next;
      }

      Node* newNode = new Node(new_val);

      newNode->next = curr->next;
      curr->next = newNode;

      return head;
    }

    Node* deleteFromBeginning(Node* head){

      // if list empty
      if (head ==nullptr){
        return nullptr;
      }

      Node *temp = head;

      head = head->next;
      // free the memory of the hold head
      delete temp;
      
      return head;
    }

    Node* deleteFromEnd(Node* head){

      // If the list is empty, return nullptr
      if (head == nullptr){
        return nullptr;
      }

      // If the list has only one node, delete it and return nullptr
      if (head->next ==nullptr){
        delete head;
        return nullptr;
      }

      Node *secondLast = head;
      // find the second last node
      while (secondLast->next->next != nullptr){
        secondLast =secondLast->next;
      }

      delete secondLast->next;
      
      secondLast->next = nullptr;

      return head;
    }

    Node * deleteFromPosition(Node* head, int position){
      if (position < 1){
        return nullptr;
      }

      if (position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
      }

      Node *temp = head;
      for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
      }

      temp->next = temp->next->next;

      return head;
    }
};

int main(){
  LinkedList ll;
  // Node* head = new Node(10);
  // head->next = new Node(20);
  // head->next->next = new Node(30);

  // ll.printList(head);
  // int n;
  // cout << "Enter the number of elements in linked list\n";
  // cin >> n;
  // vector<int> arr(n);
  // cout << "Enter the elements\n";
  // for (int i = 0; i < n; i++){
  //   cin >> arr[i];
  // }

  vector<int> arr = {3,7,1,22};
  
  Node* head = ll.convertArrayToLinkedList(arr);

  // Node* head = ll.insertAtBeginning(nullptr, 43);
  ll.printList(head);

  head = ll.insertAtBeginning(head, 43);
  ll.printList(head);
  
  head = ll.insertAtEnd(head, 84);
  ll.printList(head);

  head = ll.insertAtEnd(head, 31);
  ll.printList(head);

  head = ll.insertAtPosition(head, 58, 3);
  ll.printList(head);

  head = ll.deleteFromBeginning(head);
  ll.printList(head);

  head = ll.deleteFromEnd(head);
  ll.printList(head);
  
  head = ll.deleteFromPosition(head, 3);
  ll.printList(head);
  return 0;

}
