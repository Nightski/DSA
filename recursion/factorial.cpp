#include<iostream>

int fact(int n){
    if(n < 0) return -1;
    if(n == 1 || n == 0) return 1;
    return n*fact(n - 1);
}


int main(){
    int n = 5;
    std::cout<<fact(n);
    return 0;
}
