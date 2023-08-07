#include <iostream>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	int n,t;
	cin>>s;
	n=s.length();
	t=n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<t;j++)
		{
			for(int k=0;k<=j;k++)
			{
				cout<<s[i+k];//ok
			}
			cout<<endl;
		}
		t--;
	}

	return 0;
}

