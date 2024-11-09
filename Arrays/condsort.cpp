#include<iostream>
#include<vector>
using namespace std;

void sorter(vector<int>& nums, int x){
    int min = 0;
    int mid = 0;
    int max = nums.size() - 1;
    for(int i=0;i<nums.size();i++){
        if(nums[mid] < x){
            swap(nums[min], nums[mid]);
            min++;
            mid++;
        }
        else if(nums[mid] == x){
            mid++;
        }
        else if(nums[mid] > x){
            swap(nums[mid], nums[max]);
            max--;
        }
    }
}

int main(){
    vector<int> nums {1,1,5,9,5,9,9,5,1,1,5,9};
    int x = 5;
    sorter(nums, x);
    for(auto num:nums){
        cout<<num<<" ";
    }
    return 0;
}
