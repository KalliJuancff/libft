#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t get_min_value(size_t value1, size_t value2)
{
    if (value1 < value2)
        return (value1);
    return (value2);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *result;
    size_t num_bytes;
    size_t i;
    
    num_bytes = get_min_value(ft_strlen(s + start), len);
    result = malloc(num_bytes + 1);
    if (!result)
        return (NULL);
    i = 0;
    while (i < num_bytes)
    {
        result[i] = *(s + start + i);
        i++;
    }
    result[i] = '\0';

    return (result);
}

void test_ft_substr(char const *s, unsigned int start, size_t len)
{
    printf("PROBANDO ft_substr('%s', %d, %lu):\n", s, start, len);
    char *p = ft_substr(s, start, len);
    printf("    Resultado = '%s'\n", p);
    free (p);
    printf("\n");
}

int main()
{
    test_ft_substr("GOTT", 1, 2);
    test_ft_substr("abcde", 2, 4);
    test_ft_substr("ABCDE", 1, 3);

    return (0);
}
