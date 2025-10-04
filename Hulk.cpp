#include<bits/stdc++.h>
using namespace std;

string love_it(string s,int n);
string hate_it(string s,int n);

string love_it(string s,int n){
    s=s+"I love ";
    if(n-1!=0){
        s=s+"that ";
        return hate_it(s,n-1);
    }
    else{
        s=s+"it";
        return s;
    }
}
string hate_it(string s,int n){
    s=s+"I hate ";
    if(n-1!=0){
        s=s+"that ";
        return love_it(s,n-1);
    }
    else
    {
        s=s+"it";
        return s;
    }

}

int main(){
    int n;
    cin>>n;

    string s;
    string result=hate_it(s,n);
    cout<<result<<endl;
    
}