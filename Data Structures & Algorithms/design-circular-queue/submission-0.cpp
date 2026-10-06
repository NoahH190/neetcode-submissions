class Node {
public:
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

class MyCircularQueue {
private:
    Node* rear;
    int capacity;
    int count;

public:
    MyCircularQueue(int k) : rear(nullptr), capacity(k), count(0) {}

    ~MyCircularQueue() {
        while (!isEmpty()) deQueue();
    }

    bool enQueue(int value) {
        if (isFull()) return false;
        Node* newNode = new Node(value);
        if (isEmpty()) {
            newNode->next = newNode;
        } else {
            newNode->next = rear->next;
            rear->next = newNode;
        }
        rear = newNode;
        count++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        if (rear->next == rear) {
            delete rear;
            rear = nullptr;
        } else {
            Node* front = rear->next;
            rear->next = front->next;
            delete front;
        }
        count--;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : rear->next->value;
    }

    int Rear() {
        return isEmpty() ? -1 : rear->value;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */