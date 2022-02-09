/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:32:02 by kdhrif            #+#    #+#             */
/*   Updated: 2022/02/09 11:32:04 by kdhrif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putstr_non_printable(char *str);

void ft_convert_dectohex(int d);

void ft_putchar(char c)
{
		write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
		int i;


		i = 0;
		while (str[i] != '\n')
		{
				if (str[i] > 126 || str[i] < 40)
				{
						ft_putchar('\\');
						ft_convert_dectohex(str[i]);
				}
		}

}

int ft_convert_dectohex(char d)
{
		char c[5];
		int i;
		
		i = 0;
		while (d != 0)
		{
				
		}
}
