#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "Queue.h"
using namespace std;

int main()
{
    string expression;
    cin >> expression;

    Queue<int> queue;
    for (int i = 0; i < expression.length(); i += 3)
    {
        int num1 = expression[i] - '0';
        int num2 = expression[i + 2] - '0';
        char op = expression[i + 1];
        int result;
        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        }
        queue.push(result);
        cout << result << endl;
    }

    int sum = 0;
    while (!queue.empty())
    {
        sum += queue.peek();
        queue.pop();
    }
    cout << "Sum of the queue: " << sum << endl;

    return 0;
}

// Queue.h
#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue
{
public:
    Queue();
    ~Queue();
    bool empty() const;
    T peek() const;
    void push(const T& element);
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
Queue<T>::Queue() : size(0), capacity(1), front(0), back(0)
{
    elements = new T[capacity];
}

template <typename T>
Queue<T>::~Queue()
{
    delete[] elements;
}

template <typename T>
bool Queue<T>::empty() const
{
    return size == 0;
}

template <typename T>
T Queue<T>::peek() const
{
    return elements[front];
}

template <typename T>
void Queue<T>::push(const T& element)
{
    ensureCapacity();
    elements[back] = element;
    back = (back + 1) % capacity;
    ++size;
}

template <typename T>
void Queue<T>::pop()
{
    front = (front + 1) % capacity;
    --size;
}

template <typename T>
int Queue<T>::getSize() const
{
    return size;
}

template <typename T>
void Queue<T>::ensureCapacity()
{
    if (size == capacity)
    {
        T* old = elements;
        capacity *= 2;
        elements = new T[capacity];
        for (int i = 0; i < size; ++i)
        {
            elements[i] = old[(front + i) % size];
        }
        front = 0;
        back = size;
        delete[] old;
    }
}

#endif




