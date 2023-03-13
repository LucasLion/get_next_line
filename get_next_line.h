/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:57:25 by llion             #+#    #+#             */
/*   Updated: 2022/12/12 11:21:42 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*content;
	int				fd;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
void	read_and_fill_tank(t_list **tank, int fd);
char	*extract_and_fill_line(t_list *tank);
void	malloc_line(t_list *tank, char **line);
void	clean_tank(t_list **tank);

int		find_new_line(t_list *node);
void	ft_lst_add_back(t_list **lst, int lu, char *buff);
t_list	*ft_lstlast(t_list *tank);
void	free_tank(t_list *tank, int index);
int		len(char *str);

#endif
