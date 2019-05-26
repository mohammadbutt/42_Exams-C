#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> /*For malloc*/
/*Not graded by mounlinet*/
int *ft_rrange(int start, int end);
int ft_count(int start, int end);
int *ft_rrange(int start, int end)
{
	int *array;
	int count;
	int i;


	count = 0;
	i = 0;
	count = ft_count(start, end);
	array = (int *)malloc(sizeof(int)*(count));

	while(count)
	{
		if(start < end)
			array[i++] = end--;
		else
			array[i++] = end++;
		count--;
	}
	return(array);
}

int ft_count(int start, int end)
{
	int count;

	count = 0;
	if(start > end)
		count = start - end + 1;
	else if(end > start)
		count = end - start + 1;
	else
		count = 1;
	return(count);
}
/*
int main (void)
{
	int *array;

	array = ft_rrange(1, 3);

	printf("%d", array[2]);
	return(0);
}
*/
/*
int main(void)
{
	int count;
	int start;
	int end;

	count = 0;
	start = 0;
	end = -3;

	count = ft_count(start, end);
	while(count)
	{
		if(start < end)
			printf("%d\n", end--);
		else
			printf("%d\n", end++);
		count--;
	}
	return(0);
}
*/
