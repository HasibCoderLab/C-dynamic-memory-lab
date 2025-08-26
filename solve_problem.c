// ================================================
//               * Language: C
//               * Topic: Dynamic Memory Allocation
// ===============================================

// 👉👉  🔹🔹  Question  1️⃣  WAP to allocate memory to store  5 prices


#include <stdio.h>
#include <stdlib.h>
int main(){
    float *ptr;
    ptr = (float * ) malloc(5* sizeof(float));
    ptr[0] = 10;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 41;
    ptr[4] = 21;

       for (int i = 0; i <=5; i++)
       {
        printf("%f\n" , ptr[i]);
       }
       
    return 0;
}















// 👉👉  🔹🔹  Question
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟