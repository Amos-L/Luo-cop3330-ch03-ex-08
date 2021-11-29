/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Amos Luo
 */

#include <iostream>
using namespace std;

int main()
{
    int input = 0;
    cout << "Enter intger: ";
    cin >> input;

    if (input % 2 == 0) {
        cout << "The value " << input << " is an even number";
    }
    if (input % 2 == 1) {
        cout << "The value " << input << " is an odd number";
    }
}


