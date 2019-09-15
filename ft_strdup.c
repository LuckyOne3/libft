/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:35:57 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/11 18:45:09 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		new[i] = s1[i];
		i++;
	}
	new[len] = '\0';
	return (new);
}
