/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:47:37 by slai              #+#    #+#             */
/*   Updated: 2025/12/17 14:47:40 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 
** 1. 返回 length 不包括 null terminator
** 2. 如果 dstsize=0 不要留下任何拷贝
** 3. 如果 src_len >= dstsize (意思就是 src 太长了根本就到不了 nullterminator)
** 4. copy n 字节留下一个字节做封口
** 5. 那么就不要 copy n 之后的字节了只要 copy n 字节
** 6. 相反地如果 src 小过 n 那么意味着还有空间可以放 nullterminator
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (src_len >= dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, src_len);
		dst[src_len] = '\0';
	}
	return (src_len);
}
