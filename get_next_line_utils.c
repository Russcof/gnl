/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 16:55:19 by mtellal           #+#    #+#             */
/*   Updated: 2021/03/22 16:16:28 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	l = ft_strlen(src);
	while (src && i + 1 < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (n != 0)
		dst[i] = '\0';
	return (l);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*tab;
	char	*p;
	int		i;

	i = 0;
	if (!(tab = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	p = tab;
	while (s1 && *s1)
	{
		*tab++ = *s1++;
		i++;
	}
	free(s1 - i);
	i = 0;
	while (s2 && *s2)
	{
		*tab++ = *s2++;
		i++;
	}
	*tab = '\0';
	return (p);
}
