/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:21:16 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/10 16:43:11 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		write(1, &d, 1);
		d++;
	}
	write (1, "\n", 1);
}
int main()

{	
	ft_print_numbers();
	return(0);
}
