// ================================================
//               * Language: C
//               * Topic: Dynamic Memory Allocation
// ===============================================

//            -----  📝📝 --

// #include <stdio.h>
// int main(){
//     printf("Size of  int %d\n" ,sizeof(int));
//     printf("Size of float %d\n" , sizeof(float));
//     printf("Size of char %d\n" , sizeof(char));

//     return  0;
// }

//   -----  📝📝   malloc --

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr ;
    ptr = (int *) malloc(5* sizeof(int));
    ptr[0] = 12;
    ptr[1] = 3;
    ptr[2] = 13;
    ptr[3] = 20;
    ptr[4] = 1;
    for(int i = 0 ; i<=5; i++){
        printf("%d\n" , ptr[i]);
    }
    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     return 0;
// }









// 👉👉  🔹🔹  Question  
// 👉👉  🔹🔹  Question
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟
// 💥 ⚡ 🔥 ✨  📌  => Notes / Markers📌📍🎯📝