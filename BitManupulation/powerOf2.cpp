//Q. Write a program to check if a number is power of 2 or not.

#include<iostream>
using namespace std;

bool ispowerOf2(int n) {
    return (n && !(n & n-1));
}

int main() {
    cout<<ispowerOf2(10)<<endl;
    return 0;
}


