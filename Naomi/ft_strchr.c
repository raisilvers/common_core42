/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:11:05 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/16 20:37:18 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find_c;
	char	*str;

	find_c = (char)c;
	str = (char *)s;
	while (*str && *str != find_c)
		str++;
	if (*str == find_c)
		return (str);
	return (NULL);
}
