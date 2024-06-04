#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*current;
	t_list	*temp;
	
	if (lst != NULL && del != NULL)
	{
		temp = NULL;
		current = *lst;
		while (current != NULL)
		{
			temp = current->next;
			ft_lstdelone(current, del);
			current = temp;
		}
		*lst = NULL;
	}
}