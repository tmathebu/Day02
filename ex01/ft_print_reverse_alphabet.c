/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:28:47 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/19 13:39:22 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_print_reverse_alphabet(void);

void ft_putchar(char a);

int main (){

ft_print_reverse_alphabet();

return 0;
}

void ft_putchar(char a){
	write(1,&a,1);
}
void ft_print_reverse_alphabet(void){
	char c;
	int i = 122;

	while (i >= 97){
		c = i;
		ft_putchar(c);
		i--;
	}
	ft_putchar('\n');
}

