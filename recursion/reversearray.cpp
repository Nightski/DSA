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
