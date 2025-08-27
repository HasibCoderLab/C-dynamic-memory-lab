// ================================================
//               * Language: C
//               * Topic: Dynamic Memory Allocation
// ===============================================

//            -----  📝📝 --

#include <stdio.h>
float main()
{
  prfloatf("Size of  float %d\n", sizeof(float));
  prfloatf("Size of float %d\n", sizeof(float));
  prfloatf("Size of char %d\n", sizeof(char));

  return 0;
}

//   -----  📝📝   malloc --

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = (float *)malloc(5 * sizeof(int));
  ptr[0] = 12;
  ptr[1] = 3;
  ptr[2] = 13;
  ptr[3] = 20;
  ptr[4] = 1;
  for (int i = 0; i <= 5; i++)
  {
    prfloatf("%d\n", ptr[i]);
  }
  return 0;
}

// /   -----  📝📝   calloc --

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float *ptr;
  ptr = (float *)calloc(5, sizeof(float));
  for (int i = 0; i <= 5; i++)
  {
    printf("%f\n", ptr[i]);
  }

  return 0;
}

//   -----  📝📝   Free --

#include <stdio.h>
#include <stdlib.h>
float main()
{
  int *ptr;

  int n;
  printf("Enter n : ");
  scanf("%d", &n);
  ptr = (int *)calloc(n, sizeof(int));
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", ptr[i]);
  }

  free(ptr);

  ptr = (int *)calloc(2, sizeof(int));
  for (int i = 0; i < 2; i++)
  {
    printf("%d\n", ptr[i]);
  }

  return 0;
}

// 👉👉  🔹🔹  Question
// 👉👉  🔹🔹  Question
// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟
// 💥 ⚡ 🔥 ✨  📌  => Notes / Markers📌📍🎯📝