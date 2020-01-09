#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	vector <pair<string,int> > a;
	vector<string> ke{"asm","else","new","this","auto","enum","operator","throw","bool","explicit","private","true","break","export","protected","try","case","extern","public","typedef","catch","false","register","typeid","char","float","reinterpret_cast","typename","class","for","return","union","const","friend","short","unsigned","const_cast","goto","signed","using","continue","if","sizeof","virtual","default","inline","static","void","delete","int","static_cast","volatile","do","long","struct","wchar_t","double","mutable","switch","while","dynamic_cast","namespace","template"};
	cout << "Enter the keyword to test. Press Q/q to end the input." << endl;
	while(cin >> s)
	{
		if(s=="Q" or s=="q")
			break;
		bool valid=false;
		for(int i=0;i<ke.size() and !valid;i++)
			if(ke[i] == s)
				valid=true;
		if(valid)
		{
			cout << "Keyword is valid!" << endl;
			a.push_back(make_pair(s,a.size()+1));
		}
		else
			cout << "Keyword invalid!" << endl;
	}
	cout << "Symbol Table :-" << endl << "Symbol     ID" << endl;
	for(int i=0;i<a.size();i++)
		cout << a[i].first << " " << a[i].second << endl;
}
