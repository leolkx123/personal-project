#include "pch.h"
#include "File.h"
#include "check.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char** argv)
{
	if (argc <= 1)
	{
		cout << "请输入文件名！" << endl;
		exit(0);
	}
	string input_fname = argv[1];
	File my_file;
	my_file.file_output(input_fname);
	return 0;
} 