#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void nextfound(vector<int>& ar){
    int ind = -1;
    for(int i=ar.size() - 2;i>=0;i--){
        if(ar[i+1] > ar[i]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(ar.begin(), ar.end());
        return;
    }
    for(int i = ar.size() - 1;i > 0;i--){
        if(ar[i] > ar[ind]){
            swap(ar[i], ar[ind]);
            break;
        }
    }
    reverse(ar.begin() + ind + 1, ar.end());
    return;
}

int main(){
    vector<int> ar{1,2,3,4,5,6};
    nextfound(ar);
    for(int num:ar){
        cout<<num<<" ";
    }
    return 0;
}
