#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    int x;
    bool prime = true;
    cout << "Enter a positive integer: " << endl;
    cin >> x;
    string result = "1 ";
    for(int n = 2; n <= x - 1; n++){
      	if(x % n == 0){
        	prime = false;
        	result+=(char)(n+48);
      	    result+=" ";
      	}
	}
    prime?(cout << x <<" is prime"<< endl):(cout<<result<<"divide "<<x<<endl);
    return 0;
}
