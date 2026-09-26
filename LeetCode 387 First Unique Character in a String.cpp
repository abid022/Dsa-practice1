#include <bits/stdc++.h>
using namespace std;
int firstunqe(string s){
    unordered_map<char,int>mp;
    
    for(auto x:s){
        mp[x]++;
    }
    
    for(int i=0;i<s.size();i++){
     
        
     if(mp[s[i]]==1){
         return i;
     } 
      
      
    }
    return -1;
}

int main() {
    
    string str;
    cin>>str;
    
    cout<<firstunqe(str);



}
