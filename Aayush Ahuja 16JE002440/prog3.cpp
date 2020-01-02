#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("fileread.txt","r",stdin);
	int count=0;
	char c;
	while(cin >> c)
		if(c=='+' or c=='-' or c=='*' or c=='/' or c=='%' or c=='+' or c=='-' or c=='!')
			count++;
	cout << "The total number of operators in input file is : " << count << endl;
	return 0;
}
