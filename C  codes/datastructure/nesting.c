#include <stdio.h>
#include <string.h>
int main (){
    typedef struct batsman{
        int six;
        int four;
        int runs;
    }bat;

    typedef struct wicketkeeperbatsman{
        bat wicket;
        int stumping;
    }wkbat;

    typedef struct allrounder{
        wkbat all;
        int bold;
        int lbw;
    }allr;

    wkbat msd;
    msd.wicket.six = 350;
    msd.stumping = 250;

    allr rja;
    rja.all.wicket.four = 140;
    rja.bold = 210;

    printf("%d\n",msd.wicket.six);
    printf("%d\n",rja.all.wicket.four);
    printf("%d",rja.bold);
    return 0;
}