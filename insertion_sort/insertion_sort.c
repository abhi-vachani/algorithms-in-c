#include <stdio.h>

/*
Insertion Sort in C
Written by Abhi Vachani
Reference: 
Introduction to Algorithms, Fourth Edition 
by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein
*/




int main()
{

    // input array
    int a[7] = {5, 15, 3, 2, 91, 7, 1};


    // size of input array
    int n = (int) (sizeof(a) / sizeof(a[0]));


    // insertion sort algorithm
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j-1;
        }

        a[j+1] = key;

    }

    // print sorted array
    for (int l = 0; l < n; l++)
    {
        printf("%d ", a[l]);
    }

    printf("\n");


    return 0;
}



