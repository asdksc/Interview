
// Candidate 2
void reverse(char *str)
{
	char *end = str;

	while (*end++){}

	end -= 2;

	while (str < end)
	{
		char tmp = *str;
		*str++ = *end;
		*end-- = tmp;
	}
}
