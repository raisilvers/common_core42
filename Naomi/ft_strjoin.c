/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:24:59 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/23 16:55:03 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc((s1_len + s2_len + 1) * sizeof(*ptr));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + s2_len + 1);
	ft_strlcat(ptr, s2, s1_len + s2_len + 1);
	return (ptr);
}
