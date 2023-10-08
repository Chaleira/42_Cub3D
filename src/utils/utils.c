/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:02:12 by chaleira          #+#    #+#             */
/*   Updated: 2023/10/08 01:30:30 by dinunes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	print_matrix(char **matrix)
{
	while (matrix && *matrix)
	{
		printf("%s", *matrix);
		matrix++;
	}
}
