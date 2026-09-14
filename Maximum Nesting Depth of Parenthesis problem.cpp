#include <bits/stdc++.h>
using namespace std;



int main() {
	
	
    string arr="(1)+((2))+(((3)))";
    
    int count=0;
    
   int low=0;
   int high=arr.size()-1;
   
   while(low<=high){
       
       if(arr[low]=='(' && arr[high]==')'){
           count++;
           low++;
           high--;
       }
       if(arr[low]!='('){
           low++;
       }
       
       if(arr[high]!=')'){
           high--;
       }
       
       
       
   }
   cout<<count<<endl;
   
   
    
}
