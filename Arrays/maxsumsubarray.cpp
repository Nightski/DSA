#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums {2, 1, 5, 1, 3, 2};
    int k = 3;
    int sum = 0;
    int maxsum = 0;
    for(int i=0;i<k;i++){
        sum += nums[i];
    }
    maxsum = sum;
    for(int i = k;i<nums.size();i++){
        sum += nums[i] - nums[i - k];
        maxsum = max(sum, maxsum);
    }
    cout<<"Max sum "<<maxsum;
    return 0;
}
