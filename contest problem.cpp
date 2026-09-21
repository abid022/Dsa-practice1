#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int main() {
  
    int t;
    cin>>t;
    
    
    
    
    
   for(int i=1;i<=t;i++){ 
       int n;
       cin>>n;
       vector<int>arr;
       int mini=INT_MAX;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        arr.push_back(x);
        mini=min(x,mini);
    }
       
    
    
    
    
    int wp=n-mini;   
   
   cout<<wp<<endl;
    }
    
}
