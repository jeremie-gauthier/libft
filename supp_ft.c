#include "libft.h"

void	ft_rotone(char *c)
{
	*c += 1;
}

char	ft_ret_rotone(char c)
{
	return (c + 1);
}

void	ft_rotone_even(unsigned int n, char *c)
{
	if (!(n % 2))
		*c += 1;
}

char	ft_ret_rotone_even(unsigned int n, char c)
{
	if (!(n % 2))
		return (c + 1);
	return (c);
}

int		main(void)
{
	char	*test = NULL;
	char	*testbis = NULL;
	char	**tab = NULL;

	printf("TESTS FOR FT_MEMALLOC\n");
	test = (char*) ft_memalloc(6);
	ft_strncpy(test, "Salut", 6);
	printf("%s\n", test);
	free(test);	
	/*	SEGFAULT SUR MEMDEL = TEST REUSSI ?	*/
//	printf("TESTS FOR FT_MEMDEL\n");
//	ft_memdel((void*) test);
/*	printf("%s\n", test);	*/
	printf("TESTS FOR FT_STRNEW\n");
	test = ft_strnew(6);
	ft_strncpy(test, "Salut", 6);
	printf("%s\n", test);
	
	printf("TESTS FOR FT_STRDEL\n");
	ft_strdel(&test);
	printf("Success ! :)\n");
	
	printf("TESTS FOR FT_STRCLR\n");
	test = ft_strdup("Hello World !");
	printf("Before strclr : %s\n", test);
	ft_strclr(test);
	printf("After strclr : %s\n", test);
	
	printf("TESTS FOR FT_STRITER\n");
	test = ft_strdup("Hello World !");
	printf("Before striter : %s\n", test);
	ft_striter(test, &ft_rotone);
	printf("After striter : %s\n", test);

	printf("TESTS FOR FT_STRITERI\n");
	test = ft_strdup("Hello World !");
	printf("Before striteri : %s\n", test);
	ft_striteri(test, &ft_rotone_even);
	printf("After striteri : %s\n", test);

	printf("TESTS FOR FT_STRMAP\n");
	test = ft_strdup("Hello World !");
	testbis = ft_strmap(test, &ft_ret_rotone);
	printf("Original string : %s Became : %s\n", test, testbis);

	printf("TESTS FOR FT_STRMAPI\n");
	testbis = ft_strmapi(test, &ft_ret_rotone_even);
	printf("Original string : %s Became : %s\n", test, testbis);

	ft_strdel(&test);
	ft_strdel(&testbis);
	
	printf("TESTS FOR FT_STREQU\n");
	if (ft_strequ("Hello World !", "Hello World !") == 1 && ft_strequ("Hi", "Ho") == 0)
		printf("Success ! :)\n");
	else
	{
		printf("Failure :(\n");
		return (1);
	}

	printf("TESTS FOR FT_STRNEQU\n");
	if (ft_strnequ("Hello World !", "Hello W !", 6) == 1 && ft_strnequ("Hi", "H", 2) == 0)
		printf("Success ! :)\n");
	else
	{
		printf("Failure :(\n");
		return (1);
	}
	printf("TESTS FOR FT_STRSUB\n");
	test = ft_strsub("Hello World.", 6, 10);
	testbis = ft_strsub("Hello World.", 0, 5);
	printf("|%s| && |%s|\n", test, testbis);

	ft_strdel(&test);
	ft_strdel(&testbis);
	printf("TESTS FOR FT_STRJOIN\n");
	test = ft_strjoin("Hello", " World !");
	printf("Trying to join |Hello| and | World !|\nThe result is : |%s|\n", test);

	ft_strdel(&test);
	printf("TESTS FOR FT_STRTRIM\n");
	test = ft_strtrim("       \n\nBonjour les amis   \t\n");
	printf("Trying to trim : |       \t\tBonjour les amis   \t\n|\nThe result is : |%s|\n", test);

	ft_strdel(&test);
	printf("TESTS FOR FT_STRSPLIT\n");
	tab = ft_strsplit("*salut*les***etudiants*", '*');
	ft_printtab(tab);

	printf("TESTS FOR FT_ITOA\n");
	test = ft_itoa(-1234);
	if (ft_strequ(test, "-1234"))
		printf("Success ! :)\n");

	return (0);
}
