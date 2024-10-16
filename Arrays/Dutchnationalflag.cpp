/* The algorithm is widely used to segregate 3 types of values like 0, 1, 2
   it is used by three pointers low mid and high. The low and high are fixed at start and end of the array respectively
   The mid starts at low sending all the 0s to the start and 2s to the end and not doing anything when encountering 1s.

   Time complexity - O(n), where n is the size of array
*/

#include<iostream>
#include<vector>
using namespace std;

void dnf(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1) mid++;
        else if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums{0,2,2,1,0,0,1,1,2};
    dnf(nums);
    for(int num: nums){
        cout<<num<<" ";
    }
    return 0;
}
