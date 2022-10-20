#include <stdio.h>
#include <windows.h>
// struct Stu
// {
//     int id;
//     char arr[20];
// };
// struct T
// {
//     int id;
//     struct Stu stu;
// };

// void Printf1(struct T t){
//     printf("id      :%d\n",t.id);
//     printf("t.id    :%d\n",t.stu.id);
//     printf("t.arr   :%s\n",t.stu.arr);
// }

// void Printf2(struct T* t){
//     printf("id      :%d\n",t->id);
//     printf("t.id    :%d\n",t->stu.id);
//     printf("t.arr   :%s\n",t->stu.arr);
// }

// int main(){
//     struct T t = {1,{2,"hello world"}};
//     Printf1(t);
//     Printf2(&t);
//     return 0;
// }
// Made By YUHE

// int main(){
//     char a = 127;
//     printf("127的输出是:%u",a);
//     return 0;
// }

// int main(){
//     unsigned int i;
//     for(i=9;i>=0;i--){
//         Sleep(1000);
//         printf("%u\n",i);
//         fflush(stdout);
//     }
//     return 0;
// }

// int main()
// {
//     char a[1000];
//     int i;
//     for (i = 0; i < 1000; i++)
//     {
//         a[i] = -1 - i;
//         printf("%d ", a[i]);
//     }
//     printf("\n%d", strlen(a));
//     return 0;
// }

// int main()
// {
//     float f = 5.5;
//     printf("%u", &f);
//     return 0;
// }

int main()
{
    // float p = 9.0;
    char p1[] = "abcdef";
    char p2[] = "abcdef";
    if (p1 == p2)
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }
}
// ceshi1