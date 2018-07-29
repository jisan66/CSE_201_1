#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int count = 0;
int n;
int array[100];

int main()
{
    char a[2];
x:
    printf("Enter your choice:\n0. Exit\n1. View all elements\n2. Insert new element\n3. Search an element\n4. Delete an element (user should input item to be searched and delete)\n5. Sort elements in ascending order\n6. Sort elements in descending order\n7. Find memory location of an element\n");


A:
    printf("\nEnter Your Option: ");

    gets(a);

    if((count==0) && (a[0]=='1' || a[0]=='3' || a[0]=='4' || a[0]=='5' || a[0]=='6' || a[0]=='7'))
    {
        printf("No element found! Enter option 2.\n");
        goto A;
    }

    switch (a[0])
    {
    case '1':
        {
    int c;
    printf("View all elements\n\n");

    for(c=0; c<n; c++)
    {
        printf("%d ", array[c]);
    }
    printf("\nPress enter to continue...");
    getchar();
}
        break;

    case '2':
        {
    int c;
    printf("Enter number of total elements.\n");
    scanf("%d", &n);
    printf("Input elements:\n");

    for(c=0; c<n; c++)
    {
        scanf("%d", &array[c]);
    }
    count = n;
    getchar();
}
        break;

    case '3':
        {
    int c, t=0, ele;
    printf("Enter searching element: ");
    scanf("%d", &ele);
    for(c=0; c<n; c++)
    {
        if(array[c]==ele)
        {
            printf("Index[%d]=%d\n", c, array[c]);
            t=t+1;
        }
    }
    if(t==0)
    {
        printf("No result found.\n");
    }
    else
    {
        printf("%d results found.\n", t);
    }
    printf("\nPress enter to continue...");
    getchar();
    getchar();
}
        break;

    case '4':
        {
    int c, d, temp, t=0, ele;
    printf("Enter the element: ");
    scanf("%d", &ele);
    for(c=0; c<n; c++)
    {
        if(array[c]==ele)
        {
            t=t+1;
            for(d=c; d<n-t; d++)
            {
                array[d]=array[d+1];
            }
        }
    }
    n=n-t;
    count=n;
    if(t==0)
    {
        printf("No result found.\n");
    }
    else
    {
        printf("%d Elements deleted.\n", t);
    }
    printf("\nPress enter to continue...");
    getchar();
    getchar();

}
        break;

    case '5':
        {
    int c, d, t;
    printf("\n\nSorted elements in ascending order: \n");
    d=n-1;
 X:
    for(c=0; c<d; c++)
    {
        if(array[c]>array[c+1])
        {
            t=array[c+1];
            array[c+1]=array[c];
            array[c]=t;
        }
    }
    for(c=0; c<d; c++)
    {
        if(array[c]>array[c+1])
            goto X;
    }
    for(c=0; c<n; c++)
        printf("%d\n", array[c]);

    printf("\nPress enter to continue...");
    getchar();
}
        break;

    case '6':
        {
    int c, d, t;
    printf("\n\nSort elements in descending order: \n");
 Y:
    for(c=0; c<n; c++)
    {
        if(array[c]<array[c+1])
        {
            t=array[c];
            array[c]=array[c+1];
            array[c+1]=t;
        }
    }
    for(c=0; c<n; c++)
    {
        if(array[c]<array[c+1])
            goto Y;
    }
    for(c=0; c<n; c++)
        printf("%d\n", array[c]);

    printf("\nPress enter to continue...");
    getchar();
}
        break;

    case '7':
        {
    int c;
    printf("Enter index number of the element: ");
    scanf("%d", &c);

    printf("Memory location of element (Index[%d]): %d\n", c, &array[c]);

    printf("\nPress enter to continue...");
    getchar();
    getchar();
}

        break;

    case '0':
        return 0;
        break;

    default:
        {
        printf("Wrong Input!\n");
        goto A;
        }
    }

    system("cls");
    goto x;
}
