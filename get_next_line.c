/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:00:12 by reribeir          #+#    #+#             */
/*   Updated: 2024/12/03 19:04:07 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t	bytes;
	static char	*rest;
	char	*str;
	char	*ns;
	int	i;

	i = 0;
	bytes = 1;
	ns = NULL;
	if (rest)
	{
		ns = ft_strjoin(ns, rest);
		rest = restreset(rest);
	}
	str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	while (!ft_strchr(str, '\n') && bytes != 0)
	{
		bytes = read(fd, str, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		str[bytes] = '\0';
		ns = ft_strjoin(ns, str);
		str = restreset(str);
	}
	rest = ft_strchr(str, '\n');
	ns = ft_strjoin(ns, ft_substr(str, 0, i));
	return (ns);
}

char	*ft_strdup(char *s)
{
	char	*str;
	int		i;

	i = ft_strlen(s);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*restreset(char *rest)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(rest);
	while (i < len)
	{
		rest[i] = '\0';
		i++;
	}
	return(rest);
}

int	main(void)
{
#include <fcntl.h>
#include <stdio.h>
	int	fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));

}
