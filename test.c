#include "alarmClock.c"

int main() 
{
    int n;
    printf("Nhap so lan bat tat: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    alarmClock(a, n);

    return 0;
}