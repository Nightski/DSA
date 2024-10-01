/*A factorial is the multiplication of series of number from the given to upto 1
 example 4 factorial if 4*3*2*1
 here we have the base case as if n = 1 then return 1
 else multiply the current element with the previous element until 1 recursively
 
 Time complexity O(n), where n is the number*/


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
