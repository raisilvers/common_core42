/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:14:50 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/18 23:15:39 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	if (dst > src)
	{
		while (n > 0)
		{
			n--;
			ptr_dst[n] = ptr_src[n];
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, n);
	return (dst);
}
