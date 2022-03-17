//Simple Clock
#include<stdio.h>
#include<windows.h> 

int main()
{
    int h,m,s;
    int d=1;
    printf("Set time : \n");
    scanf("%d%d%d",&h,&m,&s);

    if(h>12 || m>60 || s>60)
    {
        printf("ERROR! \n");
        exit(0);
    }
    while(1)//infinite loop where anything inside it will repeat upto infinity
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;

        
        if(m>59)
        
            h++;
            m=0;
        
        if(h>12)
        
            h=1;
        }
        printf("\n Clock:");
        printf("\n %02d:%02d:%02d",h,m,s);//for the format 00:00:00

        sleep(d);//slows down the while loop and make it more like an actual clock
        system("cls");//clears the screen
    }

}