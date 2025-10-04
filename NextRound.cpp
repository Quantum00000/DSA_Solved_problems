#include<bits/stdc++.h>
using namespace std;
void check(string s,int &pos,char k){
    while(pos<s.size()){
        if(s[pos]!=k){
            break;
        }
        pos=pos+2;
    }
}
int main(){
    int n, k,pos=0;
    cin>>n>>k;
    k--;
    k=2*k;
    string s;
    cin>>s;
    for(int i=0;i<(2*n-1);i=i+2){
        if(s[0]=='0'){
            cout<<0;
            break;
        }
        if(s[i]==s[k]){
            pos=i;
            check(s,pos,s[k]);
            cout<<(((pos-2)/2)+1);
            break;
        }
    }
}
