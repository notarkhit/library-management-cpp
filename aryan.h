#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<iomanip>
#include<math.h>
#include<time.h>
#include<conio.h>


#define def 7
#define up 72
#define down 80
#define enter 13
#define password "incorrect"

using namespace std;



void prn(const char* output)
{
	cout<<output;
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}



void xy(int x,int y)
{
COORD coord={0,0};
coord.X=x;
coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }

void pxy(int x,int y,char ch=(char)219)
{
	xy(x,y);cout<<ch;
}

void setColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
            wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
            SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

//project functions:




int secure()
{
	int rval;
	char st1[10],st2[10];
	strcpy(st1,password);
	int i=0;
	while(1)
	{
		st2[i]=getch();prn("*");
	    ++i;
	    if(st2[i-1]==13)
	    {
	    	--i;
	    	st2[i]='\0';
	    	break;
		}
			
	}
	if(strcmp(st1,st2)==0)
	{
		rval=1;
	}
	else 
	    rval=0;
	    
 return rval;
}

//timexy
void timexy(int x,int y) 
{ xy(x,y);
setColor(10);
    time_t s, val = 1; 
    struct tm* current_time; 
    while(1)
	{
	s = time(NULL); 
    current_time = localtime(&s);
	 if(current_time->tm_hour>12)current_time->tm_hour-=12;
    printf("%02d:%02d:%02d", 
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec); 
	delay(1);xy(x,y);
	}
   
} 

 
