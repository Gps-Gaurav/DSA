#include <iostream>
using namespace std;

int main(){
    int n,i,j;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=0;i<n;i++){
      int cond = (i<=n/2) ? 2*i: 2*(n-i-1);
       for(j=0;j<cond;j++){
        if(j<= cond/2){
            cout<<j+1;
        }
        else{
            cout<<cond-j+1;
        }

       }
         cout<<endl;
    }
}