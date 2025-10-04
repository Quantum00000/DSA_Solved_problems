#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,count=1,sum=0;
    cin>>k>>n>>w;
    for(int i=0;i<w;i++){
        sum=sum+count;
        count++;
    }
    sum=sum*k;
    if(n<sum){
        cout<<sum-n;
    }
    else{
        cout<<0;
    }
}