#include "list.h"
#include <stdlib.h>

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
        int     swap;
        t_list  *head;

        head = lst;
        while (lst->next != NULL)
        {
                if (((*cmp)(lst->data, lst->next->data)) == 0)
                {
                        swap = lst->data;
                        lst->data = lst->next->data;
                        lst->next->data = swap;
                        lst = head;
                }
                else
                        lst = lst->next;
        }
        lst = head;
        return (lst);
}
