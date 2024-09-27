#include<iostream>

int findmax(int ar[], int size){
    int max = ar[0];
    for(int i = 1;i<size;i++){
        if(ar[i] > max) max = ar[i];
    }
    return max;
}


int main(){
    int ar[] = {8,4,6,9,2,1};
    int size = sizeof(ar) / sizeof(ar[0]);
    std::cout<<findmax(ar, size);
    return 0;
}
