/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:37:11 by aboulhaj          #+#    #+#             */
/*   Updated: 2021/07/14 08:48:06 by aboulhaj         ###   ########.fr       */
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
	int	i;

	i = 0;
	(void) ac;
	ft_putstr(av[i]);
	write (1, "\n", 1);
}
