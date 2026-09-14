#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int>&a,pair<char,int>&b){
    if(a.second==b.second){
        return a.first<b.first;
    } 
    
    return a.second>b.second;
     
}

int main() {
	
    string s="trreee";
    
   unordered_map<char,int>mp;
   
   for(auto x:s){
       mp[x]++;
   }
   
   vector<pair<char,int>>vec;
   
   for(auto i:mp){
       vec.push_back(i);
   }
   
   sort(vec.begin(),vec.end(),cmp);
   
   for(auto x:vec){
       cout<<x.first<<" ";
       //cout<<x.second<<" ";
   }
   cout<<endl;
    
}
