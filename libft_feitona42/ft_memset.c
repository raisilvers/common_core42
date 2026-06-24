/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:54:06 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/24 19:54:12 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = b;
	size_t	i;

	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char str[] = "Hello World";
	printf("Antes : %s\n", str);
	ft_memset(str, 'A', 5);
	printf("Depois : %s\n", str);

	return (0);
}
*/
