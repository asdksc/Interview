
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
