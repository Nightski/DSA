//This program is to find the greatest common divisor using euclid's algorithm

#include<iostream>

int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a%b);
}

int main(){
    int a,b;
    std::cout<<"Enter 'a': ";
    std::cin>> a;
    std::cout<<"Enter 'b': ";
    std::cin>> b;
    std::cout<<"The greatest common divisor of "<<a<<" and "<<b<<" is: ";
    std::cout<<GCD(a,b);
    return 0;
}
