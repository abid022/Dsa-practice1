/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position. For example, if s = "abcde",
then it will be "bcdea" after one shift.*/
#include <bits/stdc++.h>
using namespace std;

bool check(string s,string terget){
    
    int n=s.size();
   
    int reul=false;
    
    for(int i=0;i<n;i++){
        string s1="";
        for(int j=i+1;j<n;j++){
            s1+=s[j];
        }
        
        for(int j=0;j<=i;j++){
           s1+=s[j];
        }
        if(s1==terget){
            return true;
            
            break;
        }
    }
    return reul;
    
    
}
int main() {
	// your code goes here
    
    string s={"compare"};
    
    string terget={"parecom"};
    
    bool ans=check(s,terget);
    
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    
  
}
