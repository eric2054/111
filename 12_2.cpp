#include <iostream>
#include <iomanip>
#include "Queue.h"
using namespace std;

int main() {
    Queue<char> queue;
    char input[12];
    cin >> input;
    for (int i = 0; i < 12; i++) {
        queue.push(input[i]);
    }
    while (queue.getSize() > 1) {
        char a = queue.peek();
        queue.pop();
        char op = queue.peek();
        queue.pop();
        char b = queue.peek();
        queue.pop();
        int result = 0;
        switch (op) {
            case '+':
                result = (a - '0') + (b - '0');
                break;
            case '-':
                result = (a - '0') - (b - '0');
                break;
            case '*':
                result = (a - '0') * (b - '0');
                break;
            case '/':
                result = (a - '0') / (b - '0');
                break;
        }
        cout << result << endl;
        queue.push(result + '0');
    }
    cout << "Sum of the queue: " << queue.peek() - '0' << endl;
    return 0;
}

// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue {
public:
    Queue();
    ~Queue();
    bool empty() const;
    T peek() const;
    void push(T value);
    void pop();
    int getSize() const;
private:
    T* elements;
    int size;
    int capacity;
    int front;
    int back;
    void ensureCapacity();
};

template <typename T>
Queue<T>::Queue() {
    capacity = 16;
    elements = new T[capacity];
    size = 0;
    front = 0;
    back = 0;
}

template <typename T>
Queue<T>::~Queue() {
    delete[] elements;
}

template <typename T>
bool Queue<T>::empty() const {
    return size == 0;
}

template <typename T>
T Queue<T>::peek() const {
    return elements[front];
}

template <typename T>
void Queue<T>::push(T value) {
    ensureCapacity();
    elements[back] = value;
    back = (back + 1) % capacity;
    size++;
}

template <typename T>
void Queue<T>::pop() {
    front = (front + 1) % capacity;
    size--;
}

template <typename T>
int Queue<T>::getSize() const {
    return size;
}

template <typename T>
void Queue<T>::ensureCapacity() {
    if (size >= capacity) {
        T* old = elements;
        elements = new T[2 * capacity];
        for (int i = 0; i < size; i++) {
            elements[i] = old[(front + i) % capacity];
        }
        front = 0;
        back = size;
        capacity *= 2;
        delete[] old;
    }
}

#endif




