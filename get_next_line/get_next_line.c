/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgmih <sgmih@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:55:48 by sgmih             #+#    #+#             */
/*   Updated: 2024/11/29 13:03:53 by sgmih            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *find_newline(int fd, char *str)
{
    char    *buffer;
    int     chars_read;

    chars_read = 1;
    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!str)
		str = ft_strdup("");
    if (!buffer)
        return (NULL);
    while (chars_read != 0 && (ft_strchr(str, '\n') == NULL))
    {
        chars_read = read(fd, buffer, BUFFER_SIZE);
        if (chars_read < 0)
        {
            free(buffer);
            free(str);
            return (NULL);
        }
        buffer[chars_read] = '\0';
        str = ft_strjoin(str, buffer);
    }
    free(buffer);
    return (str);
}
static char    *substr_newline(char *str)
{
    char *new_line;
    int start;
    int len;
    
    start = 0;
    len = 0;
    if (ft_strlen(str) == 0)
		return (NULL);
    while (str[len] && str[len] != '\n')
        len++;
    new_line = ft_substr(str, start, len);
    if (!new_line)
        return (NULL);
    return (new_line);
}
static char    *update_str(char *str)
{
    int i;
    int j;
    char *new_str;
    char *new_pos;

    i = 0;
    new_pos = ft_strchr(str, '\n');
    if (new_pos)
        i = new_pos - str + 1;
    if (i == 0)
    {
		free(str);
		return (NULL);
	}
    new_str = malloc(sizeof(char) * (ft_strlen(str + i) + 1));
	if (!new_str)
		return (NULL);
    j = 0;
	while (str[i])
		new_str[j++] = str[i++];
    new_str[i] = '\0';
    free(str);
    return (new_str);

}

char *get_next_line(int fd)
{
    static char *str;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    str = find_newline(fd, str);
    if (!str)
        return (NULL);
    line = substr_newline(str);
    str = update_str(str);
    if (!line)
    {
        free(str);
        str = NULL;
    }
    return (line);
}
