/**Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
Вывести название соответствующего времени года («зима», «весна», «лето», «осень»).**/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    switch (n) {
        default:
            printf("Диапазон чисел 1-12");
            break;
        case 12:
        case 1:
        case 2:
            printf("winter");
            break;
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("autumn");
            break;
    }

    return 0;
}