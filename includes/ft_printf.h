/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:30:56 by ggaribot          #+#    #+#             */
/*   Updated: 2024/05/30 22:00:46 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# define FIRST_ASCII_CHAR	0
# define LAST_ASCII_CHAR	127
# define FIRST_PRINTABLE_CHAR	32
# define LAST_PRINTABLE_CHAR	126
# define DIFF_LOWER_UPPER		32
# define SPACE 32
# define FIRST_WHITESPACE 9
# define LAST_WHITESPACE 13

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_printf(const char *format, ...);
int	ft_format(char type, va_list args);

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);

int	putnbr_adress(uintptr_t num);
int	ft_putnbr_ptr(void *ptr);

int	ft_converthexa(unsigned long num, char c);
int	ft_base16low(unsigned long num);
int	ft_base16high(unsigned long num);
int	ft_putrstr(char *str);

#endif