/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:40:36 by aromny-w          #+#    #+#             */
/*   Updated: 2021/01/24 15:40:39 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expert.h"

static void	print_error(void)
{
	if (errno)
		perror(NULL);
	else
		fprintf(stderr, "%s\n", "Error");
}

void		terminate(t_exec *info)
{
	print_error();
	destroy(info);
	exit(EXIT_FAILURE);
}
