#include <iostream>
using namespace std;

class Factorial;

class �alculator
{
	private:
		int a, b, i, number;
		friend Factorial;

	public: 
		
		�alculator(int A, int B)
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

		�alculator(const �alculator &obj)
		{
			cout << "Perform actions";
		};

		void set�alculator()
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

		void get�alculator()
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
		~�alculator()
		{
			cout << endl;
			cout << "destructor";
			cout << endl;
		};

};
class Factorial
{
	private:
		void setFact(�alculator &f, int);
	public:
		Factorial()
		{
			int a, int b;
			�alculator f;
			a = f.a;
			b = f.b;

		};
		void Factorial::setcalculator(�alculator &obj, int i, int a, int b)
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
		void Factorial::getFactorial(�alculator &obj, int a, int b)
		{
			cout << "a! = ";
			cout << a;
			cout << endl;
			cout << "b! = ";
			cout << b;
			cout << endl;
		}
};

void Action(�alculator object)
{
	cout << " regarding a and b";
};

int main()
{

	�alculator obj1 (0, 0);
	Factorial obj2 (0, 0);

	Action(obj1);
	cout << "Enter a, b ";
	cout << endl;
	obj1.set�alculator();
	obj1.get�alculator();
	obj2.setFactorial();
	obj2.getFactorial();

	system("pause");
	return 0;
};