/*
write a c program using structs which defines students. find the biggest grade age ratio.
*/
#include <stdio.h>
#include <string.h>
struct student{
        int age;
        int grade1;
        int grade2;
};
int main()
{
    int i,j,k,l;
    float ratio[3];
    struct student kevin, mehmet, ali;
    kevin.age=17;
    kevin.grade1=100;
    kevin.grade2=85;
    mehmet.age=18;
    mehmet.grade1=90;
    mehmet.grade2=16;
    ali.age=19;
    ali.grade1=27;
    ali.grade2=34;
    printf("kevin.age=%d, kevin.grade1=%d,kevin.grade2=%d\n",kevin.age,kevin.grade1,kevin.grade2);
    printf("mehmet.age=%d, mehmet.grade1=%d,mehmet.grade2=%d\n",mehmet.age,mehmet.grade1,mehmet.grade2);
    printf("ali.age=%d, ali.grade1=%d,ali.grade2=%d\n",ali.age,ali.grade1,ali.grade2);
    ratio[0]=kevin.grade1+kevin.grade2;
    ratio[0]=(kevin.age)/ratio[0];
    ratio[1]=mehmet.grade1+mehmet.grade2;
    ratio[1]=(mehmet.age)/ratio[1];
    ratio[2]=ali.grade1+ali.grade2;
    ratio[2]=(ali.age)/ratio[2];
    for(l=0 ; l<3 ; l++){
        //printf("%.2f ", ratio[l]);
    }
    printf("\n");
    for(j=0 ; j<2 ; j++){
        for(k=0 ; k<3 ; k++){
            if(ratio[k]<ratio[k+1]){
                ratio[k]=ratio[k]+ratio[k+1];
                ratio[k+1]=ratio[k]-ratio[k+1];
                ratio[k]=ratio[k]-ratio[k+1];
            }
        }
    }
    for(l=0 ; l<3 ; l++){
        //printf("%.2f ", ratio[l]);
    }
    printf("%.2f",ratio[0]);
    return 0;
}
