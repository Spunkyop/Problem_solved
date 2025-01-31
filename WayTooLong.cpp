#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;
for( int i=0;i<n;i++){
 string w;
 cin>>w;
 int length = w.size();
 if(length<=10){
    cout << w << endl;

 }
 else{
    cout<< w[0] << length -2 << w[length-1] << endl;

 }
}
return 0;
}