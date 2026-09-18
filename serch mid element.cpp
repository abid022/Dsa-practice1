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
    
    int mid=l.size()/2;
    
    auto it=l.begin();
    
    advance(it,mid);
    
    if(!l.empty()){
        cout<<"middle element= "<<*it;
    }

    
    
    
}
  
   

