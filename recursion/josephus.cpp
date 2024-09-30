/*The problem gives n number of people in a circle
you have to eliminate every k member of the circle and return the last remaining person*/

#include<iostream>

int jos(int n, int k){
    if(n == 1) return 0;
    return(jos(n - 1,k)+k) % n;
}

int main(){
    int n = 7, k = 2;
    std::cout<<jos(n,k) + 1;
    return 0;
}
