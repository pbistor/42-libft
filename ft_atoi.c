/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:32:09 by vprieto-          #+#    #+#             */
/*   Updated: 2022/10/07 10:27:58 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	neg;

	i = 0;
	j = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
	{
		j *= 10;
		j += str[i] - '0';
		i++;
	}
	return (j * neg);
}
