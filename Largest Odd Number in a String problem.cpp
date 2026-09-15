#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s="5347";
    int n=s.size();
    
    int maxi=0;
    
    for(int i=0;i<s.size();i++){
        
        for(int j=i;j<s.size();j++){
            int sum=0;
            
            for(int x=i;x<=j;x++){
               // cout<<s[x]<<" ";
               
               sum+=(s[x]-'0')*pow(10,(n-1-x));
                
            }
              int ex=sum/pow(10,(n-1-j));
              
              if(ex%2!=0){
                  maxi=max(ex,maxi);
              }
            
            //cout<<endl;
        }
        
    }
    cout<<maxi;
        
        cout<<endl;
        
        /*
        int r=0;
        for(int i=0;i<n;i++){
            r+=(s[i]-'0')*pow(10,(n-1-i));
        }
    cout<<r;*/
}
