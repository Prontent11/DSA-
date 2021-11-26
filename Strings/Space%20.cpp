#include <bits/stdc++.h>
using namespace std;

void replaceSpaces(string input)
{
	string rep = "%20";
	for(int i=0 ; i<input.length() ; i++)
	{
		if(input[i] == ' ')
			input.replace(i,1,rep);
	}
	cout<<input;
}

int main()
{
	string input = "Mr John Smith";
	replaceSpaces(input);

	return 0;
}
