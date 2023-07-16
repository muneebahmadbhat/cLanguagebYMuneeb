#include<stdio.h>
int main (){
    char input;
    float kmsToMiles=0.621371;
    float inchestofoot=0.0833333;
    float cmtoinches=0.393701;
    float poundtokgs=0.453592;
    float inchestometer=0.0254;
    float first,second;
    while (1)
    {
        printf ("enter q to quit the program\n   1.kmstomiles\n      2.inchestofoot\n      3.cmtoinches\n  4.poundtokgs\n    5.inchestometer\n");
        scanf (" %c",&input);
        switch (input)
        {
        case 'q':
            printf("quitting the program");
            goto end;
            break;
        case '1':
        printf("enter the quantity of firstunit");
        scanf ("%f" , &first);
        second=first*kmsToMiles;
        printf ("%f km is equal to %f miles\n",first,second);
        break;
        case '2':
        printf("enter the quantity of firstunit");
        scanf ("%f",&first);
        second=first*inchestofoot;
        printf ("%f inches is equal to %f foot\n",first,second);
        break;
        case '3':
        printf("enter the quantity of firstunit");
        scanf ("%f",&first);
        second=first*cmtoinches;
        printf ("%f cm is equal to %f inches\n",first,second);
        break;
        case '4':
        printf("enter the quantity of firstunit");
        scanf ("%f",&first);
        second=first*poundtokgs;
        printf ("%f pound is equal to %f kgs\n",first,second);
        break;
        case '5':
        printf("enter the quantity of firstunit");
        scanf ("%f",&first);
        second=first*inchestometer;
        printf ("%f inches is equal to %f meter\n",first,second);
        break;
        default:
            break;
        }
    }
end:    
    return 0;
}