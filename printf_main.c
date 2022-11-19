

// x X and i test

// int main(void)
// {
//     unsigned long         x = 85769887;
//     long long             i = 85769887;
//     unsigned long long    X = 85769887;

//     ft_printf("GIVE ME THE UPPER HEXA: %X\nGIVE ME THE LOWER HEXA: %x\nGIVE ME THE DECA: %i\n", X, x, i);
// }

// p test

// int main()
// {
// 	int x = 1997;
// 	int j = 1882;
// 	int *ptr = &x;
	
// 	x = j;
// 	j = x;
	
// 	printf("The address is: %p, the value is %d\n", ptr, *ptr);
// 	ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
// }

// c s d u % test

// int main()
// {
// 	int           c = 'G';
// 	int           d = 89;
// 	unsigned int  u = 768;
// 	char          *str = "a string";
// 	char          perc = '%';

// 	ft_printf("c: %c\nd: %d\nu: %u\nstr: %s\nperc: %%\n", c, d, u, str, perc);
// }


int main()
{
	int      	     c = 'G';
	int        	 	  d = 967;
	int				x = 955;
	int 			*ptr = &x;
	unsigned int		X = 386969449;
	
	unsigned int  u = 768;
	char          *str = "a string";
	char          perc = '%';

	ft_printf("c: %c\n", c);
	printf("c: %c\n", c);
	ft_printf("s: %s\n", str);
	printf("s: %s\n", str);
	ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
	printf("The address is: %p, the value is %d\n", ptr, *ptr);
	ft_printf("d: %d\n", d);
	printf("d: %d\n", d);
	ft_printf("x: %x\n", x);
	printf("x: %x\n", x);
	ft_printf("X: %X\n", X);
	printf("X: %X\n", X);
	ft_printf("u: %u\n", u);
	printf("u: %u\n", u);
	ft_printf("%%");
	printf("\n");
	printf("%%\n");
	ft_printf("%%%");
	printf("\n");
	printf("%%%");
	printf("\n");
}

// int main()
// {
// 	int x = 1997;
// 	int j = 1882;
// 	int *ptr = &x;
	
// 	x = j;
// 	j = x;
	
// 	printf("The address is: %p, the value is %d\n", ptr, *ptr);
// 	ft_printf("The address is: %p, the value is %d", ptr, *ptr);
// }
