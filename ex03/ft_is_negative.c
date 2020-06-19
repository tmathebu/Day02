/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmathebu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:27:21 by tmathebu          #+#    #+#             */
/*   Updated: 2020/06/19 15:06:41 by tmathebu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

void ft_putchar(char a);

int main (){

ft_is_negative(-4);

return 0;

}

void ft_putchar(char a){
	write(1, &a, 1);
}

void ft_is_negative(int n){
	if(n < 0){
		ft_putchar('N');
	}
	else{
		ft_putchar('P');
	}
	ft_putchar('\n');
}
