/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:47:00 by ggaribot          #+#    #+#             */
/*   Updated: 2024/06/12 11:56:19 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char type, va_list args)
{
	int	count;

	count = -1;
	if (type == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (type == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (type == 'p')
		count = ft_putnbr_ptr(va_arg(args, void *));
	else if (type == 'd' || type == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		count = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (type == 'x')
		count = ft_base16low(va_arg(args, unsigned int));
	else if (type == 'X')
		count = ft_base16high(va_arg(args, unsigned int));
	else if (type == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		bytes_read;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	i = -1;
	count = 0;
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			bytes_read = ft_format(format[i], args);
			count += bytes_read;
			if (bytes_read == -1)
				return (va_end(args), bytes_read);
		}
		else
			count += ft_putchar(format[i]);
	}
	return (va_end(args), count);
}
