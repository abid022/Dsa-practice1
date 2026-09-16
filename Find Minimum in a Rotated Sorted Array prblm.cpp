#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>arr={4,5,6,7,8,0,1,2,3};
    int n=arr.size();
    
    int low=0,high=n-1;
    int mini=INT_MAX;
    
    while(low<=high){
        
        int mid=low+(high-low)/2;
        
        if(arr[mid]>arr[high]){
            low=mid+1;
            mini=min(arr[low],mini);
        }
        else if(arr[mid]<arr[high]){
            high=mid;
            mini=min(arr[high],mini);
        }
        else {
            high=mid-1;
        }
        
    }
    
    
    
    
    }
    cout<<mini<<endl;
}

    

