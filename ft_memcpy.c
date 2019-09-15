/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:56:01 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/10 18:54:17 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *srcc;
	unsigned char *dstt;

	srcc = (unsigned char*)src;
	dstt = (unsigned char*)dst;
	if (srcc == NULL && dstt == NULL)
		return (NULL);
	while (n--)
	{
		*dstt = *srcc;
		dstt++;
		srcc++;
	}
	return (dst);
}
