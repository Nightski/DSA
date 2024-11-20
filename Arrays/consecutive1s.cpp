#include<iostream>
#include<vector>
using namespace std;

int cons1(vector<int>& nums){
    int count = 0;
    int maxcount = INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            count++;
            maxcount = max(count, maxcount);
        }
        else{
            count = 0;
        }
    }
    return maxcount;
}

int main(){
    vector<int> nums {1,1,0,2,1,0,0,1,1,1,1,0};
    cout<<cons1(nums)<<endl;
    return 0;
}
