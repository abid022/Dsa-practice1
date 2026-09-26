#include <bits/stdc++.h>
using namespace std;
bool check(string s,string t){
    
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,int>mp;
    
    for(auto x:s){
        mp[x]++;
    }
    unordered_map<char,int>mp1;
    for(auto x:t){
        mp1[x]++;
    }
    
    for(auto x:mp1){
        char ch=x.first;
        int cont=x.second;
        
        if(mp[ch]!=cont){
            return false;
        }
    }
    return true;
    
    
    
}
int main() {
   string s="traq";
   string s1="ratq";
   
   int reslt=check(s,s1);
   
   if(reslt) cout<<"true"<<endl;
   else cout<<"false"<<endl;
   

}
