/* Given a string reverse it using recursion
   we are pointing two pointers, one at start and one at end
   we will swap the letters from both places, increament the left pointer and decreament the last pointer 
   this will recursively occurs until left > right or left == right

   Time complexity - O(n), where n is the length of the string
*/

#include<iostream>
using namespace std;

string rev(string& name, int l, int r){
    if(l>=r) return name;
    swap(name[l], name[r]);
    return rev(name, l + 1, r - 1);
}

int main(){
    string name = "kevin";
    cout<<rev(name,0,name.length() - 1);
    return 0;
}
