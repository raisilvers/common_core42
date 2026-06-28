/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 18:14:30 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/23 10:30:14 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	trim_start;
	size_t	trim_last;
	size_t	trim_len;

	len = ft_strlen(s1);
	trim_start = 0;
	while (trim_start < len && ft_strchr(set, s1[trim_start]) != NULL)
		trim_start++;
	if (trim_start >= len)
		return (ft_strdup(""));
	trim_last = len - 1;
	while (trim_last > trim_start && ft_strchr(set, s1[trim_last]) != NULL)
		trim_last--;
	trim_len = trim_last - trim_start + 1;
	return (ft_substr(s1, trim_start, trim_len));
}
