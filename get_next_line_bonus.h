/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:17:36 by gpetit            #+#    #+#             */
/*   Updated: 2020/12/01 13:08:09 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>

int		get_next_line(int fd, char **line);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
int		ft_strchr_nbr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
