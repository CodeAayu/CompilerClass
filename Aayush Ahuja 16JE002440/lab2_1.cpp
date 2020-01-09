#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <pair<string,int> > a;
	string s;
	cout << "Input the identifiers to check validity. Press Q/q to end the input." << endl;
	while(cin >> s)
	{
		if(s=="Q" or s=="q")
			break;
		bool valid=false;
		if(( s[0] >= 'a' and s[0] <= 'z' ) or ( s[0] >= 'A' and s[0] <= 'Z' ) or s[0] == '_')
			valid = true;
		for(int i=1 ; i<s.size() and valid ; i++)
		{
			if(( s[i] >= 'a' and s[i] <= 'z' ) or ( s[i] >= 'A' and s[i] <= 'Z' ) or ( s[i] >= '0' and s[0] <= '9' ) or s[i] == '_')
				continue;
			else
				valid = false;
		}
		if(valid)
		{
			cout << "Identifier is valid!" << endl;
			a.push_back(make_pair(s,a.size()+1));
		}
		else
			cout << "Identifier invalid!" << endl;
	}
	cout << "Symbol Table :-" << endl << "Identifier     ID" << endl;
	for(int i=0;i<a.size();i++)
		cout << a[i].first << " " << a[i].second << endl;
	return 0;
}
