/****************************************************************************
**
** Copyright (C) 2013 JayLi
** All rights reserved.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
****************************************************************************/

#include <stdio.h>
#include <tchar.h>

short endian = 1;
#define LITTLE_ENDIAN (*(char *)(&endian))
#define BIG_ENDIAN (*((char *)&endian + sizeof(short) - 1))

// Rotate n * n matrix clockwise
extern void rotateM(int *matrix, int n);
// Reverse c-style string
extern void reverse(char *str);

// test case
static void testRotateM();
static void testReverse();
static void testEndian();

int _tmain(int argc, _TCHAR* argv[])
{
	testRotateM();
	testReverse();
	testEndian();
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

void testEndian()
{
	if (LITTLE_ENDIAN)
		printf("Littel Endian \n");
	if (BIG_ENDIAN)
		printf("Big Endian \n");
}