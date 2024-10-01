/*You are given an array, print it in reverse

 here we have passed a pointer to the array and the size
 we return when the size if zero i.e. you can no longer traverse the array
 else we update the pointer to next and decrease one size
 when the base case hits the last call is printed which is the last element in the array
 printing the array in reverse

 Time complexity O(n), where n is the size of array
 */



#include<iostream>

void rev(int *ar, int size){
    if(size == 0)
     return;
    rev(ar + 1, size - 1);
    std::cout<<*ar<<" ";
}

int main(){
    int ar[] = {5,4,3,2,1};
    int size = sizeof(ar) / sizeof(ar[0]);
    rev(ar, size);
    return 0;
}
