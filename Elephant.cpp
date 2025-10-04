#include<bits/stdc++.h>
using namespace std;

int check(int n,int num){
    if(n>=5){
        check(n-5,++num);
    }
    else if(n<5 && n!=0){
        num++;
        return num;
    }
    else if(n==0){
        return num;
    }
}

int main(){
    int n,num=0;
    cin>>n;
    cout<<check(n,num);
}