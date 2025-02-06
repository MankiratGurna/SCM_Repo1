// #include <stdio.h>

// int main(){
//     printf("Hello, World!");
//     return 0;
// }

// #include <stdio.h>  //Standard library to use printf and scanf

// int main(){
//     int num; //declaring a variable
//     scanf("%d",&num);  //taking the user-input
//     printf("%d",num);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num1, num2;
//     printf("Enter two numbers :\n")
//     scanf("%d",&num1);      
//     scanf("%d",&num2);      
//     int sum=num1+num2;
//     printf("%d",sum);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float radius;
//     printf("Enter the radius of the circle :\n");
//     scanf("%f",&radius);
//     float circumference=2*3.14*radius;
//     float area=3.14*(radius*radius);
//     printf("The circumference of the circle : %.2f\n",circumference);
//     printf("The area of the circle : %.2f",area);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float num1,num2;
//     printf("Enter the two numbers:\n");
//     scanf("%f %f",&num1,&num2);
//     printf("Addition: %.2f\n",num1 + num2);
//     printf("Subtraction: %.2f\n",num1 - num2);
//     printf("Multiplication: %.2f\n",num1 * num2);
//     if (num2!=0){
//         printf("Division: %.2f\n",num1 / num2);
//     }
//     else{
//         printf("Division: Undefined (Division by zero)");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(){
//     float u, a, t, s, v, b, c, p, T, H;
//     //Equation (i): V = u+at;
//     printf("Enter the values for u, a and t for V = u + at:\n");
//     scanf("%f %f %f", &u, &a, &t);
//     v=u + (a*t);
//     printf("V = %.2f\n", v);

//     //Equation (ii): S = ut + (1/2)at^2
//     s = (u * t) + (0.5 *a * t * t);
//     printf("S = %.2f\n",s);

//     //Equation (iii): T = 2*a+ underrootb + 3*c
//     printf("Enter values for a, b and c for T = 2*a + sqrt(b) + 9*c:\n");
//     scanf("%d %d %d",&a, &b, &c);
//     T = 2 * a + sqrt(b) + (9*c);
//     printf("T = %.2f\n", T);

//     //Equation (iv): H = sqrt(b^2 + p^2)
//     printf("Enter the values for b and p for H = sqrt(b^2 + p^2):\n");
//     scanf("%f %f", &b, &p);
//     H = sqrt((b*b) + (p *p));
//     printf("H = %.2f\n",H);
//     return 0;

// }

// #include <stdio.h>

// int main(){
//     int a,b,temp;
//     printf("Enter two numbers: \n");
//     scanf("%d %d",&a,&b);
//     printf("Before swapping: a=%d b=%d\n",a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("After swapping: a=%d b=%d",a,b);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("Before swapping: a=%d b=%d\n",a,b);
//     a = a+b; 
//     b = a-b; 
//     a = a-b; 
//     printf("After swapping: a=%d b=%d",a,b);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num1, num2, num3, greatest;
//     printf("Enter the three numbers:\n");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     greatest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3)? num2 : num3);
//     printf("Greatest number: %d",greatest);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int num1, num2, num3;
//     printf("Enter the three numbers: \n");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     if (num1 > num2 && num1 > num3){
//         printf("%d is the greatest",num1);
//     }
//     else if(num2 > num1 && num2 > num3){
//         printf("%d is the greatest",num2);
//     }
//     else{
//         printf("%d is the greatest",num3);
//     }
//     return 0;
// }

// #include  <stdio.h>

// int main(){
//     char ch;
//     printf("Enter an alphabet:\n");
//     scanf("%c",&ch);
//     switch(ch){
//         case 'a': case 'e': case 'i': case 'o': case 'u':
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//         printf("%c is a vowel\n",ch);
//         break;
//     default:
//     printf("%c is a consonant",ch);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     switch ((num > 0) - (num < 0)) {
//         case 1:
//             printf("The number is positive\n");
//             break;
//         case -1:
//             printf("The number is negative\n");
//             break;
//         case 0:
//             printf("The number is zero\n");
//             break;
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int n, sum=0, i=1;
//     printf("Enter the value of n:\n");
//     scanf("%d",&n);
//     while (i<=n){
//         sum+=i;
//         i++;
//     }
//     printf("The sum of first %d natural numbers is: %d",n,sum);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int num, temp, digit, sum = 0, order = 0;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     temp = num;
//     while (temp > 0) {
//         order++;
//         temp /= 10;
//     }

//     temp = num;
//     while (temp > 0) {
//         digit = temp % 10;
//         sum += (int)(pow(digit, order) + 0.5);
//         temp /= 10;
//     }
//     if (sum == num) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, a = 0, b = 1, c;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num, digit, numcount=0,temp,new=0;
//     scanf("%d",&num);
//     temp=num;
//     while (temp>0){
//         digit=temp%10;
//         numcount++;
//         temp/=10;
//         new=new *10 + digit;
//     }
//     printf("There are %d digits in %d\n",numcount,num);
//     printf("Reversed number is %d",new);
//     return 0;
// }


