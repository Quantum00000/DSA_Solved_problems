#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<1 || n>100){
        return 0;
    }
    if(n!=2){
    if(n%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}