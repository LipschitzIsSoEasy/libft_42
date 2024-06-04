#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*n;
	void	*result;

	//new = NULL;
	if (lst != NULL && f != NULL
		&& del != NULL)
	{
		new = NULL;
		while (lst != NULL)
		{
			result = f(lst->content);
			n = ft_lstnew(result);
			if (n == NULL)
			{
				del(result);
				ft_lstclear(&new, del);
				return (NULL);
			}
			ft_lstadd_back(&new, n);
			lst = lst->next;
		}
		return (new);
	}
	return (NULL);
}