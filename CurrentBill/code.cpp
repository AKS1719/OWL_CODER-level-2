#include<bits/stdc++.h>
using namespace std;
int main()
{
    int units;
    cin>>units;
    double amt;
        
        if(units<200){
            amt=units*1.20;
            if(amt>400){
                amt=amt+0.15*amt;
            printf("%.2f",amt);
            }
            else{
                printf("%.2f",amt+100);
            }
        }
        else if(units>=200 && units<400){
            amt=units*1.50;
            if(amt>400){
                amt=amt+0.15*amt;
            printf("%.2f",amt);
            }
            else{
                printf("%.2f",amt+100);
            }
        }
        else if(units>=400 && units<600){
            amt=units*1.80;
            if(amt>400){
                amt=amt+0.15*amt;
            printf("%.2f",amt);
            }
            else{
                printf("%.2f",amt+100);
            }
        }
        else{
            amt=units*2.00;
            
            if(amt>400){
                amt=amt+0.15*amt;
                printf("%.2f",amt);
            }
            else{
            amt=amt+100;
            printf("%.2f",amt);
            }
}
}
