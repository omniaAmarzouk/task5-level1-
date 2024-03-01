//Homework 6: Get nth-prime

#include <iostream>
using namespace std;
bool is_prime(int num)
{  
	if (num <= 1)
		return false;
	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return false;
	return true;
}
int nth_prime(int n)
{
	for (int i = 2; ; i++)
		if (is_prime(i))
		{
			--n;
			if (n == 0)
				return i;
		}
	return 0;
}
int main()
{
	int num;
	cout << "Choose number : ";
	cin >> num;
	cout << "The first " << num << " Prime numbers is: ";
	for (int i = 1; i <= num; ++i) {
		cout << nth_prime(i) << " ";
	}
	return 0;
}