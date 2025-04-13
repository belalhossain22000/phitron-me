// #include <stdio.h>


//problem-1


// #include <stdio.h>

// int main() {
    
//     int a;
//     int b;

//     scanf("%d %d",&a,&b);
//     if(a >= b){
//         printf("Yes");
//     }else{
//         printf("No");
//     }
    
//     return 0;
// }


//problem-2

// #include <stdio.h>
// int main() {
//     int a;
//     int b;

//     scanf("%d %d",&a,&b);
//     if(a%b==0){
//         printf("Multiples");
//     }else if (b%a==0){
//         printf("Multiples");
//     }else{
//         printf("No Multiples");
//     }
    
    
//     return 0;
// }

// P. First digit !

// problem-3

// #include <stdio.h>

// int main() {
    
//     int a;
//     scanf("%d",&a);   
//     int div=a/1000; 
//     if(div%2==0){
//         printf("EVEN");
//     }else{
//         printf("ODD");
//     }
//     return 0;
// }

// N. Char
// problem-4

// #include <stdio.h>

// int main() {
    
//     char ch;
//     scanf("%c",&ch);
//     if(ch>='a' && ch<='z')
//     {
//         ch=ch-32;
//         printf("%c",ch);
//     }
//     else
//     {
//         ch=ch+32;
//         printf("%c",ch);
//     }
    
//     return 0;
// }

//M. Capital or Small or Digit
// problem-5

// #include <stdio.h>
// int main() {
//     char ch;
//     scanf("%c",&ch);

//     if(ch >= '0' && ch <= '9'){
//         printf("IS DIGIT");
//     }
//     else{
//         printf("ALPHA\n");
//         if(ch >= 'a' && ch <='z'){
//             printf("IS SMALL");
//         }else{
//             printf("IS CAPITAL");
//         }
//     };
    
    
//     return 0;
// }

//K. Max and Min 
//problem-6

// #include <stdio.h>

// int main() {
//     int a;
//     int b;
//     int c;
//     scanf("%d %d %d",&a,&b,&c);

//     if(a<=b && a<=c){
//         printf("%d", a);
//     }else if(b<=a && b<=c){
//         printf("%d", b);
//     }else if(c<=a && c<=b){
//         printf("%d", c);
//     }

//     if(a>=b && a>=c){
//         printf(" %d", a);
//     }else if(b>=a && b>=c){
//         printf(" %d", b);
//     }else if(c>=a && c>=b){
//         printf(" %d", c);
//     }
     
    
//     return 0;
// }