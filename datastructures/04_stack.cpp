#include <iostream>

using namespace std;

class Stack{
    int *arr;
    int capacity;
    int top;
  public:
    Stack(int cap){
      capacity = cap;
      arr = new int[capacity];
      top = -1;
    }

    void push(int val){

      if (top == capacity - 1){
        cout << "Stack overflow\n";
        return;
      }

      arr[++top] = val;
    }

    int pop(){
      if (top == -1){
        cout << "Stack Empty(Underflow)\n";
        return -1;
      }

      return arr[top--];
    }

    int peek(){
      if (top == -1){
        cout << "Stack Empty\n";
        return -1;
      }

      return arr[top];
    }

    bool isEmpty(){
      return top == -1;
    }

    bool isFull(){
      return top == capacity - 1;
    }
    
};

int main(){
  Stack st(4); // size of array 4

  st.push(33);
  st.push(707);
  st.push(12);
  st.push(92);

  cout << "Popped " << st.pop() <<endl;

  cout << "Top Element " << st.peek()<<endl;

  cout << "is stack empty: " << (st.isEmpty() ? "YES" : "NO") << endl;

  st.push(48);
  cout << "is stack full: " << (st.isFull() ? "YES" : "NO") <<endl;

  return 0;
}
