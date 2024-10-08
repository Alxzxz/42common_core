/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoyo-ar < amoyo-ar@student.42madrid.com   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:04:44 by amoyo-ar          #+#    #+#             */
/*   Updated: 2024/10/09 17:20:11 by amoyo-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] && (len > i))
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *target, const char *abuscar, size_t len)
// {
//     int i;
//     int i2;
//     int ubi;
//     int res;

//     i = 0;
//     i2 = 0;
//     ubi = 0;
//     res = 0;

//     if ( (target == NULL) || (abuscar == NULL) || (*abuscar == '\0'))
//         return ((char *)target);
//     if (len == 0)
//         return (NULL);

//     while ((target[i] != '\0') && (i < len))
//     {
//         while (target[i] == abuscar[i2])
//         {
//             res = ubi;
//             i++;
//             i2++;
//             if (abuscar[i2] == '\0')
//                 return ((char *)&target[res]);
//         }
//         i2 = 0;
//         i++;
//         ubi = i;
//     }
//     return (NULL);
// }
//
//
//
//
// int main() {
//     // Caso 1: Subcadena encontrada
//     {
//         const char *target = "Hola, este es un ejemplo de strnstr.";
//         const char *abuscar = "ejemplo";
//         size_t len = 30;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 1 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 1 - No se encontró la subcadena.\n");
//         }
//     }

//     // Caso 2: Subcadena no encontrada
//     {
//         const char *target = "Hola, este es un ejemplo de strnstr.";
//         const char *abuscar = "no encontrado";
//         size_t len = 30;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 2 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 2 - No se encontró la subcadena.\n");
//         }
//     }

//     // Caso 3: Subcadena al final de la cadena objetivo
//     {
//         const char *target = "Hola, este es un ejemplo de strnstr.";
//         const char *abuscar = "strnstr.";
//         size_t len = 40;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 3 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 3 - No se encontró la subcadena.\n");
//         }
//     }

//     // Caso 4: Longitud menor que la longitud de la subcadena
//     {
//         const char *target = "Hola, este es un ejemplo de strnstr.";
//         const char *abuscar = "ejemplo de strnstr.";
//         size_t len = 20;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 4 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 4 - No se encontró la subcadena.\n");
//         }
//     }

//     // Caso 5: Caso de subcadena vacía
//     {
//         const char *target = "Hola, este es un ejemplo de strnstr.";
//         const char *abuscar = "";
//         size_t len = 30;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 5 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 5 - No se encontró la subcadena.\n");
//         }
//     }

//     // Caso 6: Caso con punteros nulos
//     {
//         const char *target = NULL; // Puntero nulo
//         const char *abuscar = "ejemplo";
//         size_t len = 30;

//         char *result = ft_strnstr(target, abuscar, len);
//         if (result) {
//             printf("Caso 6 - Encontrado en: %s\n", result);
//         } else {
//             printf("Caso 6 - No se encontró la subcadena.\n");
//         }
//     }

//     return (0);
// }
