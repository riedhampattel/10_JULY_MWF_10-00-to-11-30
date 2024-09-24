#include<iostream>
#include<fstream>
using namespace std;
//ofstream ---> create,write
int main()
{
	ofstream MyFile1("first.txt");
	ofstream MyFile2("second.txt");
	MyFile1<<"This is my first file";
	MyFile2<<"This is my second file";
	MyFile1.close();
	MyFile2.close();
	cout<<"\nOperation successful";
	return 0;
}
