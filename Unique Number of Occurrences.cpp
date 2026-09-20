#include <bits/stdc++.h>
using namespace std;

bool check(pair<int,int>a,pair<int,int>b){
    
    return a.second<b.second;
    
    
}

int main(){
    vector<int>ve={1,2,2,1,1,3} ;   
    
    unordered_map<int,int>mp;
    
    for(auto x:ve){
        mp[x]++;
        
    }
    
    vector<pair<int,int>>c;
    
    for(auto x:c){
        
        c.push_back(x);
    }
    
    
    sort(c.begin(),c.end(),check);
    
    int is_true=1;
    
    for(int i=0;i<c.size();i++){
        if(c[i].second==c[i+1].second){
            is_true=0;
            break;
        }
    }
    
    if(is_true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    
    
     
}
