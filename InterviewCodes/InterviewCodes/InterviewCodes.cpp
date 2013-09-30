#include "stdafx.h"

// Rotate n * n matrix clockwise
extern void rotateM(int *matrix, int n);
// Reverse c-style string
extern void reverse(char *str);

// test case
static void testRotateM();
static void testReverse();

int _tmain(int argc, _TCHAR* argv[])
{
	testRotateM();
	testReverse();
	return 0;
}

void testRotateM()
{
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	rotateM((int *)a, 3);

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void testReverse()
{
	char str1[] = "";
	char str2[] = "h";
	char str3[] = "hi";
	char str4[] = "Hello world";

	printf("%s\n", str1);
	reverse(str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	reverse(str2);
	printf("%s\n", str2);
	printf("%s\n", str3);
	reverse(str3);
	printf("%s\n", str3);
	printf("%s\n", str4);
	reverse(str4);
	printf("%s\n", str4);
}