/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:00:12 by reribeir          #+#    #+#             */
/*   Updated: 2024/11/25 11:38:41 by reribeir         ###   ########.fr       */
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
	int	j;

	i = 0;
	j = 0;
	bytes = 1;
	if (rest != '\0')
	{
		while (i <= ft_strlen(rest))
		{
			ns[i] = rest[j];
			i++;
			j++;
		}
		i = 0;
		rest = restreset(rest);
	}
	while (!ft_strchr(str, '\n'))
	{
		bytes = read(fd, str, BUFFER_SIZE);
		if (ft_strchr(str, '\n'))
			break ;
		while (str[i] != '\0')
		{
			ns = ft_strjoin(ns, str);
			i++;
		}
		if (bytes == 0)
			break ;
	}
	rest = ft_strchr(str, '\n');
	return (ns);
}

char	restreset(char rest)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(rest);
	while (i <= len)
	{
		str[i] = '\0';
		i++;
	}
	free (rest);
	return(str);

}

int	main(void)
{
#include <fcntl.h>
#include <stdio.h>
	int	fd;
	char	*line;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));

}
