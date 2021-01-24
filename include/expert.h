/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:57:49 by aromny-w          #+#    #+#             */
/*   Updated: 2021/01/08 18:57:51 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXPERT_H
# define EXPERT_H

# include <sys/errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>

typedef enum
{
	FALSE,
	TRUE,
	UNDETERMINED
}	t_type;

typedef struct	s_exec
{
	char	**content;
}				t_exec;

void			expert(char *input);
void			init(t_exec *info);
void			read_file(t_exec *info, char *path);
void			destroy(t_exec *info);
void			terminate(t_exec *info);

#endif
