//Q. write a program to count the number of onces in binary representation of a number.

#include<iostream>
using namespace std;

int numberofOnes(int n)  {
    int count=0;
    while(n) {
        n=n & (n-1);
        count++;
    }
    return count;
}

int main() {
    cout<<numberofOnes(19)<<endl;
    return 0;
}



