#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,serja=0,dima=0;
    cin>>num;
    vector<int> vc(num);
    for(int i=0;i<num;i++){
        cin>>vc[i];
    }
    int n=0;
    while(num>0){
        if(n%2==0){
            if(vc[0]>vc[num-1]){
                serja+=vc[0];
                vc.erase(vc.begin() + 0);
                n++;
                num--;
            }
            else{
                serja+=vc[num-1];
                vc.erase(vc.begin() + num-1);
                n++;
                num--;
            }
        }
        else{
            if(vc[0]>vc[num-1]){
                dima+=vc[0];
                vc.erase(vc.begin() + 0);
                n++;
                num--;
            }
            else{
                dima+=vc[num-1];
                vc.erase(vc.begin() + num-1); 
                n++;
                num--;
            }
        }
    }    cout<<serja<<" "<<dima;
    }
