//
//  Queue.cpp
//  LabP7
//
//  Created by Alex Berthon on 10/26/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include "Queue.hpp"
template <class Type, int MaxQueue>
Queue<Type, MaxQueue>::Queue(){
    emptyQueue = -1;
    front = emptyQueue;
    back = emptyQueue;
}

template <class Type, int MaxQueue>
Queue<Type, MaxQueue>::~Queue(){
    delete [] items;
}

template <class Type, int MaxQueue>
int Queue<Type, MaxQueue>::empty(){
    return back == emptyQueue;
}

template <class Type, int MaxQueue>
int Queue<Type, MaxQueue>::full(){
   return back+1 == MaxQueue;
}

template <class Type, int MaxQueue>
int Queue<Type, MaxQueue>::size(){
    return back-front+1;
}

template <class Type, int MaxQueue>
Type Queue<Type, MaxQueue>::getFront(){
    return front;
}

template <class Type, int MaxQueue>
Type Queue<Type, MaxQueue>::getBack(){
    return back;
}

template <class Type, int MaxQueue>
void Queue<Type, MaxQueue>::push(Type c){
    items[++front] = c;
}

template <class Type, int MaxQueue>
Type Queue<Type, MaxQueue>::pop(){
    return items[--back];
}
