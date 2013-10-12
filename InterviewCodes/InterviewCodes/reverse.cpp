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

// commit test 1

// Candidate 1
void rotateM(int *matrix, int n)
{
	int **temp = new int*[n];

	for (int i = 0; i < n; i++)
		temp[i] = new int[n];

	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	{
		temp[j][n - i - 1] = *(matrix + i * n + j);
	}

	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	{
		*(matrix + i * n + j) = temp[i][j];
	}

	for (int i = 0; i < n; i++)
		delete temp[i];

	delete temp;
}
