/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:02:12 by chaleira          #+#    #+#             */
/*   Updated: 2023/12/04 12:59:14 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int stoi(double nb)
{
	return (nb / SCALE);
}

double itos(int nb)
{
	return (nb * SCALE);
}

void	print_matrix(char **matrix)
{
	if (!matrix)
	{
		printf("Can't print matrix\n");
		return ;	
	}
	while (*matrix)
	{
		printf("%s\n", *matrix);
		matrix++;
	}
}
