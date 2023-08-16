/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:04:46 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/26 11:24:14 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	ch;

	a = argc -1;
	ch = 0;
	if (argc >= 1)
	{
		while (a > 0)
		{
			ch = 0;
			while (argv[a][ch] != '\0')
			{
				write (1, &argv[a][ch], 1);
				ch++;
			}
			write (1, "\n", 1);
			a--;
		}
	}
	return (0);
}
