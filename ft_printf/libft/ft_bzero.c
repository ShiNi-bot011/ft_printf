/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:28:22 by slai              #+#    #+#             */
/*   Updated: 2025/12/17 14:28:35 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temp_ptr;
	size_t			i;

	temp_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*temp_ptr = 0;
		temp_ptr++;
		i++;
	}
}
