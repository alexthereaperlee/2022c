# 2022c
資傳一程式設計的程式倉庫倉庫
#week01中秋節放假





# week06金字塔
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star= i*2-1;
    for()
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}
```

# week06星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star= i*2-1;
    for(int k=0; k<space; k++){
        printf(" ");
    }
    for(int k=0; k<star; k++){
        printf("*");
    }
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}
```
# week06約分
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d", ans);
}
```
# week06輾轉相除法
```cpp
#include <stdio.h>
int main()
{
   printf("請輸入2個數字:");
   int a, b, c;
   scanf("%d %d", &a, &b);

   while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
   }
   printf("中的是:%d", b);
}
```
# week06零迴圈
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(-0) printf("0不成立,所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西，幾乎都成立\n");
}
```
