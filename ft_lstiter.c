#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst != NULL && f != NULL)
	{
		current = lst;
		while (current != NULL)
		{
			f(current->content);
			current = current->next;
		}
	}
}