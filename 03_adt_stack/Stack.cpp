// TASK 03 -- The Stack ADT's implementation
//
// This is where "how" lives. We chose std::vector as the backing
// storage: push_back is our push, back() is our top, pop_back() is our
// pop. A student could rewrite this whole file to use a raw fixed-size
// array instead, and as long as push/pop/top/isEmpty/size still behave
// the same way, nothing calling this class would ever notice.

#include "Stack.h"

#include <iostream>
#include <ostream>

void Stack::push(int value) {
    // TODO: add value to the top of data_ (vector has a method for this)
    if (topIndex == 99) {
        std::cout<<"Stack overflow"<<std::endl;
    }
    else {
        data[topIndex] = value;
        topIndex++;
    }
}

void Stack::pop() {
    // TODO: if data_ isn't empty, remove the top element
    if (isEmpty()) {
        std::cout<<"Stack underflow"<<std::endl;
    }
    else {
        topIndex--;
        data[topIndex] = -1;
    }
}

int Stack::top() const {
    // undefined if empty -- callers should check isEmpty() first. We'll
    // harden this kind of thing later in the course.
    if (isEmpty()) {
        std::cout<<"Stack is empty"<<std::endl;
        return -1;
    }
    else {
        return data[topIndex - 1];
    }
}

bool Stack::isEmpty() const {
    if (topIndex > 0) {
        return false;
    }
    else {
        return true;
    }
}

bool Stack::isFull() const {
    if (topIndex != 99) {
        return false;
    }
    else {
        return true;
    }
}

int Stack::size() const {
    return (topIndex);
}
