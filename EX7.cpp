/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Robert McQueen
 */
#include "std_lib_facilities.h"
int main(){
String num1;
String num2;
String operation;

cout<<"Enter two single digit numbers and an operation"<<endl;
cin>>num1>>num2>>operation;

if(operation == "+"){
   string add = std::to_string(std::stoi(num1) + std::stoi(num2));
    cout<<"the sum is "<<add<<endl;
}else if(operation == "-"){
   string sub = std::to_string(std::stoi(num1) - std::stoi(num2));
    cout<<"the difference is "<<sub<<endl;
}else if(operation == "*"){
   string mul = std::to_string(std::stoi(num1) * std::stoi(num2));
    cout<<"the product is "<<mul<<endl;
}else if(operation == "/"){
   string div = std::to_string(std::stoi(num1) / std::stoi(num2));
    cout<<"the quotient is "<<div<<endl;
}
return 0;
}