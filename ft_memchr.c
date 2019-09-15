/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:25:26 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/12 16:05:24 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ss;

	ss = (unsigned char*)s;
	if ((unsigned char*)s == NULL)
		return (NULL);
	while (n--)
	{
		if (*ss == (unsigned char)c)
			return (ss);
		ss++;
	}
	return (NULL);
}
