/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:00:01 by yessemna          #+#    #+#             */
/*   Updated: 2024/09/29 18:01:52 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPEN_H
# define FT_OPEN_H

# include <fcntl.h>
# include <limits.h>



typedef struct s_fd_col
{
	int	fds[OPEN_MAX];
	int	count;
}	t_fd_col;

void	init_fd_collector(t_fd_col *collector);
int		ft_open(t_fd_col *collector,
			const char *filename, int flags, mode_t mode);
void	close_all_fds(t_fd_col *collector);

#endif