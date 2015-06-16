#include <stdio.h>
#include <assert.h>
#include "libfts.h"
#include <strings.h>
#include <unistd.h>

int main() 
{
	char str1[10] = "AAAAAAA";
	char str2[10] = "AAAAAAA";

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
	printf("ft_bzero test 1\n");
	printf("pre-bzero : str1 = \"%s\" str2 = \"%s\"\n", str1, str2);
	bzero(str1, 5);
	ft_bzero(str2, 5);
	printf("post-bzero:\n");
	printf("str1\n");
	write(1, str1, 10);
	write(1, "\n", 1);
	printf("str2\n");
	write(1, str2, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str1, str2);
	char str3[10] = "BBBBBBB";
	char str4[10] = "BBBBBBB";
	printf("ft_bzero test 2\n");
	printf("pre-bzero : str1 = \"%s\" str2 = \"%s\"\n", str3, str4);
	bzero(str3, 1);
	ft_bzero(str4, 1);
	printf("post-bzero:\n");
	printf("str1\n");
	write(1, str3, 10);
	write(1, "\n", 1);
	printf("str2\n");
	write(1, str4, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str3, str4);
	printf("ft_strcat test1\n");
	char str5[20] = "BBBBD";
	char str6[10] = "CAAAA";
ft_strcat(str5, str6);
	printf("%s\n", str5);











	return (0);
}
