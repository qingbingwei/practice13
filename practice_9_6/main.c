#include <stdio.h>
#include <math.h>


int main()
{
    //第一题
    /*int n = 0; //求和次数
    int a = 0; //数字
    int i = 0;
    int sum = 0;
    int num = 10;
    scanf("%d %d",&n,&a);
    int tmp = a;
    for(i = 0;i < n;i++)
    {
        sum += a;
        a = tmp * pow(num,i +1) + a;
    }
    printf("%d\n",sum);*/

    //第二题
    /*int a = 1;
    int b = 1;
    int c = 2;
    int n = 0; //第几个月
    int i = 0;
    scanf("%d",&n);
    if(n <= 2)
    {
        printf("%d\n",a);
    }
    else
    {
        for(i = 0;i < n - 2;i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d\n",c);

    }*/

    //第三题
    float h = 0;//下落高度
    float o = 0;//到弹n次后所在高度时经过总距离
    int i = 0;
    int n = 0;
    scanf("%f %d",&h,&n);
    o += h;
    for(i = 0;i < n;i++)
    {
        h *= 0.5f;
        o=o+2*h;
    }
    o=o-h;
    printf("%.2f\n",h);
    printf("%.2f\n",o);

    return 0;
}
