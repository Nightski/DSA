#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool twosum(vector<int>& nums,int target){
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    while(i < j){
        if(nums[i] + nums[j] == target) return true;
        if(nums[i] + nums[j] > target) j--;
        if(nums[i] + nums[j] < target) i++;
    }
    return false;
}

int main(){
    vector<int> nums{9,2,6,0};
    cout<<twosum(nums, 9);
    return 0;
}
