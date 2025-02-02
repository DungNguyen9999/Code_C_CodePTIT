#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef long long ll;
#define mx 100005
int CHECK = 0;

struct SinhVien
{
    int mts;
    char ten[1005];
    char ngaysinh[1005];
    double diem1, diem2, diem3;
    double tongdiem;
};
typedef struct SinhVien sinhvien;

sinhvien a[10005];

int cmp(const void *a, const void *b)
{
    sinhvien *x = (sinhvien*)a;
    sinhvien *y = (sinhvien*)b;
    if(x -> tongdiem != y -> tongdiem)
        return y -> tongdiem - x -> tongdiem;
    else
        return x -> mts - y -> mts;
}

void solution()
{
    int n;
    scanf("%d",&n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        a[i].mts = i + 1;
        gets(a[i].ten);
        gets(a[i].ngaysinh);
        scanf("%lf%lf%lf",&a[i].diem1,&a[i].diem2,&a[i].diem3);
        a[i].tongdiem = a[i].diem1 + a[i].diem2 + a[i].diem3;
        getchar();
    }
    qsort(a,10005,sizeof(struct SinhVien),cmp);
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %s %.1lf",a[i].mts,a[i].ten,a[i].ngaysinh,a[i].tongdiem);
        printf("\n");
    }
}

int main()
{
    int t;
    if(CHECK)
    {
        scanf("%d",&t);
        getchar();
    }
    else    t = 1;
    while(t--)
    {
        solution();
    }
}

