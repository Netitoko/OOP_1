/**Дано целое число в диапазоне 1–7. 
Вывести строку — название дня недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.). **/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    switch(n) {
    default:
        printf("Число должно быть в диапазоне 1-7");
        break;
    case 1:
        printf("Понедельник");
        break;
    case 2:
        printf("Вторник");
        break;
    case 3:
        printf("Среда");
        break;
    case 4:
        printf("Четверг");
        break;
    case 5:
        printf("Пятница");
        break;
    case 6:
        printf("Суббота");
        break;
    case 7:
        printf("Воскресенье");
        break;
    }

    return 0;
}