/* Every element appears twice in the array excpet one element, find that element
    To find that we can use xor property:
       XOR with same number is zero and XOR with zero is the number itself
    Now every element appears twice their XOR will be zero and the unique element XOR with the zero will be the same element
    giving us the element

    Time complexity - O(n), n = size of array
*/

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
