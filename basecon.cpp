#include <iostream>
using namespace std;

class Parent
{
	public:
	Parent()
	{ cout << "Default Parent constructor called.";}
	Parent(int a)
	{ cout << endl << "Overloaded Parent constructor called.";}
};
class Daughtor : public Parent
{
	public:
	Daughter()
	{ cout << endl << 
	"   Dervied Daughter class default constructor called.";}
};
class Son : public Parent(a)
{
	Son(int a): Parent (a)
	{ cout << endl <<
	"   Deveried Son class overloaded constructor called.";}
};
int main()
{
	Daughter emma;
	Son andrew(0);
	return 0;
}