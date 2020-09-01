////Q no 1
//
//#include <stdio.h>
//int main() {
//    int num;
//    printf("Enter an integer: ");
//    scanf("%d", &num);
//
//    // True if num is perfectly divisible by 2
//    if(num % 2 == 0)
//        printf("%d is even.", num);
//    else
//        printf("%d is odd.", num);
//    
//    return 0;
//}


// qno2
//#include <stdio.h>
//
//int main()
//{
//    int num;
//    
//    printf("Enter any number: ");
//    scanf("%d", &num);
//    
//
//    if(num > 0)
//    {
//        printf("Number is POSITIVE");
//    }
//    if(num < 0)
//    {
//        printf("Number is NEGATIVE");
//    }
//    if(num == 0)
//    {
//        printf("Number is ZERO");
//    }
//
//    return 0;
//}



// qno 3
//#include <stdio.h>
//void main()
//{       
//    int i,n,sum=0;
//	float avg;
//	printf("Input the 10 numbers : \n");
//	for (i=1;i<=10;i++)
//	{
//                printf("Number-%d :",i);
//
//		scanf("%d",&n);
//		sum +=n;
//	}
//	avg=sum/10.0;
//	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
// 
//}


// qno 5
//#include <stdio.h>
//void main()
//{
//   int j,n;
//   printf("Input the number (Table to be calculated) : ");
//   scanf("%d",&n);
//   printf("\n");
//   for(j=1;j<=10;j++)
//   {
//     printf("%d X %d = %d \n",n,j,n*j);
//   }
//} 

// qno 6
//#include <stdio.h>
//void main()
//{
//   int i,n,sum=0;
//
//   printf("Input number of terms : ");
//   scanf("%d",&n);
//   printf("\nThe odd numbers are :");
//   for(i=1;i<=n;i++)
//   {
//     printf("%d ",2*i-1);
//     sum+=2*i-1;
//   }
//   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
//}

// qno 7
//#include <stdio.h>
//
//void main()
//{
//   int i,n,sum=0;
//
//   printf("Input number of terms : ");
//   scanf("%d",&n);
//   printf("\nThe even numbers are :");
//   for(i=1;i<=n;i++)
//   {
//     printf("%d ",2*i);
//     sum+=2*i;
//   }
//   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
//} 

// qno 8
//#include <stdio.h>
//
//void main()
//{
//   int i,n,sum=0;
//   printf("Input the number of terms : ");
//   scanf("%d",&n);
//   printf("\nThe square natural upto %d terms are :",n);
//   for(i=1;i<=n;i++)
//   {
//     printf("%d  ",i*i);
//     sum+=i*i;
//   }
//   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
//}

// qno 9

//#include <stdio.h>
//
//void main()
//{
//   int prv=0,pre=1,trm,i,n;
//   printf("Input number of terms to  display : ");
//   scanf("%d",&n);
//   printf("Here is the Fibonacci series upto  to %d terms : \n",n);
//   printf("% 5d % 5d", prv,pre);
// 
//  for(i=3;i<=n;i++)
//   {
//     trm=prv+pre;
//     printf("% 5d",trm);
//     prv=pre;
//     pre=trm;
//   }
//   printf("\n");
//}

