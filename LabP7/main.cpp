//
//  main.cpp
//  LabP7
//
//  Created by Alex Berthon on 10/26/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#include <iostream>
#include "Queue.hpp"

int main(int argc, const char * argv[]) {
        Queue <std::string, 5> q;
        //Test empty().
        std::cout << "Test empty(). Expected 1" << std::endl;
        std::cout << q.empty() << std::endl;
        
        //Test push().
        q.push("Apple");
        q.push("Orange");
        q.push("Grape");
        q.push("Strawberry");
        q.push("Blueberry");
        
        //Test pop(). Expected "Apple"
        std::cout << "Test pop(). Expected \"Apple\"" << std::endl;
        std::cout << q.pop() << std::endl;
        
        //Test size(). Expected 4
        std::cout << "Test size(). Expected 4" << std::endl;
        std::cout << q.size() << std::endl;
        
        //Test getFront(). Expected "Orange"
        std::cout << "Test getFront(). Expected \"Orange\"" << std::endl;
        std::cout << q.getFront() << std::endl;
        
        //Test getBack(). Expected "Blueberry"
        std::cout << "Test getBack(). Expected \"Blueberry\"" << std::endl;
        std::cout << q.getBack() << std::endl;
        return 0;
}
