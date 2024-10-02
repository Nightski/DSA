/*Print number n to 1
  here we print the given number and reduce it in each call until the base case of 1 hits

  Time complexity O(n), where n is the number
*/

#include<iostream>

void one_n(int n){
    if(n == 1) {
        std::cout<<1<<" ";
        return;
    };
    std::cout<<n<<" ";
    one_n(n - 1);
}

int main(){
    int n  = 10;
    one_n(n);
    return 0;
}
