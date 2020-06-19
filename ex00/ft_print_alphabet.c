/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_alphabet.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:36:05 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/19 13:04:42 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);

void ft_putchar(char a);

int main (){

ft_print_alphabet();

return 0;

}

void ft_putchar(char a){
	write(1,&a,1);
}

void ft_print_alphabet(void)
{
	char c;
	int i = 97;
	
	while (i <= 122){
		c = i;
		ft_putchar(c);
		i++;
	}
	
	ft_putchar('\n');
}
