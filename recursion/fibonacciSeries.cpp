/* the following code is fibonacci using recursion
   the code take 2 power n complexity which is way to high
   but it is the simplest one 
   we can optimize it using memoization

   Time complexity O(2^n) where n is the range of the series
*/
#include<iostream>

int fibo(int n){
    if (n == 1 || n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main(){
    int n;
    std::cout<<"Enter Number: ";
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cout<<fibo(i)<<std::endl;
    }
    return 0;
}
