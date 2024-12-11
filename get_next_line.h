/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:02:05 by reribeir          #+#    #+#             */
/*   Updated: 2024/12/03 19:06:57 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4
#endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

char	*read_file(int fd, char *res);

char	*ft_line(char *buffer);

char	*ft_next(char *buffer);

char	*ft_free(char *buffer, char *buf);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strchr(const char *string, int searchedChar);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

int		ft_strlen(char *str);

#endif
