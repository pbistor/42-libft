/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:30:37 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/23 13:15:30 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{	
		if (!((c >= 65 && c <= 90) || (c >= 97  && c <= 122)))
			return (0);
		
	return (1);
}
/*int main(void)
{
	char str[10]="gasAZf1";

	printf("%d", ft_str_is_alpha(96));

}*/
