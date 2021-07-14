/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:55:36 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/14 08:59:21 by aboulhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	fputchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		fputchar(str[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	a;

	a = ac;
	while (a > 1)
	{
		a--;
		ft_putstr(av[a]);
		write (1, "\n", 1);
	}
}
