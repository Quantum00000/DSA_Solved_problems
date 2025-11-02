#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string line;
    cin.ignore();
    getline(cin,line);
    istringstream iss(line);
    
    vector<int> vc;
    int num;
    for(int i=0;i<n;i++){
        iss>>num;
        vc.push_back(num);
    }
     
    int max=vc[0];
    int min=vc[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(vc[i]>max){
            max=vc[i];
            count++;
        }
        else if(vc[i]<min){
            min=vc[i];
            count++;
        }
    }
    cout<<count;

}