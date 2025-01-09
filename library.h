#include "Ascii.h"

void defaultt()
{
	setColor(7);
    I(57,13);S(63,13);S(69,13);U(75,13);E(81,13);
    D(51,21);E(57,21);P(63,21);O(69,21);S(75,21);I(81,21);T(87,21);
    A(33,29);D(39,29);M(45,29);I(51,29);N(57,29);I(63,29);S(69,29);T(75,29);R(81,29);A(87,29);T(93,29);O(99,29);R(105,29);   
    E(59,37);X(65,37);I(71,37);T(77,37);
}

int mainmenu()
{
	system("cls");
	filler(26,8,119,48,10);
	
	xy(26,8);cout<<top_left;
	xy(119,8);cout<<top_right;
	xy(26,48);cout<<bottom_left;
	xy(119,48);cout<<bottom_right;
	
	for(int x=27;x<119;++x)
	{
		xy(x,8);cout<<horizontal;
		xy(x,9);cout<<horizontal;
		xy(x,48);cout<<horizontal;
	  pxy(x,47,horizontal);
	}

	for(int y=9;y<48;++y)
	{
		xy(26,y);cout<<vertical;
		xy(119,y);cout<<vertical;
		xy(27,y);cout<<vertical;
		xy(118,y);cout<<vertical;
	}

	for(int x=59;x<84;++x)
	{
		pxy(x,10,horizontal);
	}

	pxy(58,9,top_right);
	pxy(58,10,bottom_left);
	pxy(84,9,top_left);
	pxy(84,10,bottom_right);
	xy(59,9);cout<<"LIBRARY MANAGEMENT SYSTEM";
	
  xy(27,9);cout<<top_left;
	xy(118,9);cout<<top_right;
	xy(27,47);cout<<bottom_left;
	xy(118,47);cout<<bottom_right;
	setColor(7);
    defaultt();setColor(4);
    I(57,13);S(63,13);S(69,13);U(75,13);E(81,13);
    setColor(7);
    M(44,1);A(50,1);I(56,1);N(62,1);
    M(74,1);E(80,1);N(86,1);U(92,1);;
   
	int opt=1,px,retval=0;
	char ch;
	while(1)
	{
		ch=getch();
		px=ch;
		switch(px)
		{
			case arrow_up:--opt;
			              if(opt<1)
			              opt=4;
			              break;
			case arrow_down:++opt;
			                if(opt>4)
			                opt=1;
			                break;
			case enter:retval=13;break;     
		}
		switch(opt)
		{
			case 1:defaultt();setColor(4);
			       I(57,13);S(63,13);S(69,13);U(75,13);E(81,13);
				    break;
			case 2:defaultt();setColor(4);
			       D(51,21);E(57,21);P(63,21);O(69,21);S(75,21);I(81,21);T(87,21);
				    break;
			case 3:defaultt();setColor(4);
			       A(33,29);D(39,29);M(45,29);I(51,29);N(57,29);I(63,29);S(69,29);T(75,29);R(81,29);A(87,29);T(93,29);O(99,29);R(105,29);
				   break;
			case 4:defaultt();setColor(4);
			       E(59,37);X(65,37);I(71,37);T(77,37);
				   break;
		}
		if(retval==13)
		break;
	}
	return opt;
}

void BOOklist()
{
	B(40,1);O(46,1);O(52,1);K(58,1); L(76,1);I(82,1);S(88,1);T(94,1);
	setColor(7);
	for(int x=27;x<119;++x)
	{
		xy(x,8);cout<<horizontal;
		xy(x,10);cout<<horizontal;
		xy(x,48);cout<<horizontal;
	    
	}
	for(int y=9;y<48;++y)
	{
		xy(26,y);cout<<vertical;
		xy(119,y);cout<<vertical;
		xy(49,y);cout<<vertical;
		xy(85,y);cout<<vertical;
	}
	pxy(26,10,divider_left);
	xy(29,9);cout<<"Book Number"<<setw(20)<<"Book Name"<<setw(40)<<"Author";
	pxy(119,10,divider_right);
	pxy(49,8,divider_top);pxy(85,8,divider_top);
	pxy(49,9,vertical);   pxy(85,9,vertical);
	pxy(49,10,divider_mid);pxy(85,10,divider_mid);
	pxy(49,48,divider_bottom);pxy(85,48,divider_bottom);
    xy(26,8);cout<<top_left;
	xy(119,8);cout<<top_right;
	xy(26,48);cout<<bottom_left;
	xy(119,48);cout<<bottom_right;
	xy(0,0);
	
getch();

}

char adMENU()
{
	char ch;
	A(10,3);D(16,3);M(22,3);I(28,3);N(34,3);I(40,3);S(46,3);T(52,3);R(58,3);A(64,3);T(70,3);O(76,3);R(82,3);
	M(94,3);E(100,3);N(106,3);U(112,3);
	filler(10,10,117,57,10);
	xy(40,12);cout<<"                                              ";
	xy(40,13);cout<<" 1. C R E A T E   S T U D E N T   R E C O R D ";
    xy(40,14);cout<<"                                              ";
    
    xy(40,17);cout<<"                                                ";
	xy(40,18);cout<<" 2. D I S P L A Y   S T U D E N T   R E C O R D ";
	xy(40,19);cout<<"                                                ";
	
	xy(40,22);cout<<"                                              ";
	xy(40,23);cout<<" 3. M O D I F Y   S T U D E N T   R E C O R D ";
	xy(40,24);cout<<"                                              ";
	
	xy(40,27);cout<<"                                              ";
	xy(40,28);cout<<" 4. D E L E T E   S T U D E N T   R E C O R D ";
	xy(40,29);cout<<"                                              ";
	
	
	xy(40,32);cout<<"                          ";
    xy(40,33);cout<<" 5. C R E A T E   B O O K ";
	xy(40,34);cout<<"                          ";	
	
	xy(40,37);cout<<"                                      ";
	xy(40,38);cout<<" 6. D I S P L A Y   A L L   B O O K S ";
	xy(40,39);cout<<"                                      ";
	
	
	xy(40,42);cout<<"                          ";
	xy(40,43);cout<<" 7. M O D I F Y   B O O K ";
	xy(40,44);cout<<"                          ";
	
	
	xy(40,47);cout<<"                          ";
	xy(40,48);cout<<" 8. D E L E T E   B O O K ";
	xy(40,49);cout<<"                          ";
	
	
	xy(40,52);cout<<"                                      ";
	xy(40,53);cout<<" 9. B A C K   T O   M A I N   M E N U ";
	xy(40,54);cout<<"                                      ";
	
	
	ch=getch();
	return ch;
}

void Quit()
{
	system("cls");
	filler(26,8,119,20,11);
	
	xy(26,8);cout<<top_left;
	xy(119,8);cout<<top_right;
	xy(26,20);cout<<bottom_left;
	xy(119,20);cout<<bottom_right;
	
	for(int x=27;x<119;++x)
	{
		xy(x,8);cout<<horizontal;
		xy(x,9);cout<<horizontal;
		xy(x,20);cout<<horizontal;
	    pxy(x,19,horizontal);
	}
	for(int y=9;y<20;++y)
	{
		xy(26,y);cout<<vertical;
		xy(119,y);cout<<vertical;
		xy(27,y);cout<<vertical;
		xy(118,y);cout<<vertical;
	}
	
	
    xy(27,9);cout<<top_left;
	xy(118,9);cout<<top_right;
	xy(27,19);cout<<bottom_left;
	xy(118,19);cout<<bottom_right;
    
    setColor(4);
    T(44,11);delay(250);
	H(50,13);delay(250);
	A(56,11);delay(250);
	N(62,13);delay(250);
	K(68,11);delay(250);
	
	Y(80,13);delay(250);
	O(86,11);delay(250);
	U(92,13);delay(250);
	
    getch();
    setColor(7);
    system("cls");
    exit(0);
   
}

