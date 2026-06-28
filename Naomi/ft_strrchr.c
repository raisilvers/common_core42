/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:24:38 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/18 23:15:31 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find_c;
	char	*str;

	find_c = (char) c;
	str = (char *) s;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == find_c)
			return (str + i);
		i--;
	}
	return (NULL);
}
