//
//  Header.h
//  intToStr
//
//  Created by hambarkh on 24/03/15.
//  Copyright (c) 2015 Akola. All rights reserved.
//

#ifndef intToStr_Header_h
#define intToStr_Header_h


#endif

#include <string>


using namespace std;

char units[][10] = {
    " ","one","two","three","four","five","six","seven","eight","nine"
};
char tens[][10] = {
    " ","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"
};

char hundred[] = "Hundred";

char thousand[] = "Thousand";

char million[] = "Million";

int top = -1;

#define N 10

string stack[N];

void push(string aInStr)
{
    top++;
    stack[top] = aInStr;
}

string pop()
{
    top--;
    if (top >= -1) {
        return stack[top+1];
    }
    return "EMPTY";
}

void stringing(int aInNum,int aInPlace)
{
    switch (aInPlace) {
        case 0:
            push(*(units+aInNum));
            break;
        case 1:
            push(*(tens+aInNum));
            break;
        case 2:
            if (aInNum != 0) {
                push(hundred);
            }
            push(*(units+aInNum));
            break;
        case 3:
            if (aInNum != 0) {
                push(thousand);
            }
            push(*(units+aInNum));
            break;
        case 4:
            //push(thousand);
            //push(*(units+aInNum));
            push(*(tens+aInNum));
            break;
        case 5:
            stringing(aInNum, 2);
            break;
        case 6:
            if (aInNum != 0) {
                push(million);
            }
            push(*(units+aInNum));
            
            
        default:
            break;
    }
}