int main(int argc, char *argv[])
{
	int m;
	int n;
	int sum;

	m = 1;
	n = 0;
	sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[m]);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
