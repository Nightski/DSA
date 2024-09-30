/*In this we keep track of the array size and a pointer to the first element of the array
the next element will be called recursively until the size became 0*/


#include<iostream>

int sumofarray(int *ar, int size){
    if(size == 0) return 0;
    return *ar + sumofarray(ar + 1, size - 1);
}

int main(){
    int ar[] = {1,2,3,4};
    int size = sizeof(ar) / sizeof(ar[0]);
    std::cout<<sumofarray(ar, size);
    return 0;
}
