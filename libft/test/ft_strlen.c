/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <raimunda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:55:10 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/28 17:17:41 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main(void)
{
	char dest[20] = "Hello ";
	char src[] = "World";

	size_t ret;

	ret = ft_strlcat(dest, src, sizeof(dest));

	printf("dest = %s\n", dest);
	printf("ret = %zu\n", ret);

	return (0);
}*/
