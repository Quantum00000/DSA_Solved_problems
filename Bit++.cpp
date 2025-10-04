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
        if(vc[i]=="++X"){
            ++x;
        }
        else if(vc[i]=="X++"){
            x++;
        }
        else if(vc[i]=="--X"){
            --x;
        }
        else if(vc[i]=="X--"){
            x--;
        }
    }
    cout<<x;

}