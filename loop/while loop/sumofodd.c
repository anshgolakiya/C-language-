 #include <stdio.h>

 void  main()
{
    int n = 1;  
    int sum_odd = 0;
    int count = 1;  
    while (count <= 50) 
    {  
        sum_odd += n;
        n += 2; 
        count++;
    }
    printf("Sum of the first 50 odd numbers: %d\n", sum_odd);
}
