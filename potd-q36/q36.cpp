#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string line;
  	ifstream myfile ("text.txt");
  	if (myfile.is_open())
  	{
   		while(getline(myfile,line))
    	{
    		if(line.find(" purple ", 0, strlen(" purple ")) != string::npos){
    			cout<<line<<endl;
    		}
    	}
    	myfile.close();
  	}
    return 0;
}
