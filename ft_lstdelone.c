#include "libft.h"

// Delete an element. Apply function del to free content 
// then free element memory.
// Function del should handle freeing of content memory.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
