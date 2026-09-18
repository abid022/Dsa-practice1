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
    
    int terget=30;
    int found=0;
    auto it=l.begin();
    
    while(it!=l.end()){
        if(*it==terget){
            found=1;
            break;
        }
        
        it++;
    }
    
    if(found){
        cout<<"found"<<endl;
    }
    else cout<<"not found"<<endl;
    

    
    
    
}
  
   

