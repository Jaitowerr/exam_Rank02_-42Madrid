/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitorres <aitorres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 00:17:31 by alex              #+#    #+#             */
/*   Updated: 2026/01/03 00:50:41 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_val(char c)     // Esta función te da el valor de cualquier carácter hex o menor
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	i;
    int val;

    result = 0;
    sign = 1;
    i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		int val;
        
        val = get_val(str[i]);
		if (val == -1 || val >= str_base)
			break;

		result = (result * str_base) + val;
		i++;
	}
	return (result * sign);
}