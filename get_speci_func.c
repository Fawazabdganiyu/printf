#include "main.h"

/**
 * wrapper - wraps of all specifiers and match them with
 *	corresponding function
 * @ind: indicator for function to return
 *
 * Return: pointer to appropiate print function
 */
print get_speci_func(char ind)
{
	int i;
	handle_t control[] = {
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"c", print_char},
		{"%", print_per},
		{"b", print_bin},
		{"u", print_unsigned},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_ptr},
		{NULL, NULL}
	};

	for (i = 0; control[i].spec != NULL; i++)
	{
		if (ind == control[i].spec[0])
			return (control[i].handler);
	}

	return (NULL);
}
