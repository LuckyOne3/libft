/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amyrta <amyrta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:23:21 by amyrta            #+#    #+#             */
/*   Updated: 2019/09/16 18:14:26 by amyrta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int	res;

	if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-', fd);
	}
	res = n;
	if (res < 10)
		ft_putchar_fd(res + 48, fd);
	if (res >= 10)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putnbr_fd(res % 10, fd);
	}
}
