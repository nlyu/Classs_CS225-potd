#include <iostream>
#include <string>
using namespace std;

template <class number>

class BankAccount{
private:
	number balance;
public:
	BankAccount(number a){
		balance = a;
	}
	
	number getBalance(){
		return balance;
	}

	void add(number a){
		balance+=a;
	}

	void remove(number a){
		balance-=a;
	}
};

int main(){
	BankAccount<double> a(2000);
	BankAccount<int> b(2000);
	a.add(0.5);
	b.remove(50);
	cout<<a.getBalance()<<endl;
	cout<<b.getBalance()<<endl;
	return 0;
}