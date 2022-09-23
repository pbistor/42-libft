/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vprieto- <vprieto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:19:16 by vprieto-          #+#    #+#             */
/*   Updated: 2022/09/17 12:26:32 by vprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
int ft_memcmp(const void *s1, const void *s2,  size_t n)
{
    size_t i;
	int truer;
	const char  *str1;
	const char  *str2;
	str1 = (const char *)s1;
	str2 = (const char *)s2;
	i = 0;
	
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
		{
			truer = str1[i] - str2[i];
			return (truer);
		}
		i++;
	}
	return (0);
}
int main(void)
{
	char src[21]="holjhuytiyuyfiytaayfiy";
	char dest[20]="holaea";
	char array[5];
	unsigned int n;
	printf("%d", ft_memcmp(src, dest, 6));
	printf("%d", memcmp(src, dest, 6));
}