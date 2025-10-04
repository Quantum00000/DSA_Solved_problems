#include<bits/stdc++.h>
using namespace std;

void check(vector<int> &vc,int p){

    if(p<1){
        return;
    }

    if(vc[p-1]%vc[p]==0){
        vc.erase(vc.begin()+(p-1));
        vc.erase(vc.begin()+(p-1));
        vc.push_back(0);
        return check(vc,p-2);
    }
    else{
        int x=vc[p-1]%vc[p];
        int y=vc[p]-x;
        vc.erase(vc.begin()+(p-1));
        vc.erase(vc.begin()+(p-1));
        vc.push_back(y);
        return check(vc,p-2);
        
    }
    
    
}

int main(){
    int n,a,b;
    vector<int> vc;
    int p;
    cin>>n;
    if(n<1){
        return 0;
    }
    else{
    for(int i=0;i<n;i++){
        cin>>a>>b;
        vc.push_back(a);
        vc.push_back(b);
    }
    p=vc.size()-1;
    check(vc,p);
    for(int i=n-1;i>=0;i--){
        cout<<vc[i]<<endl;
    }
}
}