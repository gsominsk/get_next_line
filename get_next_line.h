/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsominsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 16:23:18 by gsominsk          #+#    #+#             */
/*   Updated: 2017/01/03 16:23:36 by gsominsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

# include <stdio.h>

# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define KNRM  "\x1B[0m"
# define KRED  "\x1B[91m"
# define KGRN  "\x1B[92m"
# define KYEL  "\x1B[93m"
# define KBLU  "\x1B[94m"
# define KMAG  "\x1B[95m"
# define KCYN  "\x1B[96m"
# define KWHT  "\x1B[97m"

typedef struct		s_get_nl
{
	size_t			fd;
	char			*str_old;
	struct s_get_nl	*next;
}					t_get_nl;

int					get_next_line(const int fd, char **line);

#endif
