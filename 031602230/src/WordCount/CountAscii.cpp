#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CountAscii.h"
using namespace std;
int Ascii::countAscii(string pth)			//�������ַ���
{
	fstream f(pth);
	if (!f)
	{
		cout << "����������ļ������ļ�δ�򿪣����������룡" << endl;
		exit(0);
	}
	char c;
	int count = 0;
	while (f.get(c))count++;
	return count;
}
int Ascii::countLine(string pth)			//����������
{
	string str;
	fstream f(pth);
	if (!f)
	{
		cout << "����������ļ������ļ�δ�򿪣����������룡" << endl;
		exit(0);
	}
	int line_count = 0;
	while (getline(f, str))
	{
		if (str.empty())continue;
		else line_count++;
	}
	return line_count;
}