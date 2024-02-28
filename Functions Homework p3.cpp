//Homework 3: Calculator

#include <iostream>
using namespace std;
int menu() {
	int ch = 0;
		while (ch == 0)
		{
			if (1)
			{
				cout << "\nMenu: " << endl;
				cout << "1) Add 2 numbers." << endl;
				cout << "2) Subtract 2 numbers." << endl;
				cout << "3) Multiply 2 numbers." << endl;
				cout << "4) Divide 2 numbers." << endl;
				cout << "5)Exit." << endl;
			}
			cout << "Enter choice from menu[1-5]:";
			cin >> ch;
			if (ch > 5 && ch < 1)
				cout << "Invalid choice.Enter another one.", ch = 0;
		}
		return ch;
}
void read2number(double& a, double& b)
{
	cout << "Enter two number: ";
	cin >> a >> b;
}
void add(double a, double b)
{
	cout<<"a+b= "<< a + b;
}
void sub(double a, double b)
{
	cout << "a-b= " << a - b;
}
void mul(double a, double b)
{
	cout << "a*b= " << a * b;
}
void div(double a, double b)
{
	if (b == 0)
		cout << "invalid operation"; 
	else
		cout << "a/b= " << a / b;
}


int main()
{
	int total = 0,ch;
	double a, b;
	while (1)
	{
		ch = menu();
		read2number(a,b);
		switch (ch)
		{
		case 1:
			add(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
		}
		if (ch == 5)
			break;
		total++;
	}
	cout << "Total Operations is " << total;
}

   

