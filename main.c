#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf("orig: %-3.2d\n", 0);
	ft_printf("mine: %-3.2d\n", 0);
}