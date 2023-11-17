#include "libft.h"

int     count_words(char const *s, char c)
{
    size_t index;
    int words;

    index = 0;
    words = 0;
    while (s[index])
    {
        while (s[index] == c && s[index])
            index++;
        while (s[index] != c && s[index])
            index++;
        if (s[index] == c || (index == ft_strlen(s) && s[index - 1] != c))
            words += 1;
    }
    return (words);
}

char    **ft_split(char const *s, char c)
{
    int   index;
    char    **new;
    int     k;
    int     start;

    start = 0;
    k = 0;
    index = 0;
    
    new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!(new))
        return (NULL);
    while (s[index])
    {
        while (s[index] == c && s[index])
            index++;
        start = index;
        if (!(s[index]))
            break ;
        while (s[index] != c && s[index])
            index++;
        new[k++] = ft_substr(s, start, index);
    }
    new[k] = ((char *)NULL);
    return (new);
}
/*
int main()
{
    char const *s = "tripouille";
    char c = 
    ft_split()
}*/