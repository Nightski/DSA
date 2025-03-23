//no extra space and 10 power concept with and also
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int n = 10;
    int ans = 0, i = 10;
    int bit;
    while(n != 0){
        bit = n & 1;
        ans += bit * i;
        n = n>>1;
        i *= 10;
    }
    cout<<ans;
    return 0;
}
