//
//  Queue.hpp
//  LabP7
//
//  Created by Alex Berthon on 10/26/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
template <class Type, int MaxQueue>

class Queue{
    int emptyQueue;
    Type items[MaxQueue];
    int front;
    int back;
public:
    Queue();
    ~Queue();
    int empty();
    int full();
    int size();
    Type getFront();
    Type getBack();
    void push(Type);
    Type pop();
};




#endif /* Queue_hpp */
