//
//  main.cpp
//  intToStr
//
//  Created by hambarkh on 24/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#include <iostream>
#include "Header.h"

using namespace std;

void stringing(int aInNum,int aInPlace);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout << "Enter number :";
    int aInNumber;
    cin >> aInNumber;
    int temp;
    int i=0,x = 10;
    while (1) {
        temp = aInNumber%10;
        aInNumber = aInNumber/10;
        stringing(temp,i);
        i++;
        if (aInNumber  == 0) {
            break;
        }
        x*=10;
    }
    while (1) {
        string out = pop();
        if (out != "EMPTY") {
            cout << out << " ";
        }
        else{
            break;
        }
    }
    cout << endl;
    return 0;
}
