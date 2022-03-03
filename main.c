#include <stdio.h>
#include <windows.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main() {
    printf("------------------------------ 1 -----------------------------\n");
    int one,two,three,four,five,multiplication,division,addition;
    Beep(1200,600);
    printf("Enter Number One : ");
    scanf("%d",&one);
    Beep(1200,600);
    printf("\n \n Enter Number Two : ");
    scanf("%d",&two);
    Beep(1200,600);
    printf("\n \n Enter Number Three : ");
    scanf("%d",&three);
    Beep(1200,600);
    multiplication = one*two*three;
    printf("\n \n multiplication : * %d * ",multiplication);
    printf("\n------------------------------ 2 -----------------------------\n");
    Beep(1200,400),Beep(1200,400), Beep(1200,400);
    printf("Enter Number One : ");
    scanf("%d",&one);
    Beep(1200,400),Beep(1200,400), Beep(1200,400);
    printf("\n \n\n\n Enter Number Two : ");
    scanf("%d",&two);
    Beep(1200,400),Beep(1200,400), Beep(1200,400);
    division = one/two;
    printf("\n \n\n\n division : &&& %d $$$",division);
    Beep(1200,400),Beep(1200,400), Beep(1200,400);
    printf("\n------------------------------ 3 -----------------------------\n");
    printf("#---#---#---#---#");
    printf("\n------------------------------- 4 ----------------------------\n");
    printf("Enter Number One : ");
    scanf("%d",&one);
    printf("\n Enter Number Two : ");
    scanf("%d",&two);
    printf("\n Enter Number Three : ");
    scanf("%d",&three);
    printf("\n Enter Number Four : ");
    scanf("%d",&four);
    printf("\n Enter Number Five : ");
    scanf("%d",&five);
    addition = one+two+three+four+five;
    printf("\n addition  :  %d .",addition);
    printf("\n------------------------------ 5 -----------------------------\n");
    printf("@---@---@---@---@");
    return 0;
}
