#include <iostream>
using namespace std;

int main(){
    cout<< "Enter the number of rows: ";
    int rows;
    cin>> rows;
    cout<< "Enter the number of columns: ";
    int columns;
    cin>> columns;
    int i,j;
    for(i=0;i<rows;i++){
        for(j=0;j<i+1;j++){
     
                cout<< "*";
            }
        
        cout<<endl;
        }
    }
