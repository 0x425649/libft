#include "libft.h"

// Return new list formed by applying f to each element content.
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (res);
}
