//
// Description
// Allocates (with malloc(3)) and returns a copy of ’s1’
// with the characters specified in ’set’ 
// removed from the beginning and the end of the string.
//
// Parameters
// #1. The string to be trimmed.
// #2. The reference set of characters to trim.
//
// Return
// The trimmed string. NULL if the allocation fails.
//
// External functs.
// Malloc
//
#include "libft.h"
#include <stdlib.h>

char	ft_strtrim(char const *s1, char c)
{
	char	*str;
	int		index;
	int		total_start;
	int		total_end;

	index = 0;
	total_start = 0;
	total_end = 0;
	while (s1[index] == c)
	{
		total_start++;
		index++;
	}
	while (s1[index])
		index++;
	while (s1[index] == c)
	{
		index--;
		total_end++;
	}
	return (ft_substr(s1, total_start, (ft_strlen(s1) - total_start - total_end)));
}