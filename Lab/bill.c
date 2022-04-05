#include "base.h"

float bill(int u) {
    int sum =100;
    if(u<200) sum += u*0.8;
    
    if(u>=200 && u<300)sum += (u-200)*0.9 +200*0.8;
    if(u>=300) sum+= 200*0.8+100*0.9+(u-300);

    if(sum>400) sum*=1.15;


    if(sum < 100) sum = 100;

    return sum;
}

int main() {
    clear();

    int units = 460;
    printf("%.2f", bill(units));



    return 0;
}