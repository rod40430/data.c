#include <stdio.h>

int main(void)
{
  float cups;
    float pint;
    float ounces;
    float tablespoons;
    float teaspoons;
 
    printf("cups를 입력하십시오 : ");
    scanf("%f", &cups);
 
    pint = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;
 
    printf("pint = %f\n", pint);
    printf("ounces : %f\n", ounces);
    printf("tablespoons : %f\n", tablespoons);
    printf("teaspoons : %f\n", teaspoons);
  return 0;
}