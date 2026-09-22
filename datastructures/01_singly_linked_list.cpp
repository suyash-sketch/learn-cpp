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
      while (head != nullptr){
        cout << head->data << "->";
        head = head->next;
      }
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
};

int main(){
  // Node* head = new Node(10);
  // head->next = new Node(20);
  // head->next->next = new Node(30);

  LinkedList ll;
  // ll.printList(head);
  int n;
  cout << "Enter the number of elements in linked list\n";
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elements\n";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  Node* head = ll.convertArrayToLinkedList(arr);

  ll.printList(head);
  return 0;

}
