#ifndef REVERSE_H
#define REVERSE_H

#include <vector>
#include "stack.h"

std::vector<int> reverse(std::vector<int> a) {
    std::vector<int> reversed;
    Stack stack;
    for( const auto& num : a ){
        stack.push(num);
    }
    while(!stack.empty()){
        reversed.push_back(stack.pop());
    }
    return reversed;
}
#endif

