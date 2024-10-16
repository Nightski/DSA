#include<iostream>
using namespace std;

void rev(int ar[], int size){
    int i = 0;
    int j = size - 1;
    while(i < j){
        swap(ar[i], ar[j]);
        i++;
        j--;
    }
}

int main(){
    int ar[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(ar) / sizeof(ar[0]);
    rev(ar, size);
    for(int num: ar){
        cout<<num<<" ";
    }
    return 0;
}