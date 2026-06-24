/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:53:53 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/24 19:53:54 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char str[] = "abcdef";

	ft_memmove(str + 2, str, 4);

	printf("%s\n", str);
}

A ft_memmove copia n bytes da memória apontada por src para a memória apontada por dest. Diferente da ft_memcpy, ela funciona corretamente mesmo quando as áreas de origem e destino se sobrepõem. Para isso, ela verifica a posição dos endereços: se dest estiver antes de src, copia do início para o fim; se dest estiver depois de src, copia do fim para o início, evitando que dados sejam sobrescritos antes de serem
*/
