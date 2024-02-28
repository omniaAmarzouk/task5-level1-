// Homework 2: Reverse a string

#include <iostream>
using namespace std;
void reverse(const string s,int n)
{
	if (n < 0)
		return;
	cout << s[n];
    reverse(s, n - 1);
}
int main()
{
	string s = "Omnia";
	reverse(s, s.size());
}