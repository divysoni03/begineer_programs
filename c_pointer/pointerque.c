#include<stdio.h>
#include<stdlib.h>

//que 1

// void main(){
//     int m=10,n,o;
//     int *z;
//     z = &m;

//     printf("z stores the address of m = %u\n",z);
//     printf("*z stores the address of m = %d\n",*z);
//     printf("&m is the address of m = %u\n",&m);
//     printf("&n is the address of n = %u\n",&n);
//     printf("&o is the address of o = %u\n",&o);
//     printf("&z is the address of z = %u\n",&z);
// }

//que 2

// void main(){
//     int m=29,*ptr,*ab;
//     ptr = &m;
//     ab = &m;

//     printf("\naddress of m is %u",ptr);
//     printf("\nvalue of m is %d\n\n",*ptr);

//     printf("ab is assigned with the address of m.\n");
//     printf("address of m with 'ab' : %u\n",ab);
//     printf("value of m with ab : %d\n\n",*ab);

//     printf("now assign 34 to m.");
//     m=34;

//     printf("address of m with 'ab' : %u\n",ab);
//     printf("value of m with ab : %d\n\n",*ab);

//     printf("now assign 7 to m.");
//     m=7;

//     printf("address of m with 'ab' : %u\n",ab);
//     printf("value of m with ab : %d\n\n",*ab);
// }

//que 3

// void main(){
//     void *p1,*p2,*p3;

//     float fx=300.600006;
//     char cht= 'z';
//     int m=300;

//     p1=&m;
//     p2=&fx;
//     p3=&cht;


//     printf("Adress using & operater...\n");
//     printf("address of m : %u\n",&m);
//     printf("address of m : %u\n",&fx);
//     printf("address of m : %u\n",&cht);

//     // printf("Adress using & and * operater...\n");
//     // printf("address of m : %d\n",&m);
//     // printf("address of fx : %d\n",&fx);
//     // printf("address of cht : %d\n",&cht);

//     printf("\nAdress using pointer variable...\n");
//     printf("address of m : %d\n",p1);
//     printf("address of m : %d\n",p2);
//     printf("address of m : %d\n",p3);

//     printf("\nValue using pointer operater...\n");
//     printf("address of m : %d\n",*((int *)p1));
//     printf("address of m : %f\n",*((float *)p2));
//     printf("address of m : %c\n",*((char *)p3));
// }

//que 4

// void  main(){
//     int a=5,b=6,*p1=&a,*p2=&b;

//     printf("\na : %d , b : %d \nSum of two numbers : %d",a,b,*p1+*p2);
// }

//que 5

// void main(){
//     int a=5,b=6,*p1=&a,*p2=&b;

//     if(*p1>*p2) printf("%d is bigger then %d",*p1,*p2);

//     else printf("%d is bigger then %d",*p2,*p1); 
// }   

//que 6

// void main(){
//     int arr[5],*p=arr;

//     for (int i = 0; i < 5; i++){
//         printf("Element %d : ",i);
//         scanf("%d",&p[i]);
//     }
    
//     for (int i = 0; i < 5; i++){
//         printf("%d ,",p[i]);
//     }
    
// }

//que 7

// void main(){

// }

//que 8

// void main() {
//     int n, i ,*ptr,max;

//     printf("Enter how many numbers u want to enter : ");
//     scanf("%d", &n);

//     ptr = (int *)calloc(n,sizeof(int));
    
//     for (i = 0; i < n; i++) {
//         printf("Number %d: ", i + 1);
//         scanf("%d", &ptr[i]);
//     }

//     max = ptr[0];
//     for (i = 1; i < n; i++) {
//         if (ptr[i] > max) {
//             max = ptr[i];
//         }
//     }

//     printf("The Largest element is : %d\n", max);

// }

//que 9

// void main(){
//     int 
// }

