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

class Stack{
  Node *top;

  public:
    Stack(){
      // initialize empty stack
      top = nullptr;
    }

    void push(int val){
      Node *newNode = new Node(val);
      newNode->next = top;
      top = newNode;
    }

    int pop(){
      if (top == nullptr){
        cout << "Stack empty\n";
        return -1;
      }

      Node *temp = top;
      top = temp->next;
      int val = temp->data;
      delete temp;

      return val;
    }

    int peek(){
      if (top == nullptr){
        cout << "Stack empty\n";
        return -1;
      }

      return top->data;
    }

    bool isEmpty(){
      return top == nullptr;
    }
};

int main(){
  Stack st;

  st.push(11);
  st.push(29);
  st.push(232);

  cout << "Popped: " << st.pop() << endl;

  cout << "Top element: " << st.peek() << endl;

  cout << "Is stack empty: " << st.isEmpty() <<endl;

  return 0;
}
