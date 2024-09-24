#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string text;
	ifstream MyFile("c programs.txt");
	while(getline(MyFile,text))
	{
		cout<<text;	
	}
	return 0;
}
