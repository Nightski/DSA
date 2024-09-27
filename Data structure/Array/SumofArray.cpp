#include<iostream>

int sum(int ar[], int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += ar[i];
    }
    return sum;
}

int main(){
    int ar[5] = {7,4,1,6,2};
    std::cout<<sum(ar, 5);
    return 0;
}
