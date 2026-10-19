#ifndef STACK_H
#define STACK_H

#include <vector>

class Stack {
public:
    std::vector<int> elements;
    Stack() {}

    void push(int element) {
        elements.push_back(element);
    }

    int top() {
        return elements.back();
    }

    int pop() {
        int value = elements.back();
        elements.pop_back();
        return value;
    }

    int size() {
        return (int)elements.size();
    }

    bool empty() {
        return elements.empty();
    }
};

#endif
