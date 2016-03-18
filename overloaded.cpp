#include <string>
#include <iostream>
using namespace std ;

class Dog
{
	int age, weight ;
	string color ;
	
public:
	void bark() { cout << "WOOF!" << endl; }
	void bark(string noise) { cout << noise << endl; }
	Dog();
	Dog(int, int);
	~Dog();
	int getAge(){return age;}
	int getWeight(){return weight;}
	string getColor(){return color;}
};
Dog::Dog(int age, int weight, string color)
{
	age = 1;
	weight = 2;
	color = "black";
}
Dog::Dog(int age, int weight)
{
	this -> age = age;
	this -> weight = weight;
	color = "white";
}
Dog::~Dog()
{
	cout << "Object destroyed." << endl;
}
int main()
{
	Dog rex;
	Dog sammy( 4, 18);
	cout << "rex is a " << rex.getColor() << " dog" << endl;
	cout << "rex is " << rex.getAge() << " years old" << endl;
	cout << "rex weight " << rex.getWeight() << " pounds" << endl;	
	rex.bark("GRR!");
	cout << "sammy is a " << sammy.getColor() << " dog" << endl;
	cout << "sammy is " << sammy.getAge() << " years old" << endl;
	cout << "sammy weight " << sammy.getWeight() << " pounds" << endl;	
	sammy.bark("BOWOW!");
	return 0;
}