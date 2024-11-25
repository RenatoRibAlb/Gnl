/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:42:12 by reribeir          #+#    #+#             */
/*   Updated: 2024/11/25 17:57:19 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (s1 && s2)
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
	s1 = malloc(len * sizeof(char));
	if (!s1)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
	{
		s1[len] = s2[i];
		i++;
		len++;
	}
	free(s2);
	s1[len] = '\0';
	return (s1);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	if(!s)
		return (NULL);
	str = (char *)s;
	if (c == 0)
		return (str + ft_strlen(str));
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (str);
		else
			str = str + 1;
	}
	return (NULL);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*verify(char *dest)
{
	dest = malloc(1);
	*dest = '\0';
	return (dest);
}

char	*ft_substr(char *s, int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	dest = NULL;
	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (len == 0)
		return (malloc(0));
	if (start > ft_strlen(s))
		return (verify(dest));
	while (s[start++] != '\0' && i < len)
		i++;
	dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[j] && i < len)
		dest[i++] = s[j++];
	dest[i] = '\0';
	return (dest);
}
