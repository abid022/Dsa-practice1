#include <bits/stdc++.h>
using namespace std;

vector<int>func(vector<int>arr,int low,int high){
    
  /*  int dif=(high-low)+1;
  */
    int l=low;
    int h=high;
    
    unordered_set<int>st;
    unordered_set<int>st1;
    
    for(int i=l;i<=h;i++){
        
        st1.insert(i);
    }
    
    for(auto x:arr){
        st.insert(x);
    }
    
    vector<int>res;
    
    for(auto x:st1){
        if(st.find(x)==st.end()){
            res.push_back(x);
            
        }
    }
    return res;
    
    
    
    
}
int main() {
	
	vector<int>arr={1, 4, 11, 51, 15};
	int low=50;
	int high=55;
	
	
	vector<int>ans=func(arr,low,high);
	for(auto x:ans){
	    cout<<x<<" ";
	}
	
}
