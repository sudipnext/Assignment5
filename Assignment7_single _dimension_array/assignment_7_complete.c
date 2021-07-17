// 1.WAP to read 10 elements in an array and calculate the sum and average of all elements.
// #include<stdio.h>
// int main(){
//     int arr[9];
//     int sum =0;
//     int average;
//     for (int i =0; i< 10; i++){
//         printf("Enter your %d number:-", i+1);
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//         average = sum/10;
//     }
//     printf("The sum of array is %d and average is %d  \n", sum, average);
// return 0;
// }

// 2.WAP to read 10 elements in an array and count the occurrence of odd and even numbers.
// #include <stdio.h>
// int main(){
//    int a[9],i,even=0,odd=0;

//     for(i=0; i<10; i++)
//     {
//         printf("Enter %d element in array : ", i+1);
//         scanf("%d",&a[i]);
//     }

//      for(i=0; i<10; i++)
//     {
//           if(a[i]%2==0)
//           even++;
//           else
//           odd++;

//     }
//      printf("even numbers in array: %d",even);
//      printf("\n odd numbers in array: %d",odd);

//     return 0;
// }
// 3.WAP to read 10 elements in an array and copy all the elements to another array.
// #include <stdio.h>
// int main(){
//     int from[10], destiny[10], i;
//      printf("Enter the numbers :- ");
//     for (i=0; i< 10; i++){
//         scanf("%d", &from[i]);
//     }
//     for (i=0; i< 10; i++){
//         destiny[i] = from[i];
//     }
//     printf("\nElement in first array\n");
//     for (i=0; i< 10; i++)
//     {
//         printf("%d\t", from[i]);
//     }
//     printf("\nElements in second array\n");
//     for (i=0; i< 10; i++){
//         printf("%d\t", destiny[i]);
//     }
//     return 0;
// }

// 4.WAP to read 10 elements in an array and copy all the elements in reverse order to an another array.
// #include<stdio.h>
// int main(){
//     int arr[10], i,j, rev[10];
//     for(i=0; i<10; i++){
//         printf("Enter the %d element:- ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The reversed array is:- ");
//      for(i=0, j=9; i<=0, j>=0; i++, j--){
//         rev[j]= arr[i];
//     }
//     for(j=0; j<10; j++){
//         printf("%d ", rev[j]);
//     }

//     return 0;

// }
// 5.WAP to separate odd and even integers in separate arrays.
// #include <stdio.h>
// int main()
// {

//    int  i, odd[10], even[10], arr[10], x = 0, w = 0;
   
//    for (i = 0; i < 10; i++)
//    {
//       printf("Enter %d number:- ", i + 1);
//       scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < 10; i++)
//    {
//       if (arr[i] % 2 == 0)
//       {
//          odd[x] = arr[i];
//          x++;
//       }
//       else
//       {
//          even[w] = arr[i];
//          w++;
//       }
//    }
//    printf("The odd numbers are :- ");
//    for (i = 0; i < x; i++)
//    {
//       printf("%d ", odd[i]);
//    }
//    printf("\n The even numbers are:- ");
//    for (i = 0; i < w; i++)
//    {
//       printf("%d ", even[i]);
//    }
// }

// 6.WAP to read 10 elements in an array and search for a particular number among the array list.
// #include <stdio.h>
// int main(){
//    int arr[10],i, search, stop;
//    for(i=0; i<10; i++){
//       printf("Enter the %d number:- ", i+1);
//       scanf("%d", &arr[i]);
//    }
//    printf("Enter a number you want to search :- ");
//    scanf("%d", &search);
//    printf("Searching for %d in the array!\n", search);
//    for(i=0; i<10; i++){
//       if(arr[i] == search){
//          stop=1;
//          break;
//       }
//    }
//    if(stop==1){
//       printf("Found sucessfully!");
//    }else{
//       printf("Not found!");
//    }
//    return 0;
// }
// 7.WAP to read 10 elements in an array and find the maximum.
// #include <stdio.h>
// int main(){
//    int arr[10],i,max, locate;
//    for(i=0; i<10; i++){
//       printf("Enter the %d number", i+1);
//       scanf("%d", &arr[i]);
//    }
//    max= arr[0];
//    for (i=0; i<10; i++){
//       if(arr[i]> max){
//          max= arr[i];
//          locate = i+1;
//       }
//    }
//    printf("The max value in array is %d and located ate %d position\n", max, locate);
//    return 0;
// }
//8.WAP to read 10 elements in an array and find the minimum.
// #include <stdio.h>
// int main(){
//    int arr[10],i, min, location;
//    for(i=0; i<10;i++){
//       printf("Enter the %d number:- ", i+1);
//       scanf("%d", &arr[i]);
//    }
//    min=arr[0];
//    for(i=0; i<10; i++){
//       if (arr[i]< min){
//          min=arr[i];
//          location = i+1;
//       }
//    }
//    printf("The minimum number is %d", min);
//    return 0;
// }
//9.WAP to count the frequency of each element of an array.
// #include<stdio.h>
// int main(){
//    int i,n, arr[n], count,j, count2;
//    printf("Enter the no of array you want to make: ");
//    scanf("%d", &n);
//    for (i=0; i<n; i++){
//       printf("Enter the %d number of array", i+1);
//       scanf("%d", &arr[i]);
//    }
//    for(i=0; i<n; i++){
//       count=0;
//       for(j=0; j<n; j++){
//          if (arr[i]==arr[j]){
//             count++;
//          }
//       }
//       count2=0;
//       for (j=0; j<i; j++){
//          if(arr[i]==arr[j]){
//             count2++;
//          }
//       }
//       if(count2 < 2)
//       printf("The frequency of %d is %d\n", arr[i], count);

//    }	     
//  	return 0;
// }
// 10.WAP to read 10 elements in an array and sort them in ascending order.
// #include<stdio.h>
// int main(){
//     int arr[10],i, j, empt;
//     printf("Enter the numbers:- ");
//     for(i=0; i<10; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<10; i++){
//         for(j=0; j<10; j++){
//             if(arr[i]< arr[j]){
//                 empt = arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= empt;
//             }
//         }

//     }
//     printf("\nThe numbers in ascending order is : ");
//     for(i=0;i<10;i++)
//     printf(" %d",arr[i]);
// }



// 11.WAP to read 10 elements in an array and sort them in descending order.
// #include<stdio.h>
// int main(){
//     int arr[10],i, j, empt;
//     printf("Enter the numbers:- ");
//     for(i=0; i<10; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(i=0; i<10; i++){
//         for(j=0; j<10; j++){
//             if(arr[j]< arr[i]){
//                 empt = arr[i];
//                 arr[i]= arr[j];
//                 arr[j]= empt;
//             }
//         }

//     }
//     printf("\nThe numbers in descending order is : ");
//     for(i=0;i<10;i++)
//     printf(" %d",arr[i]);
// }

// 12.WAP to insert New value in the array (sorted list ).
// #include <stdio.h>

// void main()
// {
//    int arr1[100],i,n,p,inval;
//        printf("\n\nInsert New value in the sorted array :\n");
//        printf("-----------------------------------------\n");

//     printf("Input the size of array : ");
//     scanf("%d", &n);
// /* Stored values into the array*/
//        printf("Input %d elements in the array in ascending order:\n",n);
//        for(i=0;i<n;i++)
//             {
// 	      printf("element - %d : ",i);
// 	      scanf("%d",&arr1[i]);
// 	    }
//    printf("Input the value to be inserted : ");
//    scanf("%d",&inval);
//    printf("The exist array list is :\n ");
//    for(i=0;i<n;i++)
//       printf("% 5d",arr1[i]);   
//    /* Determine the position where the new value will be insert.*/
//    for(i=0;i<n;i++)
//      if(inval<arr1[i])
//      {
//        p = i;
//        break;
//      }
//    /* move all data at right side of the array */
//    for(i=n;i>=p;i--)
//       arr1[i]= arr1[i-1];
//    /* insert value at the proper position */
//       arr1[p]=inval;
   
//       printf("\n\nAfter Insert the list is :\n ");
//    for(i=0;i<=n;i++)
//       printf("% 5d",arr1[i]);
// 	  printf("\n");
// }