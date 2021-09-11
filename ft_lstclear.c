#include "libft.h"

// Clear lst memory.
void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*el;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	el = *lst;
	while (el)
	{
		next = el->next;
		del(el->content);
		free(el);
		el = next;
	}
	*lst = NULL;
}
