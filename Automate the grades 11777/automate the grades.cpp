#include<iostream>
using namespace std;

class result
{
    int t1,t2,fin,att,ct1,ct2,ct3,sum,avgct;
    char grade;

public:
    int findavg(int x,int y,int z)
{
    int average;
    int max1,max2;


    if((x>=y&&y>=z)||(z<=x&&x<=y))
    {
        max1=x;
        max2=y;

    }
    else if((y>=z&&z>=x)||(x<=y&&y<=z))
    {
        max1=z;
        max2=y;

    }
    else if((x>=z&&z>=y)||(y<=x&&x<=z))
    {
        max1=x;
        max2=z;
    }



    average=(max1+max2)/2;

    return average;
}

};
