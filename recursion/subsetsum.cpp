/*The problem is to find the a subset that gives the target sum 
if the array does then return true else false

Here we use pick not pick algo for choosing to add or not to add from the array 
if the sum at last is zero then it is true else false

it calls 2 recursive call per call then at total it will take O(2^n) time*/


#include<iostream>

bool ifSum(int ar[], int sum, int n){
    if(sum == 0) return true;
    if(n == 0) return false;
    if(ar[n - 1] > sum) return ifSum(ar, sum , n - 1);
    return ifSum(ar, sum, n - 1) || ifSum(ar, sum - ar[n - 1], n - 1);
}

int main(){
    int ar[] = {5,5,5,5,3,4};
    int sum = 7;
    std::cout<<ifSum(ar, sum,6);
    return 0;
}
