#include <string>
#include <iostream>
using namespace std ;

class Dog
{
	int age, weight ;
	string color ;
	
public:
	void bark() { cout << "WOOF!" << endl; }
	void setValues(int, int, string);
	int getAge(){return age;}
	int getWeight(){return weight;}
	string getColor(){return color;}
};
void Dog::setValues(int age, int weight, string color)
{
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}
int main()
{
	Dog fido,pooch;
	fido.setValues( 3, 15, "brown");
	pooch.setValues( 4, 18, "gray");
	cout << "Fido is a " << fido.getColor() << " dog" << endl;
	cout << "Fido is " << fido.getAge() << " years old" << endl;
	cout << "Fido weight " << fido.getWeight() << " pounds" << endl;	
	fido.bark();
	cout << "pooch is a " << pooch.getColor() << " dog" << endl;
	cout << "pooch is " << pooch.getAge() << " years old" << endl;
	cout << "pooch weight " << pooch.getWeight() << " pounds" << endl;	
	pooch.bark();
	return 0;
}