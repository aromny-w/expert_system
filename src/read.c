/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:33:48 by aromny-w          #+#    #+#             */
/*   Updated: 2021/01/24 15:33:56 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "expert.h"

static char **get_file_content(t_exec *info, FILE *stream)
{
	char	**content;
	size_t	len;
	int		i;

	i = 0;
	if (!(content = (char **)malloc(sizeof(char *) * (i + 1))))
		terminate(info);
	content[i] = NULL;
	len = 0;
	while (getline(&content[i++], &len, stream) != -1)
	{
		if (!(content = (char **)reallocf(content, sizeof(char *) * (i + 1))))
			terminate(info);
		content[i] = NULL;
	}
	return (content);
}

void	read_file(t_exec *info, char *path)
{
	FILE	*fp;

	if (!(fp = fopen(path, "r")))
		terminate(info);
	info->content = get_file_content(info, fp);
	fclose(fp);
}
