/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimunoz- <vimunoz-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:58:20 by vimunoz-          #+#    #+#             */
/*   Updated: 2022/07/24 16:58:23 by rvela-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_read_dict(char *dictname)
{
	int		dict_open;
	char	*dict_text_aux;
	char	*dict_text;
	int		dict_read;
	int		i;

	dict_open = open(dictname, O_RDONLY);
	if (dict_open < 0)
	{
		return (0);
	}
	dict_text_aux = (char *)malloc(1000 * sizeof(char));
	dict_read = read(dict_open, dict_text_aux, 1000);
	dict_text = (char *)malloc((dict_read + 1) * sizeof(char));
	i = 0;
	while (i < dict_read)
	{
		dict_text[i] = dict_text_aux[i];
		i++;
	}
	dict_text[i] = '\0';
	free(dict_text_aux);
	close(dict_open);
	return (dict_text);
}
