/* The problem is asking to give all the sustrings that can be made after deleting letters from the 
   string without changing the order of the remaining order

   This method includes picking the current character or not picking
   Time Complexity - O(2^n)
*/


#include<iostream>
using namespace std;

void subs(string& s, string cur, int ind){
    if(ind == s.length()){
        cout<<cur<<endl;
        return;
    }
    subs(s, cur, ind + 1);
    subs(s, cur + s[ind],ind + 1);
}
int main(){
    string s = "ABC";
    subs(s,"",0);
    return 0;
}
