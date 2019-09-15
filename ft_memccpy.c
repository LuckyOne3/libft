/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:56:01 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/10 17:59:50 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char k;

	k = (unsigned char)c;
	if ((unsigned char*)src == NULL && (unsigned char*)dst == NULL)
		return (NULL);
	while (n--)
	{
		if (*(unsigned char*)src == k)
		{
			*(unsigned char*)dst = *(unsigned char*)src;
			return (dst + 1);
		}
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		src++;
	}
	return (NULL);
}
