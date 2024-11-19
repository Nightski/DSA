#include<iostream>
#include<vector>
using namespace std;

void zero(vector<int>& nums){
    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    for(int i=j + 1;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main(){
    vector<int> nums{1,0,2,5,0,6,9,0,0,4,7,0};
    zero(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
