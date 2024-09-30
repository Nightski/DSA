#include<iostream>

int sumofdigit(int n){
    if(n == 0) return 0;
    return (n % 10) + sumofdigit(n / 10);
}

int main(){
    int n;
    std::cin>> n;
    std::cout<< sumofdigit(n);
    return 0;
}
