#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int N=s.length();
	int smol=0,big=0;
	
	for(int i =0 ; i < N ; i++)
	{
		if(isupper(s[i]))
		{
			big+=1;
		}
		else{
			smol+=1;
		}
	}
	
	if(big > smol)
	{
		for(int i =0 ; i  < N ; i++)
		{
			s[i]=toupper(s[i]);
		}
	}
	else{
		for(int i =0 ; i  < N ; i++)
		{
			s[i]=tolower(s[i]);
		}
	}
	
	cout<<s;

}
	
