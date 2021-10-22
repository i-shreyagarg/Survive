#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void main()
{
   clrscr();
    char ch;
    do{


   cout<<"                            WELCOME TO ENDURANCE"<<endl;
   cout<<"A game about survival,you have to complete the tasks to stay alive."<<endl;


   char name[1];
   cout<<"Enter your name:"<<endl;
   gets(name);

   int age;
   cout<<"Enter your age:"<<endl;
   cin>>age;
   if(age>=15)
   cout<<"THE GAME IS ON!"<<endl<<endl;
   else
   {
       cout<<"Sorry,you are too small to play this game.";
       getch();
       exit(0);
   }


   cout<<"Hi "<<name<<",I'm MIST.Its funny how people confuse me with fog!"<<endl;
   cout<<"I'll be your guide through this bad time."<<endl;
   cout<<name<<", you are the head of the family."<<endl;
   cout<<"Your spouse got shot while bringing rations."<<endl;
   cout<<"The rations reached you however."<<endl;

   char reply1[1];
   cout<<endl<<"You look upset from the news,are you okay?(yes/no)"<<endl;
   gets(reply1);
   cout<<"Well..everything gets better.Your children are here;"<<endl;
   cout<<"Monica(8) and Jimmy(5)"<<endl;
   cout<<"Rations:4 Soup cans,4 Water bottles,matchsticks,paper,pens."<<endl;
   cout<<"PS: 3 people can survive on 2 soup cans and water each for one day."<<endl;
   cout<<"Are you watching closely?";
   getch();

   clrscr();
   cout<<endl<<endl<<"    DAY ONE"<<endl;
   cout<<"The first thing you have to do is to light a fire."<<endl;
   cout<<"Luckily you got matchsticks,use them wisely."<<endl;
   cout<<"Just answer this simple matrix";

   cout<<endl<<endl;
   cout<<"1.Ignition,"<<endl;
   cout<<"2.Flames,"<<endl;
   cout<<"3.Smoke,"<<endl;
   cout<<"4.Burn."<<endl;

   cout<<"Arrange in meaningful order (according to numbers allotted,you get 3 tries)"<<endl;
   int arrangement;
   cin>>arrangement;
   for(int i1=3;i1>0;i1--)
      {
	 if(arrangement==1243)
	   {
	    cout<<"Correct!Now you can stay warm."<<endl;
	    break;
	   }
	 else
	   {
	    cout<<"You lost one try"<<endl;
	    cout<<"Try again"<<endl;
	    cout<<"No fire for you I guess"<<endl;
	    cin>>arrangement;
	   }
      }
     cout<<"Your family had food.But they look scared maybe a drawing will do the trick?"<<endl;
     cout<<"Choose:"<<endl;
     cout<<"1.Sun"<<endl;
     cout<<"2.Hut"<<endl;
     int drawing;
     cin>>drawing;
	switch(drawing)
	 {
	   case 1:
		 int gdriver=DETECT,gmode;
		 initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
		 for(int i=0;i<100;i++)
		    {
		    circle  (300,300,0+i);
		    setcolor(YELLOW);
		    }
		 getch();
		 cout<<"Your children look happy."<<endl<<"You are left with 2 cans and 2 bottles.";
		 cout<<endl<<"DAY END";
		 getch();
		 cleardevice();
		 closegraph();
		 break;
	   case 2:
		 int gdriver1=DETECT,gmode1;
		     initgraph(&gdriver1,&gmode1,"c:\\tc\\bgi");
			setcolor(YELLOW);
		 line(200,200,250,100);
		 line(300,200,250,100);
		       setfillstyle(SOLID_FILL,RED);
		 rectangle(200,200,300,350);
			floodfill(201,201,YELLOW);
			setfillstyle(SOLID_FILL,GREEN);
		 rectangle(300,200,400,350);
			floodfill(301,201,YELLOW);
		 line(250,100,350,100);
		 line(400,200,350,100);
		     getch();
		 cout<<"Your childrean look happy."<<endl<<"You are left with 2 cans and 2 bottles.";
		 cout<<endl<<"DAY END";
		 getch();
		 cleardevice();
		 closegraph();
	  break;
	 }

   clrscr();
   cout<<endl<<endl<<"     DAY TWO"<<endl;
   cout<<"Your family had food you have nothing left."<<endl;
   cout<<"Time to collect some food and water."<<endl;

   cout<<"Where do think you should go?(1=forest/2=mainroad)"<<endl;
   getch();
   int place;

 for(int r=0;r<10;r++)
   {
   cin>>place;

  if(place==2)
     {
      cout<<"Your children were abducted by strangers."<<endl;
      cout<<"You found no food and died because of a broken heart and starvation."<<endl;
      cout<<"YOU DID NOT SURVIVE."<<endl;
      cout<<"THE END.";
      getch();
      exit(0);
      }

    else if(place==1)
    { clrscr();
      int gdriver2=DETECT,gmode2;
      initgraph(&gdriver2,&gmode2,"c:\\tc\\bgi");
      setcolor(YELLOW);

      setfillstyle(SOLID_FILL,GREEN);
      ellipse(500,200,0,360,75,100);
      floodfill(500,200,YELLOW);

      setfillstyle(SOLID_FILL,BROWN);
      rectangle(475,201,525,401);
      floodfill(476,202,YELLOW);
      floodfill(524,400,YELLOW);

      setfillstyle(SOLID_FILL,BROWN);
      rectangle(0,401,900,450);
      floodfill(1,402,YELLOW);

      setfillstyle(SOLID_FILL,BLUE);
      rectangle(0,450,900,600);
      floodfill(1,451,YELLOW);

      setfillstyle(SOLID_FILL,RED);
      circle(450,200,10);
      circle(500,150,10);
      circle(550,200,10);
      floodfill(451,201,YELLOW);
      floodfill(501,151,YELLOW);
      floodfill(551,201,YELLOW);

      getch();
      cout<<"What a clever idea!"<<endl;
      cout<<"Enough food for everyone"<<endl;
      cout<<"Is that a boat I see?";
      getch();
      cleardevice();
      closegraph();
      goto l;
    }

    else
    {
     cout<<"Well that would be nice,but too far."<<endl;
    }
   }

   l:;
   clrscr;
   cout<<endl<<endl<<"         DAY 3"<<endl;
   cout<<"Last day."<<endl;
   cout<<"All you have to do is to get out of this place."<<endl;
   cout<<"I saw a boat..but i own it(HAHAHA).You must answer these 2 questions."<<endl;
   cout<<endl<<endl<<"1.Answer this simple (4*4) soduku"<<endl;
   cout<<"order of input:mynameis"<<endl;

   cout<<"     4     m     y     1"<<endl;
   cout<<"     n     1     3     a"<<endl;
   cout<<"     m     4     1     e"<<endl;
   cout<<"     1     i     s     3"<<endl;
   long int mynameis;
   int myname;
   for(int o=0;o<10;o++)
     {
     cin>>mynameis;
   if(mynameis==32243224)
      {
      for(int m=0;m<10;m++)
	   {
	   cout<<"Now answer the input"<<endl;
	   cout<<"Is my name(1=fog/2=mist)?"<<endl;
	   cin>>myname;
		    if(myname==2)
		  {
		    cout<<"Here you go,you are free."<<endl;
		    goto boat;
		  }
		else if(myname==1)
		   {
		   cout<<"I guess you didn't pay attention to my joke."<<endl;
		   }
		else
		   {
		    cout<<"Seriously,eh?That's not even a option."<<endl;
		   }

	   }
	}
	  else
	  {
	    cout<<"Improve your maths!"<<endl;
	  }
     }


     boat:;
     cout<<"Press enter key to get in boat";
     getch();
  clrscr();
  int gdriver3=DETECT,gmode3,i;
  initgraph(&gdriver3,&gmode3,"c:\\tc\\bgi");

   setcolor(YELLOW);
   for(i=0;i<500;i++)
      {
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(0,350,900,500);
	floodfill(1,351,YELLOW);

	rectangle(100+i,400,300+i,450);
	delay(2);
	cleardevice();

	line(290+i,410,290+i,200);
	line(290+i,200,350+i,225);
	line(290+i,250,350+i,225);
      }
   cout<<"WELL DONE!"<<endl;
   cout<<"YOU SURVIVED."<<endl;
   cout<<"THE END.";
   cout<<endl<<"Please press enter.";
   getch();
   cleardevice();
closegraph();


cout<<endl<<endl;
cout<<"Want to play again?(y/n)"<<endl;
cin>>ch;
clrscr();}while((ch=='y')||(ch=='Y'));

}
