/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:43:46 by desteve           #+#    #+#             */
/*   Updated: 2022/12/14 18:31:57 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_uint(unsigned int nbr);
int	ft_print_string(char *str);
int	ft_print_pointer(unsigned long ptr);
int	ft_print_number(int nbr);
int	ft_print_hex(unsigned int num, char c);
int	ft_print_char(char c);

#endif
