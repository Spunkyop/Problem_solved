#include<bits/stdc++.h>
using namespace std;
int main(){
     string n1,n2;
     cin>> n1>>n2;
     
     for(int i=0;i<n1.size(); i++){
        n1[i]=towlower(n1[i]);
        n2[i]=towlower(n2[i]);
     }
     if(n1==n2){
        cout<<"0"<<endl;
     }
     else{
        for(int i=0;i<n1.size();i++){
            if(n1[i]>n2[i]){
                cout<<"1"<<endl;
                break;
            }
            if(n1[i]<n2[i])
            {
                cout<<"-1"<<endl;
                break;
            }          
        }
     }
return 0;
}
