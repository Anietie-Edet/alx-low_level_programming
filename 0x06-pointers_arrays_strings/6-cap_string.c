#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @sim: The string to be capitalised.
 *
 * Return:  pointer to the capitalised string.
 */
char *cap_string(char *sim)
{
	int cap = 0;

	while (sim[cap])
	{
		while (!(sim[cap] >= 'a' && sim[cap] <= 'z'))
			cap++;

		if (sim[cap - 1] == ' ' ||
		    sim[cap - 1] == '\t' ||
		    sim[cap - 1] == '\n' ||
		    sim[cap - 1] == ',' ||
		    sim[cap - 1] == ';' ||
		    sim[cap - 1] == '.' ||
		    sim[cap - 1] == '!' ||
		    sim[cap - 1] == '?' ||
		    sim[cap - 1] == '"' ||
		    sim[cap - 1] == '(' ||
		    sim[cap - 1] == ')' ||
		    sim[cap - 1] == '{' ||
		    sim[cap - 1] == '}' ||
		    cap == 0)
			sim[cap] -= 32;

		cap++;
	}

	return (sim);
}

