/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:44:31 by slai              #+#    #+#             */
/*   Updated: 2025/12/17 14:44:37 by slai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int c, size_t n) {
	unsigned char* temp_ptr=(unsigned char*) ptr;
	unsigned char temp_char= (unsigned char) c;
	size_t size =0;
	while(size<n &&*temp_ptr != temp_char) {
	   
			size++;
			temp_ptr++;

	}
	if(size==n){return NULL;}
	return (void*)temp_ptr;

}

/*
int	main(void)
{
	char	str[] = "Hello World!";
	int		nums[] = {10, 20, 0x41424344, 40};
	void	*res;

	printf("--- String Tests ---\n");
	printf("Found 'o': %s\n", (char *)ft_memchr(str, 'o', 12));
	printf("Original : %s\n", (char *)memchr(str, 'o', 12));
	
	printf("\n--- Edge Cases ---\n");
	printf("Find \\0  : %p\n", ft_memchr(str, '\0', 13));
	printf("Empty n  : %p\n", ft_memchr(str, 'H', 0));

	printf("\n--- Integer Array Test ---\n");
	// 0x42 is 'B' in ASCII. searching inside the int 0x41424344
	res = ft_memchr(nums, 0x42, sizeof(nums));
	if (res != NULL)
		printf("Byte 0x42 found at address: %p\n", res);
	else
		printf("Byte not found.\n");

	return (0);
}
*/
