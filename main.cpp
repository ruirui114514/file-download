#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream fout("test.bat");
	string filename,url;
	cout<<"filename:";
	getline(cin,filename);
	cout<<"url:";
	getline(cin,url);
	fout<<"cd /d %~dp0\npowershell curl -o \""<<filename<<"\" \""<<url<<"\"";
	fout.close();
	system("test.bat");
	system("del test.bat");
	cout<<filename<<"ok!";
	return 0;
}
