
#include <iostream>
using namespace std;


int reverse(int n){
    int reversed =0;
	
	while(n>0){
	    
		int digit = n%10;
		reversed = reversed*10 + digit;
		n= n/10;
	    
	}
	return reversed;
}
int main() {
	
	int n;
    cout<< "Enter a number: ";
	cin>>n;
    int output = reverse(n);
    cout<<output << endl;
	
}

