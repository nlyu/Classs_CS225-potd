#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
	string animal_type;
protected:
	string food_type;
public:
	Animal(){
		animal_type = "cat";
		food_type = "fish";
	}
	Animal(string myanimal, string myfood){
		animal_type = myanimal;
		food_type = myfood;
	}
	void setName(string a){
		animal_type = a;
	}
	void setFood(string b){
		food_type = b;
	}
	string getName(){
		return animal_type;
	}
	string getFood(){
		return food_type;
	}
	virtual void print(){
		cout<<"I am a animal_type."<<endl;
	}
};

int main(){
	Animal huyanda;
	cout<<huyanda.getFood()<<huyanda.getName()<<endl;
}
