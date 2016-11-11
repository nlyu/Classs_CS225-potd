#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int myhash(string str){     // many different hash fucntions acceptable, this is just an example
    int blank = 0;
    for(auto &i: str){
        if(i == ' '){
            blank++;
        }
    }
    return blank % 5
}

int main(){
    cout << "State your question: ";
    string in;
    getline(cin, in);
    // put error checking code here...
    if( (in.back() != '?') || (in.size()<1 && in.size()>100) ){
        cout<<"oppos, Maybe try a sentence ends with ?"<<endl;
        return -1;
    }
    int val = myhash(in);

    cout << in << " hashed to value " << val << endl;
    if(val == 0)
        cout << "The outlook is bleak." << endl;
    else if(val == 1)
        cout << "The answer is most likely yes." << endl;
    else if(val == 2)
        cout << "Is today Tuesday? If yes, then yes! Otherwise, probably not." << endl;
    else if(val == 3)
        cout << "Most definitely!" << endl;
    else
        cout << "The future in unclear at the moment. Try again later." << endl;
    return 0;
}