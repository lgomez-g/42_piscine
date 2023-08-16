/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-g <lgomez-g@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:18:04 by lgomez-g          #+#    #+#             */
/*   Updated: 2022/09/10 16:23:57 by lgomez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	d;

	d = ('z');
	while (d >= 'a')
	{
		write(1, &d, 1);
		d--;
	}
}
/*int main()
{
	ft_print_reverse_alphabet();
	return (0);
}*/
