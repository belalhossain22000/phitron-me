// #include <stdio.h>

// int main()
// {
//     int a;
//     scanf("%d",&a);
//     if(a==1){
//         printf("-1");
//     }
//     for (int i = 1; i <= a; i++)

//     {
//         if (i % 2 == 0)
//         {
//             printf("%d\n",i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int n;
//     int x;
//     int even = 0, odd = 0, pos = 0, neg = 0;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &x);
//         if (x % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//         if (x > 0)
//         {
//             pos++;
//         }
//         else if (x < 0)
//         {
//             neg++;
//         }
//     }

//     printf("Even: %d\n", even);
//     printf("Odd: %d\n", odd);
//     printf("Positive: %d\n", pos);
//     printf("Negative: %d\n", neg);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//    int  pass;

//    while (scanf("%d",&pass)!=EOF)
//    {
//     if(pass==1999){
//         printf("Correct\n");
//         break;
//     }else{
//         printf("Wrong\n");

//     }
//    }

//     return 0;
// }

// #include <stdio.h>
// #include <limits.h>

// int main()
// {

//     int n = 0;
//     scanf("%d", &n);
//     int max = INT_MIN;
//     for (int i = 1; i <= n; i++)
//     {
//         int val;
//         scanf("%d", &val);
//         if (val > max)
//         {
//             max = val;
//         }
//     }
//     printf("%d", max);

//     return 0;
// }

// #include <stdio.h>

// int main() {

//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=12;i++){
//         printf("%d * %d = %d\n",n,i,n*i);

//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int t;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         int n;
//         scanf("%d", &n);
//         while (n != 0)
//         {
//             printf("%d ", n % 10);
//             n /= 10;
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 1; i <= t; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         if (n == 0)
//         {
//             printf("0\n");
//             continue;
//         }

//         int digits[10]; 
//         int count = 0;


//         for (; n != 0; n /= 10)
//         {
//             digits[count++] = n % 10;
//         }


//         for (int j = 0; j < count; j++)
//         {
//             if (j > 0)
//                 printf(" ");
//             printf("%d", digits[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <stdio.h>

int main() {
    
    int n;

    scanf("%d",&n);
   for (int i =1;i<=n;i++){
    if(n%i==0){
        printf("%d\n",i);
    }
   }
    
    return 0;
}