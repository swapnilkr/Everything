//https://www.facebook.com/permalink.php?story_fbid=2750473708542571&id=100007399066161
Subscribed by tharindu Rewatha

#include <stdlib.h>
#include <iostream.h>
#include <math.h>
#include <conio.h>

void main()
{
cout<<"	Quadratic Equation Calculator"<<endl<<"	by WWW"<<endl<<endl;
float a,b,c,x,y;
cout<<"	Equation must be in the form of ax²+bx+c=0"<<endl<<endl;
cout<<"		Please enter the value of a: ";
cin>>a;
cout<<"		Please enter the value of b: ";
cin>>b;
cout<<"		Please enter the value of c: ";
cin>>c;
x=((-b+sqrt((b*b)-(4.0*a*c)))/(2.0*a));
y=((-b-sqrt((b*b)-(4*a*c)))/(2*a));


clrscr();
cout<<"HERE IS THE SOLUTION USING FACTORISATION


";
cout.setf(ios::showpos);
float mul=(x*-1)*(y*-1);
cout<<"		x²"<<(y*-1)+(x*-1)<<"x"<<mul<<"=0
";
cout<<"		x²"<<y*-1<<"x"<<x*-1<<"x"<<(x*-1)*(y*-1)<<"=0
"; //
x²+2x-1x-2=0
cout<<"		x(x"<<y*-1<<")"<<x*-1<<"(x"<<y*-1<<")=0
"; // x(x+2)-1(x+2)
cout<<"		(x"<<x*-1<<")(x"<<y*-1<<")=0

";  // (x-1) (x+2)=0
cout.unsetf(ios::showpos);
cout<<"		x="<<x<<"   &  x="<<y<<"
";

exit(EXIT_SUCCESS);
}
