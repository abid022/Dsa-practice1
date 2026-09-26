#include <bits/stdc++.h>
using namespace std;

bool reslt(string ransomNote,string magazin){
    
    unordered_map<char,int>mp;
    for(auto x:ransomNote){
        mp[x]++;
    }
    unordered_map<char,int>mp1;
    for(auto x:magazin){
        mp1[x]++;
    }
    
    for(auto x:mp){
        char c1=x.first;
        int cont=x.second;
        
        if(mp1[c1]<cont){
            return false;
        }
        
    }
    return true;
    
    
    
}
int main() {
	// your code goes here
    string ransomNote;
    cin>>ransomNote;
    string magazin;
    cin>>magazin;
    
    int x=reslt(ransomNote,magazin);
    
    if(x){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
