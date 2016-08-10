//
//  main.cpp
//  FirstAppearOnce
//
//  Created by chenyufeng on 8/10/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>

using namespace std;

/**
 *  一个字符就是一个字节，一个字节为8位，因此创建一个长为256的数组。以字符ASCII码为键值。
 *
 *  char：一个字符是一个字节，占8位。
 
 ASCII码占用一个字节，可以有0~255共256个取值。前128个为常用的字符如运算符，字母，数字等，是可以在键盘上显示的。
 
后128个位特殊字符是键盘上找不到的字符。
 
 */
#define CHAR_SIZE 256

int main(int argc, const char * argv[])
{
    int hashTable[CHAR_SIZE];
    for (int i = 0; i < CHAR_SIZE; i++)
    {
        hashTable[i] = 0;
    }

    string myString = "abcdab";
    for (int i = 0 ; i < myString.length(); i++)
    {
        hashTable[myString[i]]++;
    }

    for (int i = 0; i < myString.length(); i++)
    {
        if (hashTable[myString[i]] == 1)
        {
            cout << "第一次只出现一次的字符：" << myString[i] << endl;
            return 0;
        }
    }
    cout << "不存在这样的字符" << endl;

    return 0;
}









