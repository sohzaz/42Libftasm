#include <stdio.h>
#include <assert.h>
#include "libfts.h"
#include <string.h>
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
	printf("test puts\n");
	int toto = ft_puts("Hello World");
	printf("%d\n", toto);
	puts("Hello World");
	ft_puts(NULL);
	
	puts(NULL);
	//write(1, "\n", 1);
	assert(ft_strlen("HELLO") == strlen("HELLO"));
	assert(ft_strlen("ste") == strlen("STE"));
	printf("%d\n",ft_strlen(NULL));
	printf("Test ft_strlen : success!\n");
	printf("ft_memset test 1\n");
	char str7[20] = "AAAAAA";
	char str8[10] = "AAAAAA";
	printf("pre-memset : str1 = \"%s\" str2 = \"%s\"\n", str7, str8);
	memset(str7,'D', 5);
	ft_memset(str8, 'D', 5);
	printf("post-memset:\n");
	printf("str1\n");
	write(1, str7, 10);
	write(1, "\n", 1);
	printf("str2\n");
	write(1, str8, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str7, str8);
	char str9[10] = "BBBBBBB";
	char str10[10] = "BBBBBBB";
	printf("ft_memset test 2\n");
	printf("pre-memset : str1 = \"%s\" str2 = \"%s\"\n", str9, str10);
	memset(str9, 'D', 1);
	ft_memset(str10, 'D', 1);
	printf("post-memset:\n");
	printf("str1\n");
	write(1, str9, 10);
	write(1, "\n", 1);
	printf("str2\n");
	write(1, str10, 10);
	write(1, "\n", 1);
	printf("with printf : str1 = \"%s\" str2 = \"%s\"\n", str9, str10);
	char str11[20] = "test";
	char str12[20] = "toto";
	printf("pre-memcpy : str1 = \"%s\" str2 = \"%s\"\n", str11, str12);
	ft_memcpy(str11, str12, 3);
	printf("post-memcpy : str1 = \"%s\" str2 = \"%s\"\n", str11, str12);

	char *str13; 
		str13 =  ft_strdup(str11);
	char *str14;
		str14 = strdup(str11);
	printf("%s\n", str13);
	printf("%s\n", str14);
	str13 = ft_strdup("One More tesT");
	str14 = strdup("One More tesT");

	printf("%s\n", str13);
	printf("%s\n", str14);
	int fd = open("ft_strlen.s", O_RDONLY);
	printf("%d\n", fd);
	ft_cat(fd);












	return (0);
}
