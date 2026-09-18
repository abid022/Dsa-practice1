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
    
   int posi=4;
    
    auto it=l.begin();
    
    advance(it,posi);
    
    if(!l.empty()){
        cout<<"terget position= "<<*it;
    }

    
    
    
}
  
   

