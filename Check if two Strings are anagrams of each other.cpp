#include <bits/stdc++.h>
using namespace std;
bool check(vector<char>s1,vector<char>p1){
    
    if(s1.size()!=p1.size()){
        return false;
    }
    
    sort(s1.begin(),s1.end());
    sort(p1.begin(),p1.end());
    
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=p1[i]){
            return false;
        }
    }
    
    return true;
    
    
}
int main() {
    string s="cat";
    string a="act";
    
    vector<char>s1(s.begin(),s.end());
    vector<char>a1(a.begin(),a.end());
    
    if(check(s1,a1)){
        cout<<"true";
    }
    else{
        cout<<"false"<<endl;
    }
    

}
