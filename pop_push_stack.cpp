#include <iostream>
#include <string>
#include "GenericStack.h"
using namespace std;

template<typename T>
void printStack(Stack<T>& stack)
{
    while (!stack.empty())
        cout << stack.pop() << " ";
    cout << endl;
}

//51+(54*(3+2))=321
//3 * 2 + 7 - 9 / 3
int main()
{
    // Create a stack of int values
    Stack<int> intStack;
    Stack<char> charStack;
    char op;
    int op1, op2, result;
    intStack.push(3);
    charStack.push('*');
    intStack.push(2);
    op = charStack.pop();
    op1 = intStack.pop();
    op2 = intStack.pop();
    if (op == '+')
        intStack.push(op2 + op1);
    else if (op == '-')
        intStack.push(op2 - op1);
    else if (op == '*')
        intStack.push(op2 * op1);
    else if (op == '/')
        intStack.push(op2 / op1);
    charStack.push('+');
    intStack.push(7);
    op = charStack.pop();
    op1 = intStack.pop();
    op2 = intStack.pop();
    if (op == '+')
        intStack.push(op2 + op1);
    else if (op == '-')
        intStack.push(op2 - op1);
    else if (op == '*')
        intStack.push(op2 * op1);
    else if (op == '/')
        intStack.push(op2 / op1);
    charStack.push('-');
    intStack.push(9);
    charStack.push('/');
    intStack.push(3);
    while (!charStack.empty())
    {
        op = charStack.pop();
        op1 = intStack.pop();
        op2 = intStack.pop();
        if (op == '+')
            intStack.push(op2 + op1);
        else if (op == '-')
            intStack.push(op2 - op1);
        else if (op == '*')
            intStack.push(op2 * op1);
        else if (op == '/')
            intStack.push(op2 / op1);
    }

    result = intStack.pop();
    cout << result << endl;
    return 0;
}

//GenericStack.h
#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
public:
  Stack();
  bool empty() const;
  T peek() const;
  void push(T value);
  T pop();
  int getSize() const;

private:
  T elements[100];
  int size;
};

template<typename T>
Stack<T>::Stack()
{
  size = 0;
}

template<typename T>
bool Stack<T>::empty() const
{
  return (size == 0);
}

template<typename T>
T Stack<T>::peek() const
{
  return elements[size - 1];
}

template<typename T>
void Stack<T>::push(T value)
{
  elements[size++] = value;
}

template<typename T>
T Stack<T>::pop()
{
  return elements[--size];
}

template<typename T>
int Stack<T>::getSize() const
{
  return size;
}

#endif
