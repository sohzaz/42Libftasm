#include <stdio.h>
#include <assert.h>
#include "libfts.h"

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



}
