/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 18:41:27 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/19 00:39:06 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;
	unsigned char	c_char;

	ptr = (unsigned char *) s;
	c_char = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		ptr[i] = c_char;
		i++;
	}
	return (s);
}
