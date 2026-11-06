#include <bits/stdc++.h>
using namespace std;

void newa(vector<int>arr){
    
    vector<int>nes;
    for(int i=0;i<arr.size();i++){
        
        int maxi=arr[i];
        
        for(int j=i;j<arr.size()-1;j++){
            if(arr[i]<arr[j+1]){
                maxi=max(maxi,arr[j+1]);
                
                break;
            }
            
        }
        if(maxi>arr[i]){
            nes.push_back(maxi);
        }
        else{
            nes.push_back(-1);
        }
    }
    
    for(auto x:nes){
        cout<<x<<" ";
    }
    
}

int main() {
    vector<int>arr={4, 5, 2, 10, 8};
   
    newa(arr);
}
