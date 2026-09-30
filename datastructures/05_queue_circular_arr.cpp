#include <iostream>

using namespace std;

class CircularQueue{
  int *arr;
  int front;
  int size; // current number of elements in queue
  int capacity;

  public:
    CircularQueue(int cap){
      capacity = cap;
      arr = new int[capacity];
      front = 0;
      size = 0;
    }

    void print(){
      for (int i = 0; i < size; i++){
        int index = (front + i) % capacity;
        cout << arr[index] << " ";
      }
      cout <<"\n";
    }

    void enqueue(int val){

      if (size == capacity){
        cout << "Queue Overflow\n";
        return;
      }

      int rear = (front + size) % capacity;
      arr[rear] = val;
      size++;
    }    

    int dequeue(){
      if (size == 0){
        cout << "Queue is Empty\n";
        return -1;    
      }
      int val = arr[front];
      front = (front + 1) % capacity;
      size--;

      return val;
    }

    int getRear(){
      if (size == 0){
        cout << "Queue is Empty\n";
        return -1;
      }

      int rear = (front + size - 1) % capacity;
      return arr[rear];
    }

    int getFront(){
      if (size == 0){
        cout << "Queue queue\n";
        return -1;
      }

      return arr[front];
    }
};

int main(){
  CircularQueue q(5);
  q.enqueue(10);
  q.enqueue(22);
  q.enqueue(81);
  q.enqueue(102);
  q.enqueue(47);

  q.print();

  q.dequeue();
  q.dequeue();
  q.print();

  q.enqueue(57);
  q.enqueue(7);
  q.print();
}
