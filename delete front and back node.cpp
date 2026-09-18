#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    list<int>l;
  
    
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    
    for(auto x:l){
        cout<<x<<" ";
    }
    
    cout<<endl;
    l.pop_front();
    
    cout<<"after delete at beginning= ";
    for(auto x:l){
        cout<<x<<" ";
    }
    cout<<endl;
    
    l.pop_back();
    
    cout<<"after delete back = ";
    for(auto x:l){
        cout<<x<<" ";
    }
      
    cout<<endl;
    
    cout<<"front = "<<l.front()<<endl;
    cout<<"end = "<<l.back()<<endl;
}
  
   

