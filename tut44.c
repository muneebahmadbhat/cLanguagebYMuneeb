#include <stdio.h>
#include <string.h>
typedef struct travelagency {
char name[30];
int drivinglicenseno[10];
char route[15];
int kms [23];
}tray;
int main (){
    int n;
    tray d1,d2,d3;
    printf("Enter the  details of the driver\n");
    printf ("Enter the name of the First driver\n");
    gets(d1.name);
    printf ("Enter the Driving License No of the first driver\n");
    gets (d1.drivinglicenseno);
    printf ("Enter the Route which is followed by first driver\n");
    gets (d1.route);
    printf ("Enter how many kilometers has been covered by first driver\n");
    gets (d1.kms);
    printf ("Enter the name of the second driver\n");
    gets(d2.name);
    printf ("Enter the Driving License No of the second driver\n");
    gets (d2.drivinglicenseno);
    printf ("Enter the Route which is followed by second driver\n");
    gets (d2.route);
    printf ("Enter how many kilometers has been covered by second driver\n");
    gets (d2.kms);
    printf ("Enter the name of the third driver\n");
    gets(d3.name);
    printf ("Enter the Driving License No of the third driver\n");
    gets (d3.drivinglicenseno);
    printf ("Enter the Route which is followed by third driver\n");
    gets (d3.route);
    printf ("Enter how many kilometers has been covered by third driver\n");
    gets (d3.kms);
    
    return 0;
}




























































// int main (){
//     tray d1,d2,d3;
// printf ("\n");
//     puts ("INformation of first driver\n");
//     strcpy(d1.name,"Ghulam Muhammad");
//     d1.drivinglicenseno=1446747854;
//     strcpy(d1.route,"Vidhan Sabha");
//     d1.kms=5.8;
//     printf ("The name of the first driver is %s\n",d1.name);
//     printf ("The driving license no of %s is %d\n",d1.name,d1.drivinglicenseno);
//     printf ("The Route of the first driver is %s\n",d1.route);
//     printf ("The first driver has covered the total kms of %f\n",d1.kms);
// printf ("\n");
//     puts ("INformation of second driver\n");
//     strcpy(d2.name,"Bashir Ahmad");
//     d2.drivinglicenseno=0146747754;
//     strcpy(d2.route,"Nehru Park");
//     d2.kms=8.8;
//     printf ("The name of the second driver is %s\n",d2.name);
//     printf ("The driving license no of %s is %d\n",d2.name,d2.drivinglicenseno);
//     printf ("The Route of the second driver is %s\n",d2.route);
//     printf ("The second driver has covered the total kms of %f\n",d2.kms);
//     printf ("\n");
//     puts ("INformation of third driver\n");
//     strcpy(d3.name,"Fayaz Takkar");
//     d3.drivinglicenseno=023455735;
//     strcpy(d3.route,"Chatterpur");
//     d3.kms=10.8;
//     printf ("The name of the third driver is %s\n",d3.name);
//     printf ("The driving license no of %s is %d\n",d3.name,d3.drivinglicenseno);
//     printf ("The Route of the third driver is %s\n",d3.route);
//     printf ("The third driver has covered the total kms of %f",d3.kms);
//     return 0;
// }