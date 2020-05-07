#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void 
out(const int *ptr, int count)
{
    printf("Number list start, number %d:\n", count);
    while(count-->0) {
        printf("%d\n",*ptr);
        ptr++;
    }
    printf("Number list end.\n");
}

static void
sort(int *dst, int *A, int cnt)
{
    for (int j=1; j<cnt; j++)
    {
        int key = A[j];
        int i = j-1;
        while(i>=0 && A[i]>key) {
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
    }
}

int main(int argc, char *argv[])
{
    int count = 0;
    int *psrc = NULL;
    int *pdst = NULL;
    scanf("%d", &count);
    if(count <= 0)
        return -1;
    psrc = malloc(sizeof(int) * count);
    pdst = malloc(sizeof(int) * count);
    memset(psrc, 0, count);
    memset(pdst, 0, count);
    int *ptr = psrc;
    int c = count;
    while(c -- > 0) {
        scanf("%d", ptr++);
    }
    //
    out(psrc, count);
    //
    sort(pdst, psrc, count);
    //
    out(psrc, count);
    return 0;
}