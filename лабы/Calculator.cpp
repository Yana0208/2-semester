#include <iostream>
using namespace std;

class Factorial;

class Ñalculator
{
	private:
		int a, b, i, number;
		friend Factorial;

	public: 
		
		Ñalculator(int A, int B)
		{
			a = A;
			b = B;
			cout << "a = ";
			cout << a;
			cout << endl;
			cout << "b = ";
			cout << b;
			cout << endl;
		};

		Ñalculator(const Ñalculator &obj)
		{
			cout << "Perform actions";
		};

		void setÑalculator()
		{
			cout << "Enter the transaction number: ";
			cin >> number;
			cout << "a = ";
			cin >> a;
			cout << endl;
			cout << "b = ";
			cin >> b;
			cout << endl;
		};

		void getÑalculator()
		{
			cout << "The transaction numer: ";
			cout << this-> number;
			cout << endl;
			cout << "a*b = ";
			cout << a * b;
			cout << endl;
			cout << "a/b = ";
			cout << a / b;
			cout << endl;
			cout << "a+b = ";
			cout << a + b;
			cout << endl;
			cout << "a-b = ";
			cout << a - b;
			cout << endl;
			cout << "a^b = ";
			cout << pow(a, b);
			cout << endl;

		};
		~Ñalculator()
		{
			cout << endl;
			cout << "destructor";
			cout << endl;
		};

};
class Factorial
{
	private:
		void setFact(Ñalculator &f, int);
	public:
		Factorial()
		{
			int a, int b;
			Ñalculator f;
			a = f.a;
			b = f.b;

		};
		void Factorial::setcalculator(Ñalculator &obj, int i, int a, int b)
		{
			for (i = 1; i <= a; i++)
			{
				a = a*i;
			};
			for (i = 1; i <= b; i++)
			{
				b = b*i;
			}
		};
		void Factorial::getFactorial(Ñalculator &obj, int a, int b)
		{
			cout << "a! = ";
			cout << a;
			cout << endl;
			cout << "b! = ";
			cout << b;
			cout << endl;
		}
};

void Action(Ñalculator object)
{
	cout << " regarding a and b";
};

int main()
{

	Ñalculator obj1 (0, 0);
	Factorial obj2 (0, 0);

	Action(obj1);
	cout << "Enter a, b ";
	cout << endl;
	obj1.setÑalculator();
	obj1.getÑalculator();
	obj2.setFactorial();
	obj2.getFactorial();

	system("pause");
	return 0;
};