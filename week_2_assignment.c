// #include<stdio.h>
// int main()

// {
//     int n;
//     scanf("%d",&n);
//    for (int i = 1; i <=n; i++)
//    {
//     printf("%d.",i);
//     printf(" I Want More Assignments \n");
//    }

//     return 0;
// }

// #include <stdio.h>
// int main()

// {
//     int n;
//     scanf("%d", &n);
//     if (n > 0)
//     {

//         for (int i = 1; i <= n; i++)
//         {
//             printf("%d ", i);
//         }
//     } else if (n<=0)
//     {
//         for (int i = n; i <= 0; i++)
//         {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()

// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)

//     {
//         scanf("%d ", &a[i]);
//     }

//     for (int i = n - 1; i >= 0; i--)
// if(i%2!=0)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;

//     scanf("%d",&n);
//     int a[n];
//     for (int i = 0; i <n; i++)
//     {
//       scanf("%d",&a[i]);
//     }
//        int evenSum=0;
//        int oddSum=0;
//     for (int i = 0; i <n; i++)
//     if(a[i]>0)

//     {
//       evenSum = evenSum +a [i];
//     }else{
// oddSum=oddSum +a[i];
//     }
//     printf("%d ",evenSum);
//     printf("%d",oddSum);
//     return 0;
// }

#include <stdio.h>
int main()

{
    int n;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)

    {
        scanf("%d ", &a[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);
    a[x] = v;

    for (int i = n - 1; i >= 0; i--)

    {
        printf("%d ", a[i]);
    }

    return 0;
}