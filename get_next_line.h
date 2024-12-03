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

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strchr(const char *s, int c);

int		ft_strlen(char *str);

char	*verify(char *dest);

char	*ft_substr(char *s, int start, size_t len);

char	*restreset(char *rest);

char	*ft_strdup(char *s);

#endif
