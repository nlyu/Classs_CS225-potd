#include "func.h"

string secretKey(){
	string key = "Apple";
	cout<<key<<endl;
  return key;
}

void encrypt(string str){
	for(auto &i: str){
		(i >= 'b') ? i--:i;
		(i == 'a') ? i = 'z':i;
		(i >= 'B' && i <= 'Z') ? i--:i;
		(i == 'A') ? i = 'Z':i;
	}
	cout<<str<<endl;
}
