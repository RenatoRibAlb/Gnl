/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:02:05 by reribeir          #+#    #+#             */
/*   Updated: 2024/11/05 14:38:51 by reribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE
#endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

static char	*ft_strjoin(char const *s1, char const *s2);

static char	*ft_strchr(const char *s, int c);

static int	ft_strlen(char *str);

static char	*verify(char *dest);

static char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
