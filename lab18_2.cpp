#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
    double w,h,A;
	w =min(R1->x+R1->w,R2->x+R2->w)-max(R1->x,R2->x);
	h =min(R1->y,R2->y)-max(R1->y-R1->h,R2->y-R2->h);
	if(w<0 || h<0) return 0;
	A =w*h; 
	return A;
}