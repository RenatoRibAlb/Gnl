/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:42:12 by reribeir          #+#    #+#             */
/*   Updated: 2024/11/07 14:40:54 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*ns;

	i = 0;
	len = 0;
	if ((char *)s1 && (char *)s2)
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	ns = malloc(len * sizeof(char));
	if (!ns)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		ns[len] = s1[len];
		len++;
	}
	while (s2[i] != '\0')
	{
		ns[len] = s2[i];
		i++;
		len++;
	}
	ns[len] = '\0';
	return (ns);
}

static char	*ft_strchr(const char *s, int c)
{
	char	*str;

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

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static char	*verify(char *dest)
{
	dest = malloc(1);
	*dest = '\0';
	return (dest);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
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
		return (ft_strdup(""));
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
