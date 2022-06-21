#include	<stdio.h>
#include	<unistd.h>
//#include	<string.h>

				//MEMCMP
// =========================================================
int	ft_memcmp(const void *dst, const void *src, size_t n)
// bu fonksiyon, 2 bellek bolgesininde ayni olup olmadigini checkler.
// strcmp --> (string comperson) --> stringleri karsilastirir.
// memcmp --> (memory comperson)--> bellek bolgelerini karsilastirir.
{
	size_t i;

	i = 0;
	while(i < n)
	{
		if(((unsigned char*)dst)[i] != (((unsigned char *)src)[i]))
			return (((unsigned char *) dst)[i] - ((unsigned char *)src)[i]);
		i++;
	}
	return (0);
}

//==============================================================

/*
// iki array'i karsilasriracagiz
int main(int argc, char *argv[])
{
	int arr1[] = {1, 2};
	int arr2[] = {1, 2};

	if(ft_memcmp(arr1, arr2, 2 * sizeof(int)) == 0) 
		printf("Arrays are the same!\n");
	else
		printf("Arrays are the not same!\n");
}

// Eger 0 dondururse bellekte kontrol edilen yerler aynidir. (libft/ft_memcmp.c)
// 3. parmetre ne kadarini karsilastiracagini yazarsin.
*/

//==============================================================

/*
int main (int argc, char **argv)
{
	int			arr1[] = {1, 2};
	short int	arr2[] = {1, 2};

	if(ft_memcmp(arr1, arr2, 2 * sizeof(short int)) == 0)
		printf("Arrays are the same!\n");
	else
		printf("Arrays are the not same!\n");
}
//int -> 4 byte,		short int -> 2 byte
// sizeof(int) dersen, 4 byte'ini kontrol eder.
// sizeof(short int) dersen, 2 byte'ini kontrol eder. 
// Sonuc olarak ne olursa olsun, esit olamaycaklarindan "else"e girer.
*/


//==============================================================

					//MEMCPY
//==============================================================

int *ft_memcpy(void *dst, const void *str, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !str)
		return(0);
	while(i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)str)[i];
			i++;
	}
	return (dst);
}

/*
int main (int args, char **argv)
{
	int	arr1[] = {3, 4};
	int arr2[] = {1, 2};

	ft_memcpy(arr1, arr2, 2 * sizeof(int));
	printf("arr1 = %d, %d\narr2 = %d, %d\n", arr1[0], arr1[1], arr2[0], arr2[1]);
}
*/
//=============================================================

					//MEMSET
//=============================================================

int	*ft_memset(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((int *)src)[i] = c;
		i++;
	}
	return (src);
}

/*
int main()
{
	char arr1[] = {0, 2};
	int	arr2[] = {1, 2};
	
//	printf("arr1 = %d, %d\n", arr1[0], arr1[1]);
	ft_memset(arr2, 1, 2 * sizeof(int));
	printf("arr2 = %d, %d\n", arr2[0], arr2[1]);
//	printf("%c", *arr1);
}
// bu normaldeki memset degildir. normaldaki memsetin 105. satirdaki tur donusumu "int" degil, "unsigned char"dir.
// su anki yazdigimizda icine ne sayisi doldurmak istiyorsak doldurabiliriz. Fakat normaldekinde, "0"dan baska bir degerle doldurmaya kalkarsak, alakasiz sayilar elde ederiz. sebebi ise tur donusumunden
*/
//=============================================================
					//MEMCHR
//=============================================================

int	*ft_memchr(void *str, int c, size_t n)
{
	size_t	i;

	if(n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
//str -> bastaki eleman
// i --> bulundugu eleman
// toplarsan hangi karakterden itibaren yazacagini bulmus olursun.
// ft_memchr( 1. parametre, 2.parametre, 3.parametre)
// 1. -> hangi STRINGDEN
// 3. -> ne kadar karaktere gelene kadar
// 2. -> hangi karakteri arasin

/*
int main(int argc, char **argv)
{
	char	arr1[] = "sakkayaaa";
	printf("%s\n", (char *)ft_memchr(arr1, 'a', 17));
}*/
//=============================================================
/*
int main (int argc, char **argv)
{
	int arr1[] = {3, 4};
	int arr2[] = {1, 2};

	if(ft_memchr(arr1, 1, sizeof(int) * 2) != NULL)
		printf("Found the bytes!\n");
	else
		printf("Did not find the bytes\n");
}*/
