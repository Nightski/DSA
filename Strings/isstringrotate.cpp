#include<iostream>
#include<string>
using namespace std;

bool rotate(string& s, string& goal){
  return (s.length() == goal.length()) && ((s+s).find(goal) != string::npos);
}

int main(){
  string s  = "abcde";
  string goal = "cdeab";
  if(rotate(s,goal)){
    cout<<"The given pair is rotatable"<<endl;
  }
  else{
    cout<<"The given pair is not rotatable"<<endl;
  }
  return 0;
}
