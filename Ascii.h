#include "aryan.h"

#define vertical (char)186

#define horizontal (char)205

#define top_right (char)187

#define top_left (char)201

#define bottom_right (char)188

#define bottom_left (char)200

#define block (char)219

#define divider_top (char)203

#define divider_bottom (char)202

#define divider_left (char)204

#define divider_right (char)185

#define divider_mid (char)206

#define arrow_up 72
#define arrow_down 80
#define enter 13
void A(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);cout<<block<<block<<block<<block;
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);pxy(x+4,y+4);	
}
void B(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);cout<<block<<block<<block;
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block;
	
}
void C(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);
	pxy(x,y+2);
	pxy(x,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;	
}
void D(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block;
}
void E(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);
	pxy(x,y+2);cout<<block<<block<<block;
	pxy(x,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}
void F(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);
	pxy(x,y+2);cout<<block<<block<<block;
	pxy(x,y+3);
	pxy(x,y+4);	
}
void G(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);
	pxy(x,y+2);pxy(x+3,y+2);cout<<block;
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;	
}
void H(int x,int y)
{
	pxy(x,y);pxy(x+4,y);
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);cout<<block<<block<<block<<block;
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);pxy(x+4,y+4);	
}
void I(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x+2,y+1);
	pxy(x+2,y+2);
	pxy(x+2,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;	
}
void J(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x+2,y+1);
	pxy(x+2,y+2);
	pxy(x,y+3);pxy(x+2,y+3);
	pxy(x,y+4);cout<<block<<block;	
}
void K(int x,int y)
{
	pxy(x,y);pxy(x+3,y);
	pxy(x,y+1);pxy(x+2,y+1);
	pxy(x,y+2);cout<<block;
	pxy(x,y+3);pxy(x+2,y+3);
	pxy(x,y+4);pxy(x+3,y+4);
}
void L(int x,int y)
{
	pxy(x,y);
	pxy(x,y+1);
	pxy(x,y+2);
	pxy(x,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}
void M(int x,int y)
{
	pxy(x,y);cout<<block;pxy(x+3,y);cout<<block;
	pxy(x,y+1);pxy(x+2,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+2,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);pxy(x+4,y+4);	
}
void N(int x,int y)
{
	pxy(x,y);cout<<block<<block;pxy(x+4,y);
	pxy(x,y+1);pxy(x+2,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+2,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+2,y+3);pxy(x+4,y+3);
	pxy(x,y+4);pxy(x+2,y+4);cout<<block<<block;	
}
void O(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}
void P(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);cout<<block<<block<<block<<block;
	pxy(x,y+3);
	pxy(x,y+4);	
}
void Q(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
	pxy(x+3,y+5);
}
void R(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);cout<<block<<block<<block<<block;
	pxy(x,y+3);pxy(x+3,y+3);
	pxy(x,y+4);pxy(x+4,y+4);	
}
void S(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x,y+1);
	pxy(x,y+2);cout<<block<<block<<block<<block;
	pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}
void T(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x+2,y+1);
	pxy(x+2,y+2);
	pxy(x+2,y+3);
	pxy(x+2,y+4);
}
void U(int x,int y)
{
	pxy(x,y);pxy(x+4,y);
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}
void V(int x,int y)
{
	pxy(x,y);pxy(x+4,y);
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+4,y+2);
	pxy(x+1,y+3);pxy(x+3,y+3);
	pxy(x+2,y+4);
}
void W(int x,int y)
{
	pxy(x,y);pxy(x+4,y);
	pxy(x,y+1);pxy(x+4,y+1);
	pxy(x,y+2);pxy(x+2,y+2);pxy(x+4,y+2);
	pxy(x,y+3);pxy(x+2,y+3);pxy(x+4,y+3);
	pxy(x,y+4);cout<<block;pxy(x+3,y+4);cout<<block;
}
void X(int x,int y)
{
	pxy(x,y);  pxy(x+4,y);
	pxy(x+1,y+1);pxy(x+3,y+1);
	pxy(x+2,y+2);
	pxy(x+1,y+3);pxy(x+3,y+3);
	pxy(x,y+4);pxy(x+4,y+4);
}
void Y(int x,int y)
{
	pxy(x,y);  pxy(x+4,y);
	pxy(x+1,y+1);pxy(x+3,y+1);
	pxy(x+2,y+2);
	pxy(x+2,y+3);
	pxy(x+2,y+4);
}
void Z(int x,int y)
{
	pxy(x,y);cout<<block<<block<<block<<block;
	pxy(x+3,y+1);
	pxy(x+2,y+2);
	pxy(x+1,y+3);
	pxy(x,y+4);cout<<block<<block<<block<<block;
}

void filler(int startx,int starty,int endx,int endy,int color=7)
{
	setColor(color);
    for(int y=starty;y<=endy;++y)
    {
        for(int x=startx;x<=endx;++x)
        {
            xy(x,y);cout<<block;
        }
    }
    setColor(7);
}