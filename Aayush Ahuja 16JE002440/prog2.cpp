#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("fileread.txt","r",stdin);
	int count=0;
	string temp;
	while(getline(cin, temp))
		count++;
	cout << "Total number of lines in input file is: " << count << endl;
	return 0;
}