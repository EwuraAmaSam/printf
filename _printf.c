#include "main.h"
#include <stdio.h>
/**
 * _printf - prints texts to the console
 * @format: parameter to be printed
 * Return: number of chars printed
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
            if (*format == '%')
            {
                putchar('%');
                count++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(args, int);
                putchar(c);
                count++;
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                while (*s)
                {
                    putchar(*s);
                    s++;
                    count++;
                }
            }
        }
        else
        {
            putchar(*format);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}

