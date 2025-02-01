#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>> n;
    for(int i=0;i< n.size();i+=2){
        for(int j=0;j<n.size()-1;j+=2){
            if(n[j]>n[j+2]){
                swap(n[j],n[j+2]);
            }

        }
    }
    cout<<n<<endl;
   
    return 0;

}