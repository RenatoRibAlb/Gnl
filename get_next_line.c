/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:00:12 by reribeir          #+#    #+#             */
/*   Updated: 2024/11/07 14:43:41 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t	bytes;
	char	*str;
	char	*ns;
	int	i;

	i = 0;
	bytes = 1;
	while (bytes > 0 || ft_strchr(str, '\n'))
	{
		bytes = read(fd, str, BUFFER_SIZE);
	}

}

int	main(void)
{
#include <fcntl.h>
	int	fd;
	char	*line;

	fd = open ("file.txt", O_RDONLY);
	line = get_next_line(fd);

}
