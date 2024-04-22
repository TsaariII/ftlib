#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
int main(void)
{
    // BZERO
    /*char buffer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char ft_buffer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Buffer contents:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", buffer[i]);
    printf("\n");
    bzero(buffer, sizeof(buffer));
    printf("Buffer contents after:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", buffer[i]);
    printf("\n");
    printf("Buffer contents:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", ft_buffer[i]);
    printf("\n");
    ft_bzero(ft_buffer, sizeof(ft_buffer));
    printf("Buffer contents after:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", ft_buffer[i]);
    printf("\n");*/
    // ISALNUM
    /*char numalpha = 'A';
    char ft_numalpha = 'A';
    if (isalnum(num))
        printf("%c is number/alpha.\n", numalpha);
    else
        printf("%c is not number/alpha.\n", numalpha);
    if (ft_isalnum(num))
        printf("%c is number/alpha.\n", ft_numalpha);
    else
        printf("%c is not number/alpha.\n", ft_numalpha);*/
    // ISALPHA
    /*char alpha = 'x';
    char ft_alpha = 'x';
    if (isalpha(alpha))
        printf("%c is alpha.\n", alpha);
    else
        printf("%c is not alpha.\n", alpha);
    if (ft_isalpha(ft_alpha))
        printf("%c is alpha.\n", ft_alpha);
    else
        printf("%c is not alpha.\n", ft_alpha);*/
    // ISASCII
    /*char ascii = 'p';
    char ft_ascii = 'p';
    if (isascii(ascii))
        printf("%c is ascii.\n", ascii);
    else
        printf("%c is not ascii.\n", ascii);
    if (ft_isalpha(ft_ascii))
        printf("%c is ascii.\n", ft_ascii);
    else
        printf("%c is not ascii.", ft_ascii);*/
    // ISDIGIT
   /*char digit = '6';
    char ft_digit = '6';
    if (isdigit(digit))
        printf("%c is digit.\n", digit);
    else
        printf("%c is not digit.\n", digit);
    if (ft_isdigit(ft_digit))
        printf("%c is digit.\n", ft_digit);
    else
        printf("%c is not digit.\n", ft_digit);*/
    // ISPRINT
    /*char printable = '\t';
    char ft_printable = '\t';
    if (isprint(printable))
        printf("%c is printable.\n", printable);
    else
        printf("%c is not printable.\n", printable);
    if (ft_isprint(ft_printable))
        printf("%c is printable.\n", ft_printable);
    else
        printf("%c is not printable.\n", ft_printable);*/
    // STRLEN
    /*char src[] = "Hello, Hive!";
    char dest[20];
    char ft_src[] = "Hello, Hive!";
    char ft_dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("Copied string: %s\n", dest);
    memcpy(ft_dest, ft_src, ft_strlen(ft_src) + 1);
    printf("Copied string: %s\n", ft_dest);*/
    // MEMMOVE
    /*char src[] = "Hello, World!";
	char dest[20];
	char src2[] = "Hello, World!";
	char dest2[20];
    // Test case 1: Non-overlapping memory regions
	printf("Test case 1: Non-overlapping memory regions\n");
	memmove(dest, src, strlen(src) + 1);
	printf("Copied string: %s\n", dest);
	ft_memmove(dest2, src2, strlen(src2) + 1);
	printf("Copied string: %s\n", dest2);

	// Test case 2: Overlapping memory regions (source before destination)
	printf("Test case 2: Overlapping memory regions (source before destination)\n");
	memmove(dest + 2, dest, strlen(dest) + 1);
	printf("Copied string: %s\n", dest);
	ft_memmove(dest2 + 2, dest2, strlen(dest2) + 1);
	printf("Copied string: %s\n", dest2);

	// Test case 3: Overlapping memory regions (destination before source)
	printf("Test case 3: Overlapping memory regions (destination before source)\n");
	memmove(dest, dest + 2, strlen(dest) + 1);
	printf("Copied string: %s\n", dest);
	ft_memmove(dest2, dest2 + 2, strlen(dest2) + 1);
	printf("Copied string: %s\n", dest2);*/
    // STRCHR
    /*char str[] = "Hello Hive!";
    char ft_str[] = "Hello Hive!";
    char ch = 'l';
    char ft_ch = 'l';
    char *schr;
    char *ft_schr;
    schr = strchr(str, ch);
    printf("String after %c is = %s\n", ch, schr);
    ft_schr = ft_strchr(ft_str, ft_ch);
    printf("String after %c is = %s\n", ft_ch, ft_schr);*/
    // STRRCHR
    /*char str[] = "Hello Hive!";
    char ft_str[] = "Hello Hive!";
    char ch = 'l';
    char ft_ch = 'l';
    char *schr;
    char *ft_schr;
    schr = strrchr(str, ch);
    printf("String after %c is = %s\n", ch, schr);
    ft_schr = ft_strrchr(ft_str, ft_ch);
    printf("String after %c is = %s\n", ft_ch, ft_schr);*/
    // STRNCMP
    /*char str1[] = "\n\n\0";
	char str2[] = "\n\n\0";
	int c;
	int d;
	c = ft_strncmp(str1, str2, 5);
	printf("Mine: %d\n", c);
	d = strncmp(str1, str2, 5);
	printf("Original: %d\n", d);*/
    // MEMCHR
    /*char str[] = "Hello Hive!";
    char ft_str[] = "Hello Hive!";
    char ch = 'l';
    size_t num = strlen(str);
    char ft_ch = 'l';
    char *schr;
    char *ft_schr;
    schr = memchr(str, ch, num);
    printf("String after %c is = %s\n", ch, schr);
    ft_schr = ft_memchr(ft_str, ft_ch, num);
    printf("String after %c is = %s\n", ft_ch, ft_schr);*/
    // MEMCMP
    /*char str1[] = "\n\n\0";
	char str2[] = "\n\n\0";
	int c;
	int d;
	c = ft_memcmp(str1, str2, 5);
	printf("Mine: %d\n", c);
	d = memcmp(str1, str2, 5);
	printf("Original: %d\n", d);*/
    // STRNSTR
    /*char *hay = "Hello World!";
    char *ft_hay = "Hello World!";
    char *nee = "llo";
    char *ft_nee = "llo";
    size_t len = 6;
    size_t ft_len = 6;
    char *result = strnstr(hay, nee, len);
    char *ft_result = ft_strnstr(ft_hay, ft_nee, ft_len);
    printf("%s\n", result);
    printf("%s\n", ft_result);*/
    // ATOI
    /*char str[] = "2345";
    char ft_str[] = "2345";
    int a = atoi(str);
    int ft_a = ft_atoi(ft_str);
    printf("%d\n", a);
    printf("%d\n", ft_a);*/
    // CALLOC
    /*int i, n;
	int *a;
	int *a2;
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	a = (int*)calloc(n, sizeof(int));
    printf("Original: \n");
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
	}
    printf("\nFT: \n");
	a2 = (int*)ft_calloc(n, sizeof(int));
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a2[i]);
	}
	free( a );
	free( a2 );*/
    // STRDUP
    /*char *str = "Double this!";
    char *dup = strdup(str);
    if (dup != '\0')
        printf("Duplicated message is: %s\n", dup);
    free (dup);
    char *ft_str = "Double this!";
    char *ft_dup = ft_strdup(ft_str);
    if (ft_dup != '\0')
        printf("Duplicated message is: %s\n", ft_dup);
    free (ft_dup);*/
    // SUBSTR
    /*char const src[19] = "0123456789";
	char *result1, *result3, *result5, *result7, *result8;
	char *result2, *result4, *result6;
	result1 = ft_substr(src, 3, 3);
	printf("The substring is: %s\n", result1);
	result2 = ft_substr(src, 3, 0);
	printf("The substring is: %s\n", result2);
	result3 = ft_substr(src, 3, 1);
	printf("The substring is: %s\n", result3);
	result4 = ft_substr(src, 3, 20);
	printf("The substring is: %s\n", result4);
	result5 = ft_substr(src, 0, 3);
	printf("The substring is: %s\n", result5);
	result6 = ft_substr(src, 20, 3);
	printf("The substring is: %s\n", result6);
	result7 = ft_substr(NULL, 3, 3);
	printf("The substring is: %s\n", result7);
	result8 = ft_substr(NULL, 0, 0);
	printf("The substring is: %s\n", result8);
	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
	free(result6);
	free(result7);
	free(result8);
	return 0;*/
    // STRJOIN
    /*char dst[20];
	char dst2[20];
	const char *src = "Hello, World!";
	size_t result;
	size_t result2;
	printf("Test case 1: Normal case\n");
	result = ft_strlcpy(dst, src, sizeof(dst));
	printf("Copied string: %s\n", dst);
	printf("Length of copied string: %zu\n\n", result);
	result2 = strlcpy(dst2, src, sizeof(dst2));
	printf("Copied string: %s\n", dst2);
	printf("ORIG Length of copied string: %zu\n\n", result2);*/
    // STRTIM
    /*char	str[30] = " - + -   Hello Hive + ";
	char	str1[] = "ALABAMA";
	char	trim[7] = " -+";
	char	trim1[] = "AA";
	char	*result;

	result = ft_strtrim(str, trim);
	printf("%s\n", result);
	result = ft_strtrim(str1, trim1);
	printf("%s\n", result);
	free(result);*/
    // STRSPLIT
}