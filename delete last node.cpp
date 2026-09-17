#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    list<int>l;
    int n;
    int x;
    
    for(int i=0;i<n;i++){
        cin>>x;
        
        l.push_back(x);
    }
   
   if(!l.empty()){
       l.pop_back();
   }
   
   for(auto x:l){
       cout<<x<<" ";
   }
   
}
