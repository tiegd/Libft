#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int	nb_word;
	int	i;

	nb_word = 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i + 1] != 0)
			nb_word++;
		i++;
	}
	return (nb_word);
}

char	**ft_new_str(char **double_tab, const char *s, char c, int nb_word)
{
	int		i;
	int		index;
	int		count;
	int		fill;

	count = 0;
	i = 0;
	while (s[i] && count < nb_word)
	{
		fill = 0;
		while (s[i] == c && s[i])
			i++;
		index = i;
		while (s[i] != c && s[i])
			i++;
		double_tab[count] = malloc((i - index + 1) * sizeof(char));
		if (double_tab[count] == NULL)
			return (NULL);
		while (index < i)
			double_tab[count][fill++] = s[index++];
		double_tab[count][fill] = '\0';
		count++;
	}
	return (double_tab);
}

char	**ft_split(char const *s, char c)
{
	int		nb_word;
	char	**double_tab;

	nb_word = ft_count_word(s, c);
	double_tab = malloc(nb_word + 1 * sizeof(char *));
	if (!(double_tab))
	{
		free(double_tab);
		return (NULL);
	}
	double_tab[nb_word] = NULL;
	double_tab = ft_new_str(double_tab, s, c, nb_word);
	return (double_tab);
}
/*
#include <stdio.h>

int	main()
{
	char	*s = "Salut&ça&va&?&";
	char	c = '&';

	char    **str;
    int    i;

    i = 0;
    str = ft_split(s, c);
    while (str[i] != NULL)
    {

        printf("%s\n",str[i]);
        i++;
    }
    i = 0;
    while (str[i])
        free(str[i++]);
    free(str);
    return (0);
}
*/