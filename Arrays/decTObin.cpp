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

//no extra space and 10 power concept with and also
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

int main(){
    int n = 10;
    int ans = 0, i = 0;
    int bit;
    while(n != 0){
        bit = n & 1;
        ans = (pow(10,i) * bit) + ans;
        n = n>>1;
        i++;
    }
    cout<<ans;
    return 0;
}
