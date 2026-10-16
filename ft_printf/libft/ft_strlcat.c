/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:47:28 by slai              #+#    #+#             */
/*   Updated: 2025/12/17 14:47:31 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) {
  size_t dst_len;
  size_t src_len;
  size_t copy_len;

  src_len = ft_strlen(src);
  if (!dst && size == 0)
    return (src_len);

  dst_len = ft_strlen(dst);

  if (size <= dst_len)
    return (size + src_len);

  copy_len = size - dst_len - 1;
  if (src_len < copy_len)
    copy_len = src_len;

  ft_memcpy(dst + dst_len, src, copy_len);
  dst[dst_len + copy_len] = '\0';

  return (dst_len + src_len);
}
