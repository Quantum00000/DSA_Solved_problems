#include<bits/stdc++.h>
using namespace std;

int main(){
    string num;
    int count=0;
    cin>>num;
int len=num.size();
for(int i=0;i<len;i++){
    
    if(num[i]=='4' || num[i]=='7'){
        count++;
    }
}
if(count==4 ||count==7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;

}

}