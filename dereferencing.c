#include	<stdio.h>

/*
int main(int argc, char *args[])
{
	int a = 17;
	int *p = &a;
	printf("%d", *p);
}
*/

//=====================================

/*
int main (int argc, char *args[])
{
	int a;
	int *p = &a;
	*p = 1;
	printf("%d", *p);
// B: *p = p[0]
}
*/

//====================================

int main(int argc, char *args[])
{
	int arr[] = {5, 12, 13};
	
	printf("%d\n%d\n-------\n", *arr + 1, arr[1] + 1);
	
	printf("%d\n-------\n", *(arr + 1));

	printf("%d\n%d\n", 1[arr], 2[arr]);

// *(arr + 1) <=> 1[arr] <=> arr[1]
}
