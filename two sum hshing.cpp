#include <bits/stdc++.h>
using namespace std;

vector<int>func(vector<int>&arr,int terget){
    unordered_map<int,int>mp;
    
    vector<int>ans;
    
   for(int i=0;i<arr.size();i++){
       
       int rem=terget-arr[i];
       
       if(mp.find(rem)!=mp.end()){
           ans.push_back(mp[rem]);
           ans.push_back(i);
           
           //return {mp[rem],i}   || shortcut code.
       }
       
       mp[arr[i]]=i;
   }
    
    return ans;
    
    //return{};
    
}
int main() {
	vector<int>arr={2,7,11,15};
	
	int terget=9;
	
	vector<int>res=func(arr,terget);
    for(auto x:res){
        cout<<x<<" ";
    }
}
