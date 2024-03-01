//Homework 7: Replace substring

#include <iostream>
using namespace std;
string replace_str(string input, string pattern, string to)
{
	string result = "";
	for (int i = 0; i < input.size(); i++)
	{
		/*if (input.substr(i, pattern.size()) == pattern) //substring function compare part of input equal size of pattern.
		{
			result += to;
			i += pattern.size() - 1;
		}
		else
			result += input[i];*/
		bool equal = 1;
		for (int j = 0; j < pattern.size(); j++)
		{
			if (input[i + j] != pattern[j])
			{
				equal = 0;
				break;
			}
		}
		if (equal)
		{
			result += to;
			i += pattern.size() - 1;
		}
		result += input[i];
    }
	return result;
}
int main()
{
	string result = replace_str("aabcabaaad", "aa", "x");
	cout << result << endl;
	result = replace_str("aabcabaaad", "aa", "aaaa");
	cout << result << endl;
	result = replace_str("aabcabaaad", "aa", "");
	cout << result << endl;
}