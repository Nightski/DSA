/*Print number 1 - n using recursion
  the idea is to reach from n to 1 recursively and print the nuber in reverse

  Time complexity O(n), where n is the last emelent to print
*/

#include<iostream>

void one_n(int n){
    if(n == 1) {
        std::cout<<1<<" ";
        return;
    };
    one_n(n - 1);
    std::cout<<n<<" ";
}

int main(){
    int n  = 10;
    one_n(n);
    return 0;
}
