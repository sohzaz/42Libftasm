#include <stdio.h>
#include <assert.h>
#include "libfts.h"
#include <string.h>
#include <unistd.h>

int main() 
{
	assert(ft_islower('c') == 1);
	assert(ft_islower(96) == 0);
	assert(ft_islower('%') == 0);
	printf("ft_islower : Success !\n");
	assert(ft_isupper('c') == 0);
	assert(ft_isupper('C') == 1);
	assert(ft_isupper('%') == 0);
	printf("ft_isupper : Success !\n");
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('9') == 0);
	assert(ft_isalpha('{') == 0);
	printf("ft_isalpha : Success !\n");
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('!') == 0);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('9') == 1);
	assert(ft_isalnum(65) == 1);
	assert(ft_isalnum('>') == 0);
	printf("ft_isalnum : Success !\n");
	assert(ft_isprint('a') == 1);
	assert(ft_isprint('!') == 1);
	assert(ft_isprint('A') == 1);
	assert(ft_isprint('9') == 1);
	assert(ft_isprint(65) == 1);
	assert(ft_isprint('>') == 1);
	assert(ft_isprint(18) == 0);
	printf("ft_isprint : Success !\n");
	assert(ft_isdigit('5') == 1);
	assert(ft_isdigit('A') == 0);
	printf("ft_isdigit : Success !\n");
	assert(ft_strlen("HELLO") == strlen("HELLO"));
	assert(ft_strlen("ste") == strlen("STE"));
	ft_strlen(NULL);
	printf("ft_strlen : Success !\n");

	//=====bzero===//
	printf("\n===Tests bzero===\n");
	char str1[10] = "AAAAAAA";
	char str2[10] = "AAAAAAA";
	printf("--ft_bzero test 1--\n");
	printf("pre-bzero : str1 = \"%s\" str2 = \"%s\"\n", str1, str2);
	bzero(str1, 5);
	ft_bzero(str2, 5);
	printf("post-bzero:\n");
	write(1,"str1: ", 6);
	write(1, str1, 10);
	write(1, "\n", 1);
	write(1, "str2: ", 6);
	write(1, str2, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str1, str2);
	char str3[10] = "BBBBBBB";
	char str4[10] = "BBBBBBB";
	printf("--ft_bzero test 2--\n");
	printf("pre-bzero : str1 = \"%s\" str2 = \"%s\"\n", str3, str4);
	bzero(str3, 1);
	ft_bzero(str4, 1);
	printf("post-bzero:\n");
	write(1,"str1: ", 6);
	write(1, str3, 10);
	write(1, "\n", 1);
	write(1,"str2: ", 6);
	write(1, str4, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str3, str4);

	//=====strcat====//
	printf("\n===Test strcat===\n");
	char str5[20] = "BBBBD";
	char str6[10] = "CAAAA";
	printf("str1 = %s , str2 = %s\n", str5, str6);
	ft_strcat(str5, str6);
	printf("strcat: %s\n", str5);

	//===puts===//
	printf("\n===Tests puts===\n");
	ft_puts("ft_puts: Hello World");
	puts("libc: Hello World");
	printf("--ft_puts(NULL)--\n");
	ft_puts(NULL);	
	printf("--puts(NULL)--\n");
	puts(NULL);
	//===memset===//
	printf("\n===Tests memset===\n");
	printf("--test 1 memset(str1,'D', 5) ft_memset(str2, 'D', 5)--\n");
	char str7[20] = "AAAAAA";
	char str8[10] = "AAAAAA";
	printf("pre-memset : str1 = \"%s\" str2 = \"%s\"\n", str7, str8);
	memset(str7,'D', 5);
	ft_memset(str8, 'D', 5);
	printf("post-memset:\n");
	printf("str1: %s\n", str7);
	printf("str2: %s\n", str8);
	char str9[10] = "BBBBBBB";
	char str10[10] = "BBBBBBB";
	printf("--test 2 memset(str1, 'D', 1);ft_memset(str2, 'D', 1)--\n");
	printf("pre-memset : str1 = \"%s\" str2 = \"%s\"\n", str9, str10);
	memset(str9, 'D', 1);
	ft_memset(str10, 'D', 1);
	printf("post-memset:\n");
	printf("str1: %s\n", str9);
	printf("str2: %s\n", str10);
	//===memcpy===//
	printf("\n===Test memcpy===\n");
	char str11[20] = "test";
	char str12[20] = "toto";
	printf("pre-memcpy : str1 = \"%s\" str2 = \"%s\"\n", str11, str12);
	ft_memcpy(str11, str12, 3);
	printf("post-memcpy : str1 = \"%s\" str2 = \"%s\"\n", str11, str12);


	//===strdup===//
	printf("\n===Test strdup===\n");
	printf("--original str: %s--\n", str11);
	char *str13; 
	str13 =  ft_strdup(str11);
	char *str14;
	str14 = strdup(str11);
	printf("ft_strdup: %s\n", str13);
	printf("libc: %s\n", str14);
	printf("--original str: One More tesT --\n");
	str13 = ft_strdup("One More tesT");
	str14 = strdup("One More tesT");
	ft_strdup(NULL);

	printf("ft_strdup: %s\n", str13);
	printf("libc: %s\n", str14);

	//===cat===//
	printf("\n===Tests ft_cat===\n");
	printf("--Read a file--\n");
	printf("--Makefile--\n");
	int fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	close(fd);
	ft_cat(55);
	printf("--Read from stdin (type something)--\n");
	ft_cat(0);













	return (0);
}
