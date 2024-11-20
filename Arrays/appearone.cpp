#include<iostream>
#include<vector>
using namespace std;

int ones(vector<int>& nums){
    int ans = 0;
    for(int i=0;i<nums.size();i++){
        ans = ans ^ nums[i];
    }
    return ans;
}

int main(){
    vector<int> nums{1,4,1,2,3,2,3};
    cout<<ones(nums)<<endl;
    return 0;
}
