/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rai <rai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 21:02:44 by rai               #+#    #+#             */
/*   Updated: 2026/07/01 09:51:16 by rai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static void	free_all(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_array(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	words_index;
	size_t	start;

	i = 0;
	words_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[words_index] = ft_substr(s, start, i - start);
			if (!arr[words_index])
			{
				free_all(arr, words_index);
				return (0);
			}
			words_index++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr_ptr;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	arr_ptr = malloc((count + 1) * sizeof(*arr_ptr));
	if (!arr_ptr)
		return (NULL);
	arr_ptr[count] = NULL;
	if (!fill_array(s, c, arr_ptr))
		return (NULL);
	return (arr_ptr);
}
