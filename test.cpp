#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("log.txt", ios::out);
	if (!fout)
	{
		cout << "�ļ���ʧ��" << endl;
		exit(0);
	}

	fout << "hello world!";
	return 0;
}