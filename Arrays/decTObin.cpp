//Using extra space (Array) and divid by 2

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n = 10;
    vector<int> rem;
    while(n != 0){
        rem.push_back(n % 2);
        n /= 2;
    }
    reverse(rem.begin(), rem.end());
    for(int num: rem){
        cout<<num;
    }
    return 0;
}
