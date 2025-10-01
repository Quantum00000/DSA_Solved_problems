#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    string s;
    cin>>n;
    vector<string> vc;
    for(int i=0;i<n;i++){
        cin>>s;
        vc.push_back(s);
    }
    for(int i=0;i<n;i++){
        if(vc[i]=="++x"){
            ++x;
        }
        else if(vc[i]=="x++"){
            x++;
        }
        else if(vc[i]=="--x"){
            --x;
        }
        else if(vc[i]=="x--"){
            x--;
        }
    }
    cout<<x;

}