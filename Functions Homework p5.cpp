//Homework 5: Set-powers

#include <iostream>
using namespace std;
void set_powers(int arr[], int len, int m)
{
	arr[0] = 1;
	for (int i = 1; i < len; i++)
	{
		arr[i] = m * arr[i - 1];
	}
}
int main()
{
	int arr[1000], m, len;
	cout << "len= "; cin >> len;
	cout << "m= "; cin >> m;
	set_powers(arr, len, m);
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
}

