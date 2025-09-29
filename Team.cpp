#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,x=0,count=0;
    cin>>n;
    vector<int> vc;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        x=a*100+b*10+c;
        vc.push_back(x);
    }
    for(int i=0;i<n;i++){
        if(vc[i]==110||vc[i]==101||vc[i]==11||vc[i]==111){
            count++;
        }
    }
    cout<<count;
}