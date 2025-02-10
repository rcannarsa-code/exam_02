#include <stdlib.h>

int     *ft_rrange(int start, int end)
{       
        int i = 0;
        int len = 0;
        if (start >= end)
                len = start - end + 1;
        else
                len = end - start + 1;
        int *arr = (int *)malloc(sizeof(int) * len);

        while (i < len)
        {
                if (start < end)
                {
                        arr[i] = end;
                        end--;
                        i++;
                }
                else
                {
                        arr[i] = end;
                        end++;
                        i++;
                }
        }
        return (arr);
}       
