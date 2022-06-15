#include	<stdio.h>
/*
int main(int argc, char *argv[])
{
// int* in size'ini dondurur.
// B: 1int=4byte.

	int	arr[3] = {3, 6, 9}; // -> int*
	// size_t -> uzunluk dondurecek
	printf("%lu\n\n-------", sizeof(arr));
	return (0);
}
*/

//============================================

/*
int main(int argc, char *argv[])
{
	int arr[10] = {3, 6, 9};
	printf("%lu\n\n-------", sizeof(arr));
	return (0);
// arr, kendisinin tamaminin size'ini dondurur.
// sadece ilk 3 indeksine deger atamis olduk.
}
*/

//=============================================

/*
int main(int argc, char *argv[])
{
	int arr[10] = {1, 3, 5};
	int *arrp = arr;
	// arr = arr[0] -> ilk degerini atadik
	printf("%lu\n\n-------", sizeof(arrp));
// B: pointerlar 8 byte lik yer kaplarlar.
}
*/

//=============================================

/*
int main(int argc, char *argv[])
{
	int arr[10] = {1, 3, 5};
	printf("%lu\n\n-------", sizeof(arr) / sizeof(int));
	return (0);
}
*/

//=============================================

/*
#define NUMBER_OF_ELEMENTS 50

int main(int argc, char *argv[])
// define'in yanina yazdigimiz sey makrodur.
{
	int arr[NUMBER_OF_ELEMENTS] = {1, 3, 5};
	printf("%lu\n\n-------", sizeof(NUMBER_OF_ELEMENTS));
	return (0);
// B: ram = hafiza
// B: ram de 2 turlu hafiza vardir. 
// B: heap	-> dinamik olarak yer tesis etmeyi saglar.
// B: stack	-> statik olarak ye tahsisi saglar.
// B: stack'deki veriler direkt bellek icine yerlesir.
// bu nedenle hizli ve erisimi kolaydir.

// B: makrolar stack'de tutulur.
// B: makronun degeri kac verilirse verilsin int olarak kabul edilir. makro 50 de olsa uzunlugu 4 byte'tir, 286476763786 da olsa uzunlugu 4 byte'tir.
}
*/

//===================================================

/*
int main(int argc, char *argv[])
{
	int arr[10] = {1, 3, 6};
	printf("%lu\n", sizeof(unsigned long));
	printf("%lu\n", sizeof(sizeof(arr)));
// sizeof'un icine ne turunu yazarsan, o turden uzunlugu bulursun. buldugun uzunluk, bellekte o kadar yer kaplar.
// sizeof, unsigned long dondurur. dolayisiyla unsigned longun uzunlugu da 8 dir.
// bu iki printf tamamen aynidir. 
	return (0);
}
*/
