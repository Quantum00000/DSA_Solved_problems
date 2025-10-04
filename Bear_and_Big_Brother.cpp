#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n=1;
    cin>>a>>b;
    int A=a;
    int B=b;
    while(true){
        A=A*3;
        B=B*2;
        if(A>B){
            cout<<n;
            break;
        }
        n++;
    }
}