#include "libft.h"

// Allocate memory for "count" of blocks of size "size"
// And initialize the allocated memory to zero.
void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (count * size));
	return (mem);
}
