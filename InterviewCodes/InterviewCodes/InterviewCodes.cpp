// InterviewCodes.cpp : �������̨Ӧ�ó������ڵ㡣
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