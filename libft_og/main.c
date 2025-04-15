#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <bsd/string.h>
#include <strings.h>

void function_separator(char *title)
{
	printf("-----------%s----------\n",title);
}

// void test_ft_isalpha(void)
// {
// 	function_separator("ft_isalhpa");
// 	if (ft_isalpha('0') == 0 || ft_isalpha('-') == 0)
// 		printf("  ft_isalpha funciona correctamente: '0' y '-' no son alfabéticos.\n");
// 	else
// 		printf("  ERROR: ft_isalpha no funciona correctamente con '0' y '-'.\n");

// 	if (ft_isalpha('a') == 1024)
// 		printf("  ft_isalpha funciona correctamente: 'a' es alfabético.\n");
// 	else
// 		printf("  ERROR: ft_isalpha no funciona correctamente con 'a'.\n");
// }

// void test_ft_isdigit(void)
// {
// 	function_separator("ft_isdigit");
// 	if (ft_isdigit('a') == 0 || ft_isdigit('-') == 0)
// 		printf("  ft_isdigit funciona correctamente: 'a' y '-' no son dígitos.\n");
// 	else
// 		printf("  ERROR: ft_isdigit no funciona correctamente con 'a' y '-'.\n");

// 	if (ft_isdigit('0') == 2048)
// 		printf("  ft_isdigit funciona correctamente: '0' es un dígito.\n");
// 	else
// 		printf("  ERROR: ft_isdigit no funciona correctamente con '0'.\n");
// }

// void test_ft_isalnum(void)
// {
// 	function_separator("ft_isalnum");
// 	if (ft_isalnum('a') == 8 || ft_isalnum('3') == 8)
// 		printf("  ft_isalnum funciona correctamente: 'a' y '3' son alfanuméricos.\n");
// 	else
// 		printf("  ERROR: ft_isalnum no funciona correctamente con 'a' y '3'.\n");

// 	if (ft_isalnum('-') == 0 || ft_isalnum(127) == 0)
// 		printf("  ft_isalnum funciona correctamente: '-' y 127 no son alfanuméricos.\n");
// 	else
// 		printf("  ERROR: ft_isalnum no funciona correctamente con '-' y 127.\n");
// }

// void test_ft_isascii(void)
// {
// 	function_separator("ft_isascii");
// 	if (ft_isascii('a') == 1 || ft_isascii('-') == 1 || ft_isascii(127) == 1)
// 		printf("  ft_isascii funciona correctamente: 'a', '-' y 127 son caracteres ASCII.\n");
// 	else
// 		printf("  ERROR: ft_isascii no funciona correctamente con 'a', '-' o 127.\n");

// 	if (ft_isascii(150) == 0)
// 		printf("  ft_isascii funciona correctamente: 150 no es un carácter ASCII.\n");
// 	else
// 		printf("  ERROR: ft_isascii no funciona correctamente con 150.\n");
// }

// void test_ft_isprint(void)
// {
// 	function_separator("ft_isprint");
// 	if (ft_isprint('a') == 16384 || ft_isprint('A') == 16384 ||
// 		ft_isprint('4') == 16384 || ft_isprint(' ') == 16384)
// 		printf("  ft_isprint funciona correctamente: 'a', 'A', '4' y espacio son imprimibles.\n");
// 	else
// 		printf("  ERROR: ft_isprint no funciona correctamente con 'a', 'A', '4' o espacio.\n");

// 	if (ft_isprint(127) == 0 || ft_isprint(0) == 0)
// 		printf("  ft_isprint funciona correctamente: 127 y 0 no son imprimibles.\n");
// 	else
// 		printf("  ERROR: ft_isprint no funciona correctamente con 127 o 0.\n");
// }

// void test_ft_strlen(void)
// {
// 	function_separator("ft_strlen");
// 	if (ft_strlen("hola") == 4 || ft_strlen("hola buenas") == 10)
// 		printf("  ft_strlen funciona correctamente: longitud de 'hola' y 'hola buenas'.\n");
// 	else
// 		printf("  ERROR: ft_strlen no funciona correctamente con 'hola' o 'hola buenas'.\n");

// 	if (ft_strlen(" hola ") == 6 || ft_strlen("hola buenas ") == 11)
// 		printf("  ft_strlen funciona correctamente: longitud de ' hola ' y 'hola buenas '.\n");
// 	else
// 		printf("  ERROR: ft_strlen no funciona correctamente con ' hola ' o 'hola buenas '.\n");

// 	if (ft_strlen("hola\nbuenas") == 10 || ft_strlen("") == 0)
// 		printf("  ft_strlen funciona correctamente: 'hola\\nbuenas' y cadena vacía.\n");
// 	else
// 		printf("  ERROR: ft_strlen no funciona correctamente con 'hola\\nbuenas' o cadena vacía.\n");
// }

// void test_ft_memset(void)
// {
// 	function_separator("ft_memset");
// 	char buffer[10];
// 	char expected[10];
// 	memset(expected, 'A', 10);
// 	ft_memset(buffer, 'A', 10);

// 	if (ft_memcmp(buffer, expected, 10) == 0)
// 		printf("  ft_memset funciona correctamente: buffer rellenado correctamente.\n");
// 	else
// 		printf("  ERROR: ft_memset no rellenó correctamente el buffer.\n");
// 	ft_memset(buffer, 'x', 10);
// 	memset(expected, 'x', 10);
// 	if (ft_memcmp(buffer, expected, 10) == 0)
// 		printf("  ft_memset funciona correctamente: buffer rellenado correctamente con 'x'.\n");
// 	else
// 		printf("  ERROR: ft_memset no rellenó correctamente el buffer. con x\n");
// 	ft_memset(buffer, 'B', 5);
// 	memset(buffer + 5, 0, 5);
// 	memset(expected, 'B', 5);
// 	memset(expected + 5, 0, 5);
// 	if(ft_memcmp(buffer, expected, 10) == 0)
// 		printf("  ft_memset funciona correctamente con longitud parcial (5 bytes).\n");
// 	else
// 		printf("  ERROR: ft_memset no funciona correctamente con longitud parcial.\n");
// 	memset(buffer, 'C', 10);
// 	ft_memset(buffer, 'Z', 0);
// 	if (buffer[0] == 'C' && buffer[9] == 'C')
// 		printf("  ft_memset respeta longitud 0 correctamente (sin modificar).\n");
// 	else
// 		printf("  ERROR: ft_memset modificó el buffer con longitud 0.\n");
// 	char *ret = ft_memset(buffer, 'D', 10);
// 	if (ret == buffer)
// 		printf("  ft_memset devuelve el puntero correcto.\n");
// 	else
// 		printf("  ERROR: ft_memset no devuelve el puntero esperado.\n");
// }
// void	test_bzero(void)
// {
// 	function_separator("ft_bzero");
// 	char	buffer[10];
// 	char	*expected;

// 	bzero(buffer,sizeof(buffer));
// 	expected = buffer;
// 	if (ft_memcmp(expected,buffer,sizeof(buffer)) == 0)
// 		printf("  ft_bzero funciona correctamente lo rellena todo de nulls\n" );
// 	else
// 		printf("  ERROR: ft_bzero no funciona correctamente\n ");
// 	ft_bzero(buffer,sizeof(buffer));
// 	int i  = 0;
// 	printf(" ");
// 	while (i < sizeof(buffer))
// 	{
// 		printf("0");
// 		i++;
// 	}
// 	printf("\n");
// }
// void	test_memcpy(void)
// {
// 	function_separator("ft_memcpy");
// 	char s1[] = "hola";
// 	char s2[20] = {0};
// 	if (ft_memcpy(s2, s1, 4))
// 		printf("  copia corta: %s\n", s2);
// 	char s3[] = "abc";
// 	char s4[] = "zzz";
// 	if (ft_memcpy(s4, s3, 3))
// 		printf("  sobrescritura: %s\n",s4);
// 	void *res1 = ft_memcpy(NULL, NULL, 5);
// 	if (!res1)
// 		printf("  Ambos son NULL\n");
// 	else
// 		printf("  deberia ser NULL\n");
// }

// void	test_memmove(void)
// {
// 	function_separator("ft_memmove");
// 	char src [] = "Hola Mundo";
// 	char dest[] = "HOLAA";
// 	printf("con n = 0\n");
// 	void *res = ft_memmove(src + 2, src, 0);
// 	printf("  %s\n",res);
// 	printf("dest esta en src\n");
// 	res = ft_memmove(src + 2, src , 5);
// 	printf("  %s\n",res);
// 	printf("con dest fuera de src\n");
// 	res = ft_memmove(dest, src, 10);
// 	printf("  %s\n",res);
// }
// void	test_strlcpy(void)
// {
// 	function_separator("ft_strlcpy");
// 	char	dest[] = {0};
// 	char	src[] = "hola mundo";
// 	printf("con size > 0: \n");
// 	if(ft_strlcpy(dest, src, 0) == ft_strlen(src))
// 		printf(" funciona correcamente : %s\n",dest);
// 	if(ft_strlcpy(dest,src,5) == ft_strlen(src))
// 		printf(" funciona correcamente : %s\n",dest);
// 	else
// 		printf("deberia devolver el tamaño de src");
// }
// void	test_strlcat(void)
// {
// 	function_separator("ft_strlcat");
// 	char	dest[50] = "Hola";
// 	char	src[] = "Hola Mundo";
// 	printf("con size <= len de dest:\n");
// 	if (ft_strlcat(dest, src, 2) == ft_strlen(src) + 2)
// 		printf("Funciona correctamente: %s\n",dest);
// 	else
// 		printf("No paso la condicion");
// 	char	dest2[50] = "Hola";
// 	char 	src2[] = "Hola Mundo";
// 	size_t 	len = ft_strlen(src2) + ft_strlen(dest2);
// 	if (ft_strlcat(dest2,src2,50) == len)
// 		printf("FUnciona correctamente: %s\n",dest2);
// 	else
// 		printf("no paso la condicion");
// }
// void	test_toupper(void)
// {
// 	function_separator("ft_toupper");
// 	printf("con letra minuscula: \n");
// 	if (ft_toupper('a') == 'a' - 32)
// 		printf(" Funciona correctamente: %c\n",ft_toupper('a'));
// 	else
// 		printf("Deberia convertirse en mayuscula");
// 	printf("con letra en ayuscula: \n");
// 	if(ft_toupper('A') == 'A')
// 		printf(" Funciona correctamente: %c\n",ft_toupper('A'));
// 	else
// 		printf("Deberia seguir en mayusculas");
// 	printf("No es una letra: \n");
// 	if (ft_toupper('-') == '-')
// 		printf(" Funciona correctamente: %c\n", ft_toupper('-'));
// 	else
// 		printf("deberia devolver exactamente lo mismo\n");
// }
// void	test_tolower(void)
// {
// 	function_separator("ft_tolower");
// 	printf("con letra mayuscula\n");
// 	if (ft_tolower('A') == 'a')
// 		printf("  Funciono correctamente: %c\n",ft_tolower('A'));
// 	else
// 		printf("Devio convertirse en minuscula \n");
// 	printf("con letra minuscula\n");
// 	if(ft_tolower('a') == 'a')
// 		printf("  Funciona correctamente: %c\n",ft_tolower('a'));
// 	else
// 		printf("  debia seguir en minusculas\n");
// 	printf("No es una letra\n");
// 	if(ft_tolower('3') == '3')
// 		printf(" Funciona correctamente: %c\n",ft_tolower('3'));
// 	else
// 		printf("Deberia seguir igual");
// }
// void	test_strchr(void)
// {
// 	function_separator("ft_strchr");
// 	char *original = strchr("Holna mundo",'n');
// 	char *expected = ft_strchr("Holna mundo",'n');
// 	if(ft_memcmp(original, expected, ft_strlen(original)) == 0)
// 		printf("Funciono correctamente: %s\n",expected);
// 	else
// 		printf("Fallo");
// }
// void	test_strrchr()
// {
// 	function_separator("ft_strrchr");
// 	char *original = strrchr("Holna mundo",'n');
// 	char *expected = ft_strrchr("Holna mundo",'n');
// 	if(ft_memcmp(original,expected,ft_strlen(original)) == 0)
// 		printf("Funciono correctamente: %s\n",expected);
// 	else
// 		printf("Fallo%s %s ",original,expected);
// }
// void	test_strncmp(void)
// {
// 	function_separator("strncmp");
// 	printf("Sin nulos:\n");
// 	printf("%i\n",ft_strncmp("hola","adios",3));
// 	printf("con un nulo:\n");
// 	printf("%i\n",ft_strncmp("hola","\0",3));
// 	printf("Las 2 iguales: \n");
// 	printf("%i\n",ft_strncmp("hola","hola",3));
// }
// void	test_memchr(void)
// {
// 	function_separator("ft_memchr");
// 	int nums[] = {1, 2, 3, 4, 3};
// 	printf("con numeros: \n");
// 	unsigned char	*res = ft_memchr(nums,3,sizeof(nums));
// 	printf("%d\n",*res);
// }
// void	test_strnstr(void)
// {
// 	function_separator("ft_strnstr");
// 	char big[] = "hola mundo que tal ?";
// 	char little[] = {0};
// 	printf("con little null:\n");
// 	printf("%s\n",ft_strnstr(big,little,ft_strlen(big)));
// 	printf("sin little igual a null:\n");
// 	char little2[] = "que";
// 	printf("%s\n",ft_strnstr(big,little2,ft_strlen(big)));
// 	printf("si no encuetra nada: \n");
// 	char little3[] = "pepe";
// 	printf("%s\n",ft_strnstr(big,little3,ft_strlen(big)));
// }
// void	test_atoi(void)
// {
// 	printf("con el numero maximo y numero minimo permitido: \n");
// 	printf("%d\n%d\n",ft_atoi("-2147483648"),ft_atoi("2147483647"));
// 	printf("con mas de un signo:\n");
// 	printf("%d\n",ft_atoi("--456"));
// 	printf("con espacios al principio:\n");
// 	printf("%d\n",ft_atoi("      \n54435463"));
// 	printf("con otra caracter enmedio de los numeros:\n");
// 	printf("%d\n",ft_atoi("    452452-55"));
// }
// void test_calloc(void)
// {
// 	function_separator("calloc");
// 	void *calloc1 = ft_calloc(__SIZE_MAX__,2);
// 	if (calloc1 == NULL)
// 		printf("funciona correctamente");
// 	else
// 		printf("Fallo");
// 	int *arr = (int *)ft_calloc(5,sizeof(int));
// 	size_t i = 0;
// 	while (i < 5)
// 	{
// 		printf("arr[%zu] = %d\n",i,arr[i]);
// 		i++;
// 	}
// 	free(calloc1);
// 	free(arr);
	
// }
// void	test_strdup(void)
// {
// 	function_separator("ft_strdup");
// 	char *s1 = "Hola Mundo";
// 	char *dup = ft_strdup(s1);
// 	if(ft_memcmp(s1,dup,sizeof(s1)) == 0)
// 		printf("Funciona correctamente: %s\n",dup);
// 	else
// 		printf("Fallo!");
// }
// void	test_substr(void)
// {
// 	function_separator("ft_substr");
// 	char *subtsr = ft_substr("Hola Mundo",2,6);
// 	printf("%s",subtsr);
// 	free(subtsr);
// }
// void	test_strjoin(void)
// {
// 	function_separator("ft_strjoin");
// 	char s1[] = "Hola";
// 	char s2[] = "Mundo!";
// 	printf("caso normal: \n");
// 	char *res = ft_strjoin(s1, s2);
// 	printf("Resultado: %s\n",res);
// 	free(res);
// }
// void tets_strtrim(void)
// {
// 	function_separator("ft_strtrim");
// 	printf("Con espacios : \n");
// 	char s1[] = "  Hola Mundo  ";
// 	char *result = ft_strtrim(s1," ");
// 	printf("Resultado:%s\n", result);
// 	printf("Con otro signo : \n");
// 	char s2[] = "+++--++-+++holaaa mu+ndo+++-----";
// 	char *res2 = ft_strtrim(s2,"+-");
// 	printf("Resultado:%s\n",res2);
// 	free(res2);;
// 	free(result);
// }
// int test_split(void)
// {
//  	char const	*str = "uno dos tres";
//     char	limiter = ' ';
//     char	**result = ft_split(str, limiter);
//     size_t                i = 0;
//     while (result[i] != NULL)
//     {
//         printf("%s\n" , result[i++]);
//             free(result[i - 1]);
//     }
//     free(result);
// 	return (0);
// }
// void test_itoa(void)
// {

// 	char *a = ft_itoa(0);
// 	char *b = ft_itoa(-2147483648);
// 	char *c = ft_itoa(2147483647);

// 	printf("%s\n", a);
// 	printf("%s\n", b);
// 	printf("%s\n", c);

// 	free(a);
// 	free(b);
// 	free(c);
// }
// char	my_func(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return toupper(c);
// 	else
// 		return tolower(c);
// }
// void	test_strmapi(void)
// {
// 	function_separator("ft_strmapi");
// 	char	*original = "HelloWorld";
// 	char	*result;

// 	result = ft_strmapi(original,my_func);
// 	if (result)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Result: %s\n",result);
// 		free(result);
// 	}
// 	else
// 		printf("Fallo!");
// }
// void	my_iter(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		*c = toupper(*c);
// 	else
// 		*c = tolower(*c);
// }
// void	test_iteri(void)
// {
// 	function_separator("ft_iteri");
// 	char	original[] = "HelloWorld";

// 	printf("Original antes de iteri:%s\n", original);
// 	ft_striteri(original,my_iter);
// 	printf("Original despues de iteri: %s\n", original);
// }
// void	test_putchar(void)
// {
// 	function_separator("ft_putchar_fd");
// 	char name[] = "prueba.txt";
// 	printf("Por terminal:\n");
// 	ft_putchar_fd('a',1);
// 	ft_putchar_fd('\n',1);
// 	printf("por otro archivo:\n%s",name);
// 	int	fd;
// 	fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0700);
// 	ft_putchar_fd('a',fd);
// 	close(fd);
// }
// void	test_putstr(void)
// {
// 	function_separator("ft_putstr_fd");
// 	char name[] = "prueba.txt";
// 	char str[] = "Hola Mundo";
// 	printf("Por terminal:\n");
// 	ft_putstr_fd(str,1);
// 	printf("\n");
// 	printf("por otro archivo:\n%s",name);
// 	int	fd;
// 	fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0700);
// 	ft_putstr_fd(str,fd);
// 	close(fd);
// }
// void	test_putendl(void)
// {
// 	function_separator("ft_putendl_fd");
// 	char name[] = "prueba.txt";
// 	char str[] = "Hola Mundo";
// 	printf("Por terminal:\n");
// 	ft_putendl_fd(str,1);
// 	printf("por otro archivo:\n%s",name);
// 	int	fd;
// 	fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0700);
// 	ft_putendl_fd(str,fd);
// 	close(fd);
// }
void	test_putnbr(void)
{
	function_separator("ft_putnbr_fd");
	char name[] = "prueba.txt";
	printf("Por terminal:\n");
	ft_putnbr_fd(-742,1);
	printf("\n");
	printf("por otro archivo:\n%s",name);
	int	fd;
	fd = open(name, O_WRONLY | O_CREAT | O_TRUNC, 0700);
	ft_putnbr_fd(-742,fd);
	close(fd);
}
int main(void)
{
	// test_ft_isalpha();
	// test_ft_isdigit();
	// test_ft_isalnum();
	// test_ft_isascii();
	// test_ft_isprint();
	// test_ft_strlen();
	// test_ft_memset();
	// test_bzero();
	// test_memcpy();
	// test_memmove();
	// test_strlcpy();
	// test_strlcat();
	// test_toupper();
	// test_tolower();
	// test_strchr();
	// test_strrchr();
	// test_strncmp();
	// test_memchr();
	// test_strnstr();
	// test_atoi();
	// test_calloc();
	// test_strdup();
	// test_substr();
	// test_strjoin();
	// tets_strtrim();
	// test_split();
	// test_itoa();
	// test_strmapi();
	// test_iteri();
	//  test_putchar();
	// test_putstr();
	//test_putendl();
	test_putnbr();
	return (0);
}
