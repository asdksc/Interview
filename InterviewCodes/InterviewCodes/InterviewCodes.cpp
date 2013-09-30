// InterviewCodes.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

void rotateM(int **matrix, int n)
{
	int **temp = new int*[n];

	for (int i = 0; i < n; i++)
		temp[i] = new int[n];

	// ... ...


	// ... ...

	for (int i = 0; i < n; i++)
		delete temp[i];

	delete temp;
}