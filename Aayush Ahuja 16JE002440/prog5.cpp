#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("fileread.txt","r",stdin);
	char c;
	int count=0;
	while(cin >> c)
	{
		if(c=='/')
		{
			cin >> c;
			if(c=='/')
				count++;
		}
	}
	cout << "The number of comment lines are: " << count << endl;
	return 0;
}