#include<bits/stdc++.h>

using namespace std;

void remover(vector<int>& nums){
    set<int> uq;
    for(int i=0;i<nums.size();i++){
        uq.insert(nums[i]);
    }
    for(int num: uq){
        cout<< num<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    vector<int> nums {1,1,4,4,6,6,5,8,2,5};
    remover(nums);
    return 0;
}
