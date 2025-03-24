#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> mi(vector<vector<int>>& inter){
    if(inter.empty()) return {};
    sort(inter.begin(), inter.end());

    vector<vector<int>> ans;
    for(auto& i:inter){
        if(ans.empty() || ans.back()[1] < i[0]) 
            ans.push_back(i);
        else
            ans.back()[1] = max(ans.back()[1], i[1]);
    }
    return ans;
}

int main(){
    vector<vector<int>> inter = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> ans = mi(inter);

    for(auto& i:ans){
        cout<<"{"<<i[0]<<", "<<i[1]<<"} ";
    }
    return 0;
}
