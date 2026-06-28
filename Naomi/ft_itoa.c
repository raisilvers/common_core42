/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:19:32 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/23 16:49:28 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
		return (len);
	}
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;

	num = n;
	len = count_len(num);
	str = malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		--len;
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
