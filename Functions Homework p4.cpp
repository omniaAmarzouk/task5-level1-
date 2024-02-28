//Homework 4: Is Palindrome Array

#include <iostream>
using namespace std;

void Palindrome(int n,int arr[10000])
{
	bool pal{ 1 };
	for (int i = 0; i < n; i++)
	{
		if (arr[n - i - 1] != arr[i])
		{
			pal = 0;
			break;
		}
	}
	if (pal)
		cout << "Yes";
	else
		cout << "No";
}
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++)
		cout << "Enter element " << i + 1 << " : ", cin >> arr[i];
	Palindrome(n, arr);
}

