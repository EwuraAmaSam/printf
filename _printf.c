#include "main.h"
#include <stdio.h>

/**
 * _printf - prints output according to a format
 * @format: character string containing zero or more directives
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				fputs(s, stdout);
				count += strlen(s);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 * _function - print input text to console
 * @format: input parameter
 * Return: Returns number of printed words
 */
int _function(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				int d = va_arg(args, int);

				_putchar(d);
				count++;
			}
			else if (*format == 'i')
			{
				int *i = va_arg(args, int *);

				fputs(i, stdout);
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
		}
}
