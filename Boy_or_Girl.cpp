#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char> name;
    int len =s.size();
    for( int i=0;i<len;i++){
        name.push_back(s[i]);
    }
    set<char> name1(name.begin(),name.end());
    len=name1.size();
    if(len%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    
}