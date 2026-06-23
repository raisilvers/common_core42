#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;

    return (i);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t dest_len;

    i = 0;
    j = 0;

    while (dest[i])
        i++;

    dest_len = i;

    if (size <= dest_len)
        return (size + ft_strlen(src));

    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return (dest_len + ft_strlen(src));
}

int main(void)
{
    char dest[20] = "Hello ";
    char src[] = "World";

    size_t ret;

    ret = ft_strlcat(dest, src, sizeof(dest));

    printf("dest = %s\n", dest);
    printf("ret = %zu\n", ret);

    return (0);
}
