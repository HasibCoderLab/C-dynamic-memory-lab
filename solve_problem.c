// ================================================
//               * Language: C
//               * Topic: Dynamic Memory Allocation
// ===============================================

// 👉👉  🔹🔹  Question  1️⃣  WAP to allocate memory to store  5 prices


// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     float *ptr;
//     ptr = (float * ) malloc(5* sizeof(float));
//     ptr[0] = 10;
//     ptr[1] = 2;
//     ptr[2] = 3;
//     ptr[3] = 41;
//     ptr[4] = 21;

//        for (int i = 0; i <=5; i++)
//        {
//         printf("%f\n" , ptr[i]);
//        }
       
//     return 0;
// }

// 👉👉  🔹🔹  Question  2️⃣ WAP to allocate memory  of size n , where entered by the user 


// #include <stdio.h>
// #include <stdlib.h>
// float main(){
//   int   *ptr ;
//   int n;
//   printf("Enter n  : ");
//    scanf("%d" , &n);

//    ptr = (int *) calloc(n , sizeof(int));

//    for (int  i = 0; i <n; i++)
//    {
//    printf("%d\n" , ptr[i]);
//    }
   


//     return 0;
// }




// 👉👉 🔹🔹 Question 3️⃣  free the memoru allocated  with calloc



// 👉👉 🔹🔹 Question  4️⃣   Allocated  memory for 5  numbers  then dynamically  increase it  to 8 numbers


#include <stdio.h>
#include <stdlib.h>
float main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 Numbers");
    for (int i = 0; i <5; i++)
    {
        scanf("%d" , &ptr[i]);
        
    }

    ptr =   realloc(ptr ,8); 
    printf("Enter 8  Numbers : ");
    for(int i = 0 ; i< 8 ; i++){
        scanf("%d" , &ptr[i]);
    } 
    
    // print
    for (int i = 0; i < 8; i++)
    {
       printf("Number %d ,is  %d\n" , i , ptr[i]);
    }
    
    return 0;
}

      
// #include <stdio.h>
// #include <stdlib.h>
// float main(){
//     return 0;
// }



// 👉👉  🔹🔹  Question
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟