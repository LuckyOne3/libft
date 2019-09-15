/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:25:26 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/11 15:58:30 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *srcc;
	unsigned char *dstt;

	srcc = (unsigned char*)src;
	dstt = (unsigned char*)dst;
	if (srcc < dstt)
	{
		while (len--)
		{
			dstt[len] = srcc[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
