#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str;
    vector<string> vc;
    cin>>n;
    int num=n;
    while(num!=0){
        cin>>str;
        vc.push_back(str);
        str="";
        num--;
    }
    for(int i=0;i<n;i++){
        string s=vc[i];
        if(s.length()>10){
            s=string(1,s[0])+to_string(s.length()-2)+string(1,s[s.length()-1]);
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }

}