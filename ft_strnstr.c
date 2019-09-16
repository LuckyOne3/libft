/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:35:57 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/16 18:33:06 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t b;

	i = 0;
	if (((char*)needle)[i] == '\0')
		return (((char*)haystack) + i);
	while (((char*)haystack)[i] != '\0' && i < len)
	{
		b = 0;
		while (((char)haystack[i + b] == (char)needle[b]
					|| (char)needle[b] == '\0') && i + b <= len)
		{
			if (((char*)needle)[b] == '\0')
				return (((char*)haystack) + i);
			b++;
		}
		i++;
	}
	return (0);
}
