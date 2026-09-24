#include <bits/stdc++.h>
using namespace std;

int result(vector<vector<int>>&v){
    map<vector<int>,int>mp;
    
    for(auto x:v){
        mp[x]++;
    }
    
    int n=v.size();
    int sum=0;
    
    for(int i=0;i<n;i++){
        vector<int>col;
        for(int j=0;j<n;j++){
            col.push_back(v[j][i]);
        }
        
        if(mp.find(col)!=mp.end()){   //if dont match
            sum+=mp[col];
        }
    }
    
    
  return sum;
}
int main() {
	// your code goes here
    vector<vector<int>>v={{3,1,2,2},{1,4,4,5},{2,4,2,2},{2,4,2,2}};
    
   
    cout<<result(v);
}
