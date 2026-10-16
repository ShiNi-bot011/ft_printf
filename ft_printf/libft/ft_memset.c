/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:45:18 by slai              #+#    #+#             */
/*   Updated: 2025/12/17 14:45:23 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	temp;
	unsigned char	*temp_ptr;
	size_t			i;

	temp = (unsigned char)c;
	temp_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*temp_ptr = temp;
		temp_ptr++;
		i++;
	}
	return (s);
}
