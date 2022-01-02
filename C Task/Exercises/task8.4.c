 /*
     C program to accept N numbers and arrange them in an decending order
     */
 
    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n,num, number[n];
        printf("Enter the value of N \n");
        scanf("%d", &n);
        number[n];
 		num=n;
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in decending order are given below \n");
        for (i = num-1; i >=0; i--)
            printf("%d\n", number[i]);
 
    }
