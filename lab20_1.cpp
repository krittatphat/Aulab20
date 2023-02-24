#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
double x = min(R1.w+R1.x,R2.w+R2.x)-max(R1.x,R2.x) ;
    double y = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h) ;
    if(x*y < 0) return 0 ;
    else return x*y ;
}
