#include "ft_printf.h"
#include <stdio.h>

int main()
{
	printf(" 0*%0-*.*d*0 0*%0*.*d*0 ", 6, 2, 102, 10, 21, -101);
	ft_printf(" 0*%0-*.*d*0 0*%0*.*d*0 ", 6, 2, 102, 10, 21, -101);
}