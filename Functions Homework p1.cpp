// Homework 1: Max of 6 numbers

#include <iostream>
using namespace std;
int max(int a,int b,int c)
{
	int max1 = a > b ? a : b;
	int max2 = max1 > c ? max1 : c;
	return max2;
}
int max(int a, int b, int c, int d)
{
	int max1 = max(a, b, c) > d ? max(a, b, c) : d;
	return max1;
}
int max(int a, int b, int c, int d, int e)
{
	int max1 = max(a, b, c,d) > d ? max(a, b, c,d) : e;
	return max1;
}
int max(int a ,int b, int c,int d,int e,int f)
{
	int max1 = max(a,b,c,d,e) > f ? max(a,b,c,d,e) : f;
	return max1;
}
int main()
{
	cout << max(1, 2, 3, 4, 5, 6);
}
   