/**
 * *_memset - function that fills memory with a constant byte
 * @s: pointer s
 * @b: constant bytes
 * @n: the number of bytes to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
