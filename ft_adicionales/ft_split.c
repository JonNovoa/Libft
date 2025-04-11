/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:26:14 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/04/11 13:04:17 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> 

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count ++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *start, const char *end)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = end - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
	{
		return (NULL);
	}
	i = 0;
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;
	const char	*word_start;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_start = s;
			while (*s && *s != c)
				s++;
			result[i++] = ft_word_dup(word_start, s);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

int	main(void)
{
	char	**palabras;
	char	*frase = "Hola,esto,es,una,prueba";
	char	sep = ',';
	int		i = 0;

	palabras = ft_split(frase, sep);
	if (!palabras)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}

	while (palabras[i])
	{
		printf("Palabra %d: %s\n", i + 1, palabras[i]);
		free(palabras[i]); // Liberamos cada palabra
		i++;
	}
	//free(palabras); // Liberamos el array de punteros

	return (0);
}
