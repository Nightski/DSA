#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> func(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    int pre = 1;
    for(int i=0;i<n;i++){
        ans[i] = pre;
        pre *= nums[i];
    }
    int suf = 1;
    for(int i=n - 1;i>=0;i--){
        ans[i] *= suf;
        suf *= nums[i];
    }
    return ans;
}


/*void printer(const vector<int>& ans){
    for(int num: ans){
        cout<<num<<" ";
    }
    cout<<endl;
}*/

int main(){
    vector<int> nums{1,2,3,4};
    vector<int> ans = func(nums);
    //printer(ans);
    return 0;
}
