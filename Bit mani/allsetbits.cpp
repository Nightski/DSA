//Question is to find if the number have all the bits as set bits
//Set bits are equal to 1 like 7 is 111 or 15 1111.

//The idea is that the and operation of a number having all set bits and the next number is always zero
//as all 1s will fall in the 0s of the next numkber and the next number's 1 will fall on the zero of the first number

#include<iostream>
using namespace std;

int main(){
    int n = 15;
    bool ans = (n > 0) && ((n & (n + 1)) == 0);
    cout<<ans;
}
