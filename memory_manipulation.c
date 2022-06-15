#include	<stdio.h>
#include	<unistd.h>


// iki array i karsilasriracagiz
int main(int argc, char **argv)
{
	int arr1[] = {1, 2};
	int arr2[] = {1, 2};

	if(memcmp(arr1, arr2, 2 * sizeof(int)) == 0)
		printf("Arrays are the same!");
	else
	{
		printf("Arrays are the not same!");
	}
}

int	ft_memcmp(const void *dst, const void *src, size_t n)
//bu fonksiyon, arraylerin ayni olup olmadigini checkler.
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(((unsigned char*)dst)[i] != (((unsigned char *)src)[i]))
			return (((unsigned char *) dst)[i] - ((unsigned char *)src)[i];
		i++;
	}
	return (0);
}
