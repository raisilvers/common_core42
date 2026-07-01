/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <raimunda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:53:17 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/28 17:14:37 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liobft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_isdigit('9'));
	return (0);
}
*/
