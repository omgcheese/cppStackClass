//
//  main.cpp
//  cppStackClass
//
//  Created by Jinwook Lee on 2016-01-26.
//  Copyright (c) 2016 Jinwook Lee. All rights reserved.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> myStack;
    
    myStack.push(5);
    myStack.push(3);
    myStack.push(2);
    
    // | 2 |
    // | 3 |
    // | 5 |
    
    //stack illustration
    
    
    cout << "Number of ints on the stack " << myStack.size() << endl;
    
    while(!myStack.empty()){
        
        cout << "popping " << myStack.top() << endl;
        
        myStack.pop();
    }
    
    
    
    return 0;
}
