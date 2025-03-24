#include<iostream>
using namespace std;

int trw(int height[], int size){
    int l =0, r= size - 1;
    int rmax = 0, lmax = 0;
    int ans = 0;
    while(l <= r){
        if(height[l] <= height[r]){
            if(lmax <= height[l]){
                lmax = height[l];
            }
            else{
                ans += lmax - height[l];
            }
            l++;
        }
        else{
            if(rmax <= height[r]){
                rmax = height[r];
            }
            else{
                ans += rmax - height[r];
            }
            r--;
        }
    }
    return ans;
}


int main(){
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int size = sizeof(height) / sizeof(height[0]);
    cout<< trw(height, size);
    return 0;
}
