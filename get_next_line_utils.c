/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: smiller <smiller@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/18 15:56:49 by smiller       #+#    #+#                 */
/*   Updated: 2021/10/23 15:41:48 by smiller       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*substr;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(str))
		len = ft_strlen(str) - start;
	substr = malloc(len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (str[i] && i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

char	*ft_strdup(const char *s1)
{
	int		y;
	int		len;
	char	*newp;

	y = 0;
	len = ft_strlen(s1) + 1;
	newp = malloc(len * sizeof(char));
	if (newp == NULL)
		return (NULL);
	else
	{
		while (s1[y])
		{
			newp[y] = s1[y];
			y++;
		}
	}
	newp[y] = '\0';
	return (newp);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = src;
	d = dst;
	i = 0;
	if (len == 0 || d == s)
		return (d);
	while (d <= s && len > i)
	{
		d[i] = s[i];
		i++;
	}
	while (d > s && len > 0)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*cat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cat = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cat[i] = s2[j];
		j++;
		i++;
	}
	cat[i] = '\0';
	return (cat);
}

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
