#include <iostream>

using namespace std;

class Queue {
  int *arr;
  int capacity;
  int size;

public:
  Queue(int cap) {
    capacity = cap;
    arr = new int[capacity];
    size = 0;
  }

  void enqueue(int val) {
    if (size == capacity) {
      cout << "Queue Overflow\n";
      return;
    }

    arr[size++] = val;
  }

  int dequeue() {
    if (size == 0) {
      cout << "Queue Underflow\n";
      return -1;
    }
    int popped_val = arr[0];
    // remove element from front and shift elements
    for (int i = 1; i < size; i++) {
      arr[i - 1] = arr[i];
    }

    return popped_val;
  }

  int getFront() {
    if (size == 0) {
      cout << "Queue Underflow\n";
      return -1;
    }

    return arr[0];
  }

  int getRear() {
    if (size == 0) {
      cout << "Queue Underflow\n";
      return -1;
    }

    return arr[size - 1];
  }

  bool isEmpty() { return size == 0; }

  bool isFull() { return size == capacity; }
};

int main(){
    Queue q(3);

    q.enqueue(33);
    q.enqueue(202);
    q.enqueue(11);

    cout << "Front element: " <<q.getFront() << endl;
    q.dequeue();
    cout << "Front element: " <<q.getFront() << endl;
    cout << "Rear element: " <<q.getRear() << endl;

    q.enqueue(44);

    return 0;
}
