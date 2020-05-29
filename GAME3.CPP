#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void outerboundry(void);
void endcursor(void);
void innerwall(void);
void welcomescreen(void);
void instructionscreen(void);
void clrscr(void);
void gotoxy(int x,int y);
void delay(unsigned int);

main()
{
char nameword;
 welcomescreen();
 clrscr();
 gotoxy(25,11);
 printf("Enter first letter of your name");
 gotoxy(39,15);
 scanf("%c",&nameword);
 instructionscreen();
 int n=1,x,y; char ch;char sign[20];
 int i,k=1,j=1,m,ww=0,aa=0,ss=0,dd=0;int move=0;int dollor=0,signcount=2;
 int outerboundryx[1000];  //including all boundry inner and outer both
 int outerboundryy[1000];
 int dollorx[20];        //creating axis of dollor symbol in map
 int dollory[20];
 dollorx[0]=1;
 dollory[0]=1;
 outerboundryx[0]=1;
 outerboundryy[0]=1;
 for(i=0;i<=20;i++)
 {
  sign[i]='$';     //assigning dollor sign in sign variable when game start
 }
 for(i=1;i<=1000;i++)
 {
 outerboundryx[i]=0; //resetting boundry axis
 outerboundryy[i]=0;
 }
 clrscr();
  x=40;
   y=12;
   gotoxy(x,y);
   printf("%c",nameword);
	 //                                   outer  boundry start

      for(i=1;i<=80;i++) //top
      {

	 gotoxy(i,1);
	 outerboundryx[k]=i;
	 outerboundryy[k]=1;k++;
	 printf("#");
       }
       for(i=1;i<=24;i++) //left
      {
	 gotoxy(1,i);
	 outerboundryx[k]=1;
	 outerboundryy[k]=i;k++;
	 printf("#");
       }

       for(i=1;i<=24;i++) //right
      {
	 gotoxy(80,i);
	 outerboundryx[k]=80;
	 outerboundryy[k]=i;k++;
	 printf("#");
       }
       for(i=1;i<=80;i++) //bottom
      {
	 gotoxy(i,24);
	 outerboundryx[k]=i;
	 outerboundryy[k]=24;k++;
	 printf("#");
       }
    //                                   outer  boundry end

    //                                   inner boundry start

	for(i=1;i<=10;i++) //counter horizontal
      {
	 gotoxy(1+i,4);
	 outerboundryx[k]=1+i;
	 outerboundryy[k]=5;k++;
	 printf("#");
       }
       for(i=1;i<=3;i++) //counter vertical
      {
	 gotoxy(11,1+i);
	 outerboundryx[k]=11;
	 outerboundryy[k]=1+i;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //1 top left line
      {
	 gotoxy(13+i,4);
	 outerboundryx[k]=13+i;
	 outerboundryy[k]=4;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //1 top right line
      {
	 gotoxy(41+i,4);
	 outerboundryx[k]=41+i;
	 outerboundryy[k]=4;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //2 left
      {
	 gotoxy(10+i,6);
	 outerboundryx[k]=10+i;
	 outerboundryy[k]=6;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //2 right
      {
	 gotoxy(43+i,6);
	 outerboundryx[k]=43+i;
	 outerboundryy[k]=6;k++;
	 printf("#");
       }
       for(i=1;i<=3;i++) //2 vertical center
      {
	 gotoxy(40,5+i);
	 outerboundryx[k]=40;
	 outerboundryy[k]=5+i;k++;
	 printf("#");
       }
       for(i=1;i<=20;i++) //2,3 horizontal center
      {
	 gotoxy(29+i,8);
	 outerboundryx[k]=29+i;
	 outerboundryy[k]=8;k++;
	 printf("#");
       }

       for(i=1;i<=20;i++) //3 left horizontal
      {
	 gotoxy(5+i,8);
	 outerboundryx[k]=5+i;
	 outerboundryy[k]=8;k++;
	 printf("#");
       }
       for(i=1;i<=20;i++) //3 right horizontal
      {
	 gotoxy(53+i,8);
	 outerboundryx[k]=53+i;
	 outerboundryy[k]=8;k++;
	 printf("#");
       }
       for(i=1;i<=1;i++) //3 right vertical
      {
	 gotoxy(54,6+i);
	 outerboundryx[k]=54;
	 outerboundryy[k]=6+i;k++;
	 printf("#");
       }
       for(i=1;i<=1;i++) //3 right vertical
      {
	 gotoxy(25,6+i);
	 outerboundryx[k]=25;
	 outerboundryy[k]=6+i;k++;
	 printf("#");
       }
	for(i=1;i<=4;i++) //4 left center
      {
	 gotoxy(33+i,10);
	 outerboundryx[k]=33+i;
	 outerboundryy[k]=10;k++;
	 printf("#");
       }
       for(i=1;i<=4;i++) //4 right center
      {
	 gotoxy(41+i,10);
	 outerboundryx[k]=41+i;
	 outerboundryy[k]=10;k++;
	 printf("#");
       }
       for(i=1;i<=4;i++) //5 left center
      {
	 gotoxy(30+i,11);
	 outerboundryx[k]=30+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
       for(i=1;i<=4;i++) //5 right center
      {
	 gotoxy(44+i,11);
	 outerboundryx[k]=44+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
	for(i=1;i<=4;i++) //6 left center
      {
	 gotoxy(30+i,13);
	 outerboundryx[k]=30+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
       for(i=1;i<=4;i++) //6 right center
      {
	 gotoxy(44+i,13);
	 outerboundryx[k]=44+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
	for(i=1;i<=4;i++) //7 left center
      {
	 gotoxy(33+i,14);
	 outerboundryx[k]=33+i;
	 outerboundryy[k]=14;k++;
	 printf("#");
       }
       for(i=1;i<=4;i++) //7 right center
      {
	 gotoxy(41+i,14);
	 outerboundryx[k]=41+i;
	 outerboundryy[k]=14;k++;
	 printf("#");
       }
       for(i=1;i<=15;i++) //5 first left
      {
	 gotoxy(1+i,11);
	 outerboundryx[k]=1+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
       for(i=1;i<=9;i++) //5 second left
      {
	 gotoxy(19+i,11);
	 outerboundryx[k]=19+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
       for(i=1;i<=15;i++) //5 second right
      {
	 gotoxy(64+i,11);
	 outerboundryx[k]=64+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
       for(i=1;i<=10;i++) //5 first right
      {
	 gotoxy(51+i,11);
	 outerboundryx[k]=51+i;
	 outerboundryy[k]=11;k++;
	 printf("#");
       }
       for(i=1;i<=2;i++) //5 left vertical
      {
	 gotoxy(25,8+i);
	 outerboundryx[k]=25;
	 outerboundryy[k]=8+i;k++;
	 printf("#");
       }
       for(i=1;i<=2;i++) //5 right vertical
      {
	 gotoxy(54,8+i);
	 outerboundryx[k]=54;
	 outerboundryy[k]=8+i;k++;
	 printf("#");
       }

       //                            creating water reflection on map

       for(i=1;i<=15;i++) //6 first left
      {
	 gotoxy(1+i,13);
	 outerboundryx[k]=1+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
       for(i=1;i<=9;i++) //6 second left
      {
	 gotoxy(19+i,13);
	 outerboundryx[k]=19+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
       for(i=1;i<=15;i++) //6 second right
      {
	 gotoxy(64+i,13);
	 outerboundryx[k]=64+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
       for(i=1;i<=10;i++) //6 first right
      {
	 gotoxy(51+i,13);
	 outerboundryx[k]=51+i;
	 outerboundryy[k]=13;k++;
	 printf("#");
       }
       for(i=1;i<=2;i++) //6 left vertical
      {
	 gotoxy(25,13+i);
	 outerboundryx[k]=25;
	 outerboundryy[k]=13+i;k++;
	 printf("#");
       }
       for(i=1;i<=2;i++) //6 right vertical
      {
	 gotoxy(54,13+i);
	 outerboundryx[k]=54;
	 outerboundryy[k]=13+i;k++;
	 printf("#");
       }

       for(i=1;i<=20;i++) //7,8 horizontal center
      {
	 gotoxy(29+i,16);
	 outerboundryx[k]=29+i;
	 outerboundryy[k]=16;k++;
	 printf("#");
       }

       for(i=1;i<=20;i++) //7 left horizontal
      {
	 gotoxy(5+i,16);
	 outerboundryx[k]=5+i;
	 outerboundryy[k]=16;k++;
	 printf("#");
       }
       for(i=1;i<=20;i++) //7 right horizontal
      {
	 gotoxy(53+i,16);
	 outerboundryx[k]=53+i;
	 outerboundryy[k]=16;k++;
	 printf("#");
       }
       for(i=1;i<=1;i++) //7 right vertical
      {
	 gotoxy(54,16+i);
	 outerboundryx[k]=54;
	 outerboundryy[k]=16+i;k++;
	 printf("#");
       }
       for(i=1;i<=1;i++) //7 right vertical
      {
	 gotoxy(25,16+i);
	 outerboundryx[k]=25;
	 outerboundryy[k]=16+i;k++;
	 printf("#");
       }

	for(i=1;i<=25;i++) //8 left
      {
	 gotoxy(10+i,18);
	 outerboundryx[k]=10+i;
	 outerboundryy[k]=18;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //8 right
      {
	 gotoxy(43+i,18);
	 outerboundryx[k]=43+i;
	 outerboundryy[k]=18;k++;
	 printf("#");
       }
       for(i=1;i<=2;i++) //8 vertical center
      {
	 gotoxy(40,17+i);
	 outerboundryx[k]=40;
	 outerboundryy[k]=17+i;k++;
	 printf("#");
       }

       for(i=1;i<=25;i++) //9 top left line
      {
	 gotoxy(13+i,21);
	 outerboundryx[k]=13+i;
	 outerboundryy[k]=21;k++;
	 printf("#");
       }
       for(i=1;i<=25;i++) //9 top right line
      {
	 gotoxy(41+i,21);
	 outerboundryx[k]=41+i;
	 outerboundryy[k]=21;k++;
	 printf("#");
       }



    //                                   inner boundry end

    //                               dollor on map .....

	 //1
	 gotoxy(12,12);
	 printf("$");
	 dollorx[j]=12;
	 dollory[j]=12;j++;
	 //2
	 gotoxy(32,12);
	 printf("$");
	 dollorx[j]=32;
	 dollory[j]=12;j++;
	 //3
	 gotoxy(46,12);
	 printf("$");
	 dollorx[j]=46;
	 dollory[j]=12;j++;
	 //4
	 gotoxy(14,7);
	 printf("$");
	 dollorx[j]=14;
	 dollory[j]=7;j++;
	 //5
	 gotoxy(45,7);
	 printf("$");
	 dollorx[j]=45;
	 dollory[j]=7;j++;
	 //6
	 gotoxy(57,20);
	 printf("$");
	 dollorx[j]=57;
	 dollory[j]=20;j++;
	 //7
	 gotoxy(56,17);
	 printf("$");
	 dollorx[j]=56;
	 dollory[j]=17;j++;
	 //8
	 gotoxy(35,15);
	 printf("$");
	 dollorx[j]=35;
	 dollory[j]=15;j++;
	 //9
	 gotoxy(43,15);
	 printf("$");
	 dollorx[j]=43;
	 dollory[j]=15;j++;
	 //10
	 gotoxy(40,14);
	 printf("$");
	 dollorx[j]=40;
	 dollory[j]=14;j++;
	 //11
	 gotoxy(40,10);
	 printf("$");
	 dollorx[j]=40;
	 dollory[j]=10;j++;
	 //12
	 gotoxy(43,9);
	 printf("$");
	 dollorx[j]=43;
	 dollory[j]=9;j++;
	 //13
	 gotoxy(35,9);
	 printf("$");
	 dollorx[j]=35;
	 dollory[j]=9;j++;
	 //14
	 gotoxy(70,12);
	 printf("$");
	 dollorx[j]=70;
	 dollory[j]=12;j++;
	 //15
	 gotoxy(59,3);
	 printf("$");
	 dollorx[j]=59;
	 dollory[j]=3;j++;
	 //16
	 gotoxy(19,20);
	 printf("$");
	 dollorx[j]=19;
	 dollory[j]=20;j++;
	 //17
	 gotoxy(35,17);
	 printf("$");
	 dollorx[j]=35;
	 dollory[j]=17;j++;
	 //18
	 gotoxy(65,7);
	 printf("$");
	 dollorx[j]=65;
	 dollory[j]=7;j++;
	 //19
	 gotoxy(25,5);
	 printf("$");
	 dollorx[j]=25;
	 dollory[j]=5;j++;

    //                             ....... dollor on map


	// 3 for green , 5 for red , 14 for yellow
    //                                  counter start

       gotoxy(2,2);
       printf(" $: ");
       gotoxy(2,3);
       printf("Move: ");


    //                                  counter end


     gotoxy(7,3);
   printf("%d",move);
   gotoxy(6,2);
   printf("%d",dollor);
   endcursor();  //placing counter at last
    m=k;

 while(n>0)
 {
   ch=getch();
   clrscr();
   outerboundry();
   innerwall();
   endcursor();

   //                                     movement  start
   switch(ch)
   {
    case 'w': y--;ww=1;break;
    case 's': y++;ss=1;break;
    case 'a': x--;aa=1;break;
    case 'd': x++;dd=1;break;
    default : n=0;break;
    }
    move++;
    //  				    movement end
    //                                     restriction program start
      for(i=1;i<=m;i++)
      {
       if(x==outerboundryx[i] && y==outerboundryy[i])
       {  move--;

			if(aa==1)
			{
			x++;
			aa=0;
			}
			else if(dd==1)
			{
			 x--;
			dd=0;
			}


			else if(ww==1)
			{
			y++;
			ww=0;
			}
			else if(ss==1)
			{
			 y--;
			 ss=0;
			 }

	}

      }
      ww=0;
	aa=0;
	ss=0;
	dd=0;




	//                     cursor on dollor position.......
    for(i=1;i<=j;i++)
      {
       if(x==dollorx[i] && y==dollory[i])
       {
	     if(sign[i]!=' ') {
	       dollor=dollor+100;
	       sign[i]=' ';signcount++;
	       if(signcount==j)
	       n=0;
	     }

	}

      }



	//                .............cursor on dollor position

	//

    //                                      restriction program end

    //                                      printing start
    for(i=1;i<=j;i++)
    {
     gotoxy(dollorx[i],dollory[i]);
     printf("%c",sign[i]);
    }
    gotoxy(7,2);
    printf("%d",dollor);
    gotoxy(7,3);
    printf("%d",move);
    gotoxy(x,y);
    printf("%c",nameword);
    endcursor();


    //                                       printing end




 }//infinite while loop end

 clrscr();
 gotoxy(30,10);
 printf("Your Score");
 gotoxy(25,13);
 printf("NAME");
 gotoxy(32,13);
 printf("DOLLOR");
 gotoxy(40,13);
 printf("MOVES");

 gotoxy(27,15);
 printf("%c",nameword);
 gotoxy(34,15);
 printf("%d",dollor);
 gotoxy(42,15);
 printf("%d",move);
 gotoxy(26,17);
 printf("Press enter to exit");

 getch();
}



void outerboundry()
{
int i;
 for(i=1;i<=80;i++) //top
      {
	 gotoxy(i,1);
	 printf("#");
       }
       for(i=1;i<=24;i++) //left
      {
	 gotoxy(1,i);
	 printf("#");
       }

       for(i=1;i<=24;i++) //right
      {
	 gotoxy(80,i);
	 printf("#");
       }
       for(i=1;i<=80;i++) //bottom
      {
	 gotoxy(i,24);
	 printf("#");
       }
}

void innerwall()
{
int i;

   gotoxy(2,2);
       printf("  $ : ");
       gotoxy(2,3);
       printf("Move: ");
	for(i=1;i<=10;i++) //counter horizontal
      {
	 gotoxy(1+i,4);
	 printf("#");
       }
       for(i=1;i<=4;i++) //counter vertical
      {
	 gotoxy(11,1+i);
	 printf("#");
       }
       for(i=1;i<=25;i++) //1 top left line
      {
	 gotoxy(13+i,4);
	 printf("#");
       }
       for(i=1;i<=25;i++) //1 top right line
      {
	 gotoxy(41+i,4);
	 printf("#");
       }
       for(i=1;i<=25;i++) //2 left
      {
	 gotoxy(10+i,6);
	 printf("#");
       }
       for(i=1;i<=25;i++) //2 right
      {
	 gotoxy(43+i,6);
	 printf("#");
       }
       for(i=1;i<=3;i++) //2 vertical center
      {
	 gotoxy(40,5+i);
	 printf("#");
       }
       for(i=1;i<=20;i++) //2,3 horizontal center
      {
	 gotoxy(29+i,8);
	 printf("#");
       }

       for(i=1;i<=20;i++) //3 left horizontal
      {
	 gotoxy(5+i,8);
	 printf("#");
       }
       for(i=1;i<=20;i++) //3 right horizontal
      {
	 gotoxy(53+i,8);
	 printf("#");
       }
       for(i=1;i<=1;i++) //3 right vertical
      {
	 gotoxy(54,6+i);
	 printf("#");
       }
       for(i=1;i<=1;i++) //3 right vertical
      {
	 gotoxy(25,6+i);
	 printf("#");
       }
	for(i=1;i<=4;i++) //4 left center
      {
	 gotoxy(33+i,10);
	 printf("#");
       }
       for(i=1;i<=4;i++) //4 right center
      {
	 gotoxy(41+i,10);
	 printf("#");
       }
       for(i=1;i<=4;i++) //5 left center
      {
	 gotoxy(30+i,11);
	 printf("#");
       }
       for(i=1;i<=4;i++) //5 right center
      {
	 gotoxy(44+i,11);
	 printf("#");
       }
	for(i=1;i<=4;i++) //6 left center
      {
	 gotoxy(30+i,13);
	 printf("#");
       }
       for(i=1;i<=4;i++) //6 right center
      {
	 gotoxy(44+i,13);
	 printf("#");
       }
	for(i=1;i<=4;i++) //7 left center
      {
	 gotoxy(33+i,14);
	 printf("#");
       }
       for(i=1;i<=4;i++) //7 right center
      {
	 gotoxy(41+i,14);
	 printf("#");
       }
       for(i=1;i<=15;i++) //5 first left
      {
	 gotoxy(1+i,11);
	 printf("#");
       }
       for(i=1;i<=9;i++) //5 second left
      {
	 gotoxy(19+i,11);
	 printf("#");
       }
       for(i=1;i<=15;i++) //5 second right
      {
	 gotoxy(64+i,11);
	 printf("#");
       }
       for(i=1;i<=10;i++) //5 first right
      {
	 gotoxy(51+i,11);
	 printf("#");
       }
       for(i=1;i<=2;i++) //5 left vertical
      {
	 gotoxy(25,8+i);
	 printf("#");
       }
       for(i=1;i<=2;i++) //5 right vertical
      {
	 gotoxy(54,8+i);
	 printf("#");
       }

       //                            creating water reflection on map

       for(i=1;i<=15;i++) //6 first left
      {
	 gotoxy(1+i,13);
	 printf("#");
       }
       for(i=1;i<=9;i++) //6 second left
      {
	 gotoxy(19+i,13);
	 printf("#");
       }
       for(i=1;i<=15;i++) //6 second right
      {
	 gotoxy(64+i,13);
	 printf("#");
       }
       for(i=1;i<=10;i++) //6 first right
      {
	 gotoxy(51+i,13);
	 printf("#");
       }
       for(i=1;i<=2;i++) //6 left vertical
      {
	 gotoxy(25,13+i);
	 printf("#");
       }
       for(i=1;i<=2;i++) //6 right vertical
      {
	 gotoxy(54,13+i);
	 printf("#");
       }

       for(i=1;i<=20;i++) //7,8 horizontal center
      {
	 gotoxy(29+i,16);
	 printf("#");
       }

       for(i=1;i<=20;i++) //7 left horizontal
      {
	 gotoxy(5+i,16);
	 printf("#");
       }
       for(i=1;i<=20;i++) //7 right horizontal
      {
	 gotoxy(53+i,16);
	 printf("#");
       }
       for(i=1;i<=1;i++) //7 right vertical
      {
	 gotoxy(54,16+i);
	 printf("#");
       }
       for(i=1;i<=1;i++) //7 right vertical
      {
	 gotoxy(25,16+i);
	 printf("#");
       }

	for(i=1;i<=25;i++) //8 left
      {
	 gotoxy(10+i,18);
	 printf("#");
       }
       for(i=1;i<=25;i++) //8 right
      {
	 gotoxy(43+i,18);
	 printf("#");
       }
       for(i=1;i<=2;i++) //8 vertical center
      {
	 gotoxy(40,17+i);
	 printf("#");
       }

       for(i=1;i<=25;i++) //9 top left line
      {
	 gotoxy(13+i,21);
	 printf("#");
       }
       for(i=1;i<=25;i++) //9 top right line
      {
	 gotoxy(41+i,21);
	 printf("#");
       }


}

void welcomescreen()
{
 int i;
 clrscr();
 gotoxy(35,11);
 printf("Welcome");
 gotoxy(30,15);
 printf("loading.");
 for(i=0;i<9;i++)
 {
  delay(300);
  printf(".");
  delay(1000);
 }
}

void instructionscreen()
{
 clrscr();
 delay(200);
 gotoxy(23,12);
 printf("Use a,w,s&d to move left,right,up & down");
 gotoxy(23,13);
 printf("   any other key will end the game");
 delay(5000);
}
void clrscr()
{
    system("cls");
}

void gotoxy(int b,int v)
{
    COORD c;
    c.X=b;
    c.Y=v;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void delay(unsigned int mseconds)
{

    clock_t goal = mseconds+clock();
    while(goal>clock());
}
void endcursor()
{
 gotoxy(80,24);
 printf("#");
}
