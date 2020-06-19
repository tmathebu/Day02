/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:58:28 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/19 14:23:42 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void ft_print_numbers(void);

void ft_putchar(char a);

int main (){

ft_print_numbers();

return 0;
}

void ft_putchar(char a){
	write(1,&a,1);
}
void ft_print_numbers(void){
	int i = 48;
	char c;
	while (i <= 57){
		c = i;
		ft_putchar(c);
		i++;
	}
	ft_putchar('\n');
}
