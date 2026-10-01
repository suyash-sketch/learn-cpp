#include <iostream>

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

class Queue{
  public:
    Node *front;
    Node *rear;

    Queue(){
      front = rear = nullptr;
    }

    void enqueue(int new_val){
      Node *newNode = new Node(new_val);

      if (isEmpty()){
        front = rear = newNode;
        return;
      }

      rear->next = newNode;
      rear = newNode;
    }

    int dequeue(){
      if (isEmpty()){
        cout << "Queue empty\n";
        return -1;
      }

      Node *temp = front;

      int removedData = temp->data;

      front = front->next;

      if (front == nullptr) {
        rear = nullptr;
      }

      delete temp;

      return removedData;
    }

    bool isEmpty(){
      return front == nullptr;
    }


    int getFront(){
      if (isEmpty()){
        cout << "Queue empty\n";
        return -1;
      }

      return front->data;
    }
};

int main(){
  Queue q;

  q.enqueue(33);
  q.enqueue(595);
  q.enqueue(19);

  cout << q.dequeue() << endl;

  cout << q.getFront() <<endl;
}
