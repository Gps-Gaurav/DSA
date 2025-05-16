#include <iostream>

using namespace std;

int main (){
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<=2*n-1;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k<2*i+1){
                cout<<"*";  
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}