/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 16:35:54 by aromny-w          #+#    #+#             */
/*   Updated: 2021/01/24 16:35:55 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expert.h"

static void	destroy_content(char **content)
{
	size_t	i;

	i = 0;
	while (content[i])
	{
		printf("%s", content[i]);
		free(content[i++]);
	}
	free(content);
}

void	destroy(t_exec *info)
{
	destroy_content(info->content);
}
