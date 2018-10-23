#include "mytests.h"

int		main(void)
{
	int	i = 0;
	int iter_ptr_arr = 0;
	int	random = 0;
	int	randombis = 0;
	char	*strptr = NULL;
	char	*strptrbis = NULL;
	char	dest1[50];
	char	dest2[50];
	char	len_test[10][50] = {
			"",
			"a",
			"test",
			"\t\n\n\n\t    etewd dq dq dq ",
			"/'//'/l#\\][][[[[[[[[[[[]]]]]]]]]]]\"",
			"Hello World !",
			"Randomrandomrandomrandomrandom",
			"t\ves~",
			"blabla            bla>,<",
			"\0"
	};

	int	(*ft_ptr[7])(int) = {&ft_isalpha, &ft_isdigit, &ft_isalnum, &ft_isascii, &ft_isprint, &ft_toupper, &ft_tolower};

	int (*off_ptr[7])(int) = {&isalpha, &isdigit, &isalnum, &isascii, &isprint, &toupper, &tolower};

	char	fun[7][15] = {"FT_ISALPHA", "FT_ISDIGIT", "FT_ISALNUM", "FT_ISASCII", "FT_ISPRINT", "FT_TOUPPER", "FT_TOLOWER"};

	/*	STRLEN	*/
	printf("TESTS FOR FT_STRLEN\n");
	while (i < 10)
	{
		if (ft_strlen(len_test[i]) != strlen(len_test[i]))
		{
			printf("Error with value : %s. Got %li instead of %li\n", len_test[i], ft_strlen(len_test[i]), strlen(len_test[i]));
			return (1);
		}
		i++;
	}
	printf("Success ! :)\n");

	/*	FUN_PTR	*/
	while (iter_ptr_arr < 7)
	{
		printf("\nTESTS FOR %s\n", fun[iter_ptr_arr]);
		i = 0;
		while (i < 100)
		{
			srand(time(NULL));
			random = rand() % 128;
			if (ft_ptr[iter_ptr_arr](random) != off_ptr[iter_ptr_arr](random))
			{
				printf("Error with value : %i\n", random);
				return (1);
			}
			i++;
		}
		printf("Success ! :)\n");
		iter_ptr_arr++;
	}

	/*	STRCAT	*/
	printf("\nTESTS FOR FT_STRCAT\n");
	i = 0;
	while (i < 8)
	{
		if (ft_strcat(len_test[i], len_test[i + 1]) != strcat(len_test[i], len_test[i + 1]))
		{
			printf("Error : Got %s instead of %s", ft_strcat(len_test[i], len_test[i + 1]), strcat(len_test[i], len_test[i + 1]));
			return (1);
		}
		i += 2;
	}
	printf("Success ! :)\n");

	/*	STRNCAT	*/
	printf("\nTESTS FOR FT_STRNCAT\n");
	i = 0;
	while (i < 8)
	{
		strptr = ft_strncat(len_test[i], len_test[i + 1], i + 3);
		strptrbis = strncat(len_test[i], len_test[i + 1], i + 3);
		if (strptr != strptrbis)
		{
			printf("Error : Got %s instead of %s", strptr, strptrbis);
			return (1);
		}
		i += 2;
	}
	printf("Success ! :)\n");

	/*	STRLCAT	*/
	printf("\nTESTS FOR FT_STRLCAT\n");
	i = 0;
	ft_strcpy(dest1, "Hello");
	ft_strcpy(dest2, "Hello");
	char a[3] = "Hey";
/*	printf("%li\n%s\n", ft_strlcat(dest1, a, 10), dest1);*/
	printf("%zi\n%s\n", ft_strlcat(dest2, a, 10), dest2);
	/*if (a != b)
	{
		printf("Error !\n");
		return (1);
	}*/
	ft_bzero(dest1, 50);
	ft_bzero(dest2, 50);
	printf("Success ! :)\n");
	return (0);
	/*	STRCPY */ 
	printf("\nTESTS FOR FT_STRCPY\n");
	strptr = ft_strcpy(dest1, "Hello World !");
	strptrbis = strcpy(dest2, "Hello World !");
	if (ft_strcmp(strptr, strptrbis) == 0)
	{
		printf("Success\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRNCPY */ 
	printf("\nTESTS FOR FT_STRNCPY\n");
	strptr = ft_strncpy(dest1, "Hello World !", 5);
	strptrbis = strncpy(dest2, "Hello World !", 5);
	if (ft_strcmp(strptr, strptrbis) == 0)
	{
		printf("Success ! :)\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRCMP	*/
	printf("\nTESTS FOR FT_STRCMP\n");
	i = 0;
	while (i < 20)
	{
		srand(time(NULL));
		random = rand() % 9;
		randombis = rand() % 9;
		if (ft_strcmp(len_test[random], len_test[randombis]) != strcmp(len_test[random], len_test[randombis]))
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	printf("Success ! :)\n");
	iter_ptr_arr++;
	
	/*	STRNCMP	*/
	printf("\nTESTS FOR FT_STRNCMP\n");
	i = 0;
	while (i < 20)
	{
		srand(time(NULL));
		random = rand() % 9;
		randombis = rand() % 9;
		if (ft_strncmp(len_test[random], len_test[randombis], random) != strncmp(len_test[random], len_test[randombis], random))
		{
			printf("Error with value %i - %i\n", random, randombis);
			return (1);
		}
		i++;
	}
	printf("Success ! :)\n");
	iter_ptr_arr++;

	/*	ATOI	*/
	printf("\nTESTS FOR FT_ATOI\n");
	if (ft_atoi("      \t\t\n\v-123a32") == atoi("      \t\t\n\v-123a32"))
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRSTR	*/
	printf("\nTESTS FOR FT_STRSTR\n");
	if (ft_strstr("Hello", "llo") == strstr("Hello", "llo"))
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRNSTR	*/
	printf("\nTESTS FOR FT_STRNSTR\n");
	if (ft_strnstr("Hello", "llo", 2) == strnstr("Hello", "llo", 2))
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRDUP	*/
	printf("\nTESTS FOR FT_STRDUP\n");
	strptr = ft_strdup("Hello World !");
	strptrbis = strdup("Hello World !");
	if (ft_strcmp(strptr, strptrbis) == 0)
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRCHR	*/
	printf("\nTESTS FOR FT_STRCHR\n");
	if (ft_strchr("Hello", 'l') == strchr("Hello", 'l'))
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	STRRCHR	*/
	printf("\nTESTS FOR FT_STRRCHR\n");
	if (ft_strrchr("Hello", 'l') == strrchr("Hello", 'l'))
		printf("Success ! :)\n");
	else
	{
		printf("Failure\n");
		return (1);
	}

	/*	MEMSET	*/
	printf("\nTESTS FOR FT_MEMSET\n");
	ft_strcpy(dest1, "This is a test");
	ft_strcpy(dest2, "This is a test");
	ft_memset(dest1, '$', 60);
	memset(dest2, '$', 60);
	if (!ft_strcmp(dest1, dest2))
	{
		printf("Success ! :)\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Error ! Got |%s| instead of |%s|\n", dest1, dest2);
		return (1);
	}

	/*	MEMCPY	*/
	printf("\nTESTS FOR FT_MEMCPY\n");
	ft_memcpy(dest1, len_test[5], 10);
	memcpy(dest2, len_test[5], 10);
	if (!ft_strcmp(dest1, dest2))
	{
		printf("Success ! :)\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Error ! Got |%s| instead of |%s|\n", dest1, dest2);
		return (1);
	}

	/*	MEMCCPY	*/
	printf("\ntests for ft_memccpy\n");
	ft_memccpy(dest1, len_test[5], 'o', 10);
	memccpy(dest2, len_test[5], 'o', 10);
	if (!ft_strcmp(dest1, dest2))
	{
		printf("Success ! :)\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Error ! Got |%s| instead of |%s|\n", dest1, dest2);
		return (1);
	}

	/*	MEMMOVE	*/
	printf("\ntests for ft_memmove\n");
	ft_memmove(dest1, len_test[5], 10);
	memmove(dest2, len_test[5], 10);
	printf("%s vs %s\n", dest1, dest2);
	if (!ft_strcmp(dest1, dest2))
	{
		printf("Success ! :)\n");
		ft_bzero(dest1, 50);
		ft_bzero(dest2, 50);
	}
	else
	{
		printf("Error ! Got |%s| instead of |%s|\n", dest1, dest2);
		return (1);
	}
	
	/*	MEMCHR	*/
	printf("\ntests for ft_memchr\n");
	strptr = ft_memchr("Hello", 'e', 2);
	strptrbis = memchr("Hello", 'e', 2);
	printf("%s vs %s\n", strptr, strptrbis);
	if (!ft_strcmp(strptr, strptrbis))
		printf("Success ! :)\n");
	else
	{
		printf("Error ! Got |%s| instead of |%s|\n", strptr, strptrbis);
		return (1);
	}
	
	/*	MEMCMP	*/
	printf("\ntests for ft_memcmp\n");
	if (ft_memcmp("a", "c", 1) == memcmp("a", "c", 1))
		printf("Success ! :)\n"); 
	else
	{
		printf("Error ! Got |%i| instead of |%i|\n", ft_memcmp("a", "c", 1), memcmp("a", "c", 1));
		return (1);
	}


	return (0);
}
