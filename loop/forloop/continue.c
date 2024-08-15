#include <stdio.h>
void main()
{
    for (int i =1 ; i<=100 ; i++)//* odd number
    {
        if(i%2 == 0)
        {
            continue; //* skeap a round.
        }
        printf("%d ",i);
    }
    for (int i = 1 ; i<=100 ; i++)//*even number
    {
        if(i%2 != 0)
        {
            continue; //* skeap a round.
        }
        printf("%d ",i);
    }
}