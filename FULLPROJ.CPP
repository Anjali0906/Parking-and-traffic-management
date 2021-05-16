#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#include<fstream.h>

void parkchart()
{ clrscr(); int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   setbkcolor(BLACK);
  cout<<"\n\n\n\t+------------------+----------------+---------------+---------+";
  cout<<"\n\t| TYPES OF VEHICLE | FOUR WHEELERS  | TWO  WHEELERS |  CYCLE  |";
  cout<<"\n\t|  ______________  |  (Car.etc..,)  | (Scooter,Bike)|         |";
  cout<<"\n\t+------------------+----------------+ --------------+---------+";
  cout<<"\n\t| UPTO 6 HOURS     |     30         |       15      |    5    |";
   cout<<"\n\t+------------------+ ---------------+ --------------+---------+";
  cout<<"\n\t| UPTO 12 HOURS    |     50         |       25      |    5    |";
  cout<<"\n\t+------------------+ ---------------+ --------------+---------+";
  cout<<"\n\t| MORE  THAN  12   |     60         |       30      |    10   |";
  cout<<"\n\t|      HOURS       |                |               |         |";
  cout<<"\n\t+------------------+ ---------------+ --------------+---------+";
  cout<<"\n\t| MONTHLY CHARGES  |     1,200      |       600     |    70   |";
  cout<<"\n\t+------------------+----------------+ --------------+---------+";
  cout<<"\n\t| NIGHT CHARGES    |                |               |         |";
  cout<<"\n\t|(Extra)(00.00H to |     60         |       30      |    10   |";
  cout<<"\n\t|05.00Hrs) -Daily  |                |               |         |";
  cout<<"\n\t+------------------+----------------+ --------------+---------+";
  cout<<"\n\t| NIGHT CHARGES    |                |               |         |";
  cout<<"\n\t|(Extra)(00.00H to |    1,200       |       600     |    70   |";
  cout<<"\n\t|05.00Hrs) -Monthly|                |               |         |";
  cout<<"\n\t+------------------+----------------+---------------+---------+";
  getch();
  closegraph();
 }
void box()
{
	for(int col = 6; col < 73; col++)
	{
		gotoxy(col, 2) ;
		cprintf("%c", 196) ;
		gotoxy(col, 23) ;
		cprintf("%c", 196) ;
	}
	for(int row = 2; row < 23; row++)
	{
		gotoxy(6, row) ;
		cprintf("%c", 179) ;
		gotoxy(73, row) ;
		cprintf("%c", 179) ;
	}
	gotoxy(6, 2) ;
	cprintf("%c", 218) ;
	gotoxy(6, 23) ;
	cprintf("%c", 192) ;
	gotoxy(73, 2) ;
	cprintf("%c", 191) ;
	gotoxy(73, 23) ;
	cprintf("%c", 217) ;

}
void heading()
{
  clrscr();
  int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TC\\BGI");
   setbkcolor(LIGHTRED) ;
	int i, col = 100, maxCol = 100 ;
	setcolor(BLUE) ;

	for (i = 0; i < 450; ++i, ++col, ++maxCol) {
		line(col, 70, maxCol, 400) ;
		delay(2) ;
	}
	  setfillstyle(6,BLUE) ;
	bar(100, 70, 550, 400) ;
	setcolor(WHITE) ;
	settextstyle(1,0,5);
	outtextxy(100, 100, "      Traffic & ");
	outtextxy(107,140,"Parking Management ") ;
	settextstyle(18,0,1)  ;
	outtextxy(216, 230, "  Anjali Gupta") ;
	outtextxy(216, 240, "  Reg. No. roll no") ;
	outtextxy(216, 290, "  Tejasvi Sharma") ;
	outtextxy(216, 300, "  Reg. No. roll no") ;
	setcolor(RED) ;
	textbackground(LIGHTRED);
	settextstyle(9,0,1)      ;
	outtextxy(100, 400, "Press any key to continue . . .") ;
	getch();
	closegraph();

}

class Entry
{
  char userid[20];
  char user1id[40];
  char name[20];
  char password[10];
  char address[100];
  char newpass[20];
  long int phno;
  public:
  void login();
  void sign()
  {
   clrscr();
	  int gd=DETECT,gm;
	 initgraph(&gd,&gm,"c:\\tc\\bgi");
	  setcolor(BLUE);
	  setbkcolor(CYAN);
	  textcolor(BLUE);
	  settextstyle(1,0,8);
	  outtextxy(1,10,"    SIGN IN \2");
   ofstream f("user.txt",ios::app);
   cout<<"\n\n\n\n\n\n\n\n\t\tUSER NAME\t\t: ";
   gets(name);
   cout<<"\n\t\tADDRESS\t\t\t: ";
   gets(address);
   cout<<"\n\t\tPHONE NUMBER\t\t: ";
   cin>>phno;
   cout<<"\n\t\tUSER ID\t\t\t: ";
   gets(userid);
   cout<<"\n\t\tPASSWORD\t\t: ";
   gets(password);
   box();
   getch();
   strcpy(user1id,userid);
   strcpy(newpass,strcat(userid,password));
   f<<name<<"\n";
   f<<address<<"\n";
   f<<phno<<"\n";
   f<<user1id<<"\n";
   f<<newpass<<"\n";
   f.close();
  }
 };
 void Entry::login()
	 {
	   clrscr();
	  int flag = 0;
	  void display();
	  char id[50],pass[50],npass[100],i[100];
	  int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

	  setcolor(BLUE);
	  setbkcolor(LIGHTRED);
	  settextstyle(1,0,8);
	  outtextxy(5,10,"    LOG IN  ");
	  ifstream F("user.txt");
	  cout<<"\n\n\n\n\n\n\n\n\n\t\tENTER YOUR ID       :";
	  gets(id);
	  strcpy(i,id);
	  cout<<"\n\t\tENTER YOUR PASSWORD :";
	  cin>>pass;
	  char word[50];
	  box();
	  getch();
	  strcpy(npass,strcat(id,pass));

	   while(!F.eof())
	   {
	    F>>word;
	     if(strcmp(npass,word)==0)
	     {flag=1;
	     display();
	     break;
	     }
	    }
	    if(flag==0)
	     {
		clrscr();
		 int gd=DETECT,gm;
	     initgraph(&gd,&gm,"c:\\tc\\bgi");

	  setcolor(GREEN);
	  setbkcolor(LIGHTRED);
	  settextstyle(8,0,9);
	  outtextxy(10,50," !INVALID USER-ID!");
	  settextstyle(1,0,9);
	  outtextxy(20,200,"! ! PASSWORD ! !");
	 getch();
	  }
	     F.close();
	   }

int staff()
{
    closegraph();
    clrscr();
    int ch;
    Entry E;
  cout<<"\n\n\n\t   ";
   cout<<"\n\t   \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 STAFF CORNER \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4";
   cout<<"\n\t   ";
   cout<<"\n\n\n   \t\t\t[1]. LOGIN";
   cout<<"\n\n   \t\t\t[2]. SIGN IN";
   cout<<"\n\n   \t\t\t[3]. MAIN MENU";
   cout<<"\n\n\n\t   ********************************************************";
   cout<<"\n\t\t   Enter your choice\t: ";
   cin>>ch;
   cout<<"\n\t   ********************************************************";
   box();
   getch();
   switch(ch)
   {
     case 1:E.login();break;
     case 2:E.sign();break;
     case 3:return(0);
   }
   return(0);
}
	class plot1
{
 int j;
 int entryth;
 int entrytm;
 int exith;
 int exitm;
 int amount(int a,char b)
 {
  if(b== 'c')
  {
   if(a<6*60)
    a=30;
   else if(a<12*60)
	 a=50;
	 else  if(a>12*60&&a<24*60*30)
	      a=60;
	      else
	      a=1200;

   }
   if(b=='b')
  {
   if(a<6*60)
    a=15;
   else if(a<12*60)
	 a=25;
	 else if(a>12*60&&a<24*60*30)
	      a=30;
	      else
	      a=600;
   }
   if(b=='a')
  {
   if(a<6*60)
    a=5;
   else if(a<12*60)
	 a=5;
	 else if(a>12*60&&a<24*60*30)
	      a=10;
	      else
	      a=70;

   }
    return a;
  }
  public:
long int cno;
 void get(int k,int l)
 {
     cout<<"\n\t\tENTER YOUR ENTRY TIME(H/M)\t: ";
     cin>>entryth>>entrytm;
     cout<<"\n\t\tYOUR VEHICLE IS IN\t\t: "<< k<<","<<l;

  }
  void show(char t)
  {
     cout<<"\n\t\tYOUR ENTRY TIME IS\t\t: "<<entryth<<":"<<entrytm;
     cout<<"\n\n\t\tENTER YOUR EXIT TIME(H/M)\t: ";
     cin>>exith>>exitm;
     int nmin=entryth*60+entrytm;
     int xmin=exith*60+exitm;
     int a=nmin-xmin;
     j= amount(a,t);
    cout<<"\n\t\tAMOUNT\t\t\t\t: "<<j;
    getch();
    clrscr();
	  int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

	  setcolor(GREEN);
	  setbkcolor(LIGHTRED);
	  settextstyle(8,0,4);
	  outtextxy(5,50,"  HOPE YOU ENJOYED OUR SERVICE");
	  settextstyle(1,0,6);
	  outtextxy(10,200,"! ! HAVE A GOOD DAY ! !");
	 getch();

   }
 }p;

void create(int i,int j)
{
  ofstream f("parkin1.dat",ios::app) ;
  p.get(i,j);
  f.write((char*)&p,sizeof(p));
  f.close();
  getch();
}
long int a[4][5];
void search(char ch)
{
  int flag=0;
  long int carno;
  clrscr();
  int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

	  setcolor(BLUE);
	  setbkcolor(LIGHTRED);
	  settextstyle(1,0,6);
	  outtextxy(5,50,"     YOUR DETAILS ");

  cout<<"\n\n\n\n\n\n\n\n\n\n\t\tENTER YOUR VEHICLE NUMBER\t: ";
  cin>>carno;
  ifstream f("parkin1.dat");
  while(!f.eof())
  {
   f.read((char*)&p,sizeof(p));
   if(p.cno==carno)
   {
    p.show(ch);
      for(int i=0;i<=3;++i)
      {
	 for(int j=0;j<=4;++j)
	  {
	     if(a[i][j]==carno)
	     {
	       a[i][j]=0;
	       break;
	      }
	  }
      }
    flag++;
    break;
   }
 }
   if(flag!=1)
   cout<<"\n\n\n\n\n\n\t\t\tRECORD NOT FOUND";
   f.close();
   getch();
}
void par1(int ch)
{
  int i,flag=0;
  long int no;

  void create(int,int);
  clrscr();
  int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

	  setcolor(BLUE);
	  setbkcolor(LIGHTRED);
	  settextstyle(1,0,6);
	  outtextxy(5,50,"        DETAILS  ");

  cout<<"\n\n\n\n\n\n\n\n\n\t\tENTER YOUR CAR NUMBER\t\t: ";
  cin>>no;
  switch(ch)
  {
    case 1:for(i=0;i<=4;++i)
	  { if(a[3][i]==0)
	   {
	    a[3][i]=no;
	    p.cno=no;
	    create(3,i);
	    flag=1;
	    break;
	   }
	  }
	   if(flag==0)
	    cout<<"\n\t\t\tPARKING IS FULL";
	   break;
   case 2: for(i=0;i<=4;++i)
	   {
	   if(a[2][i]==0)
	   {
	    a[2][i]=no;
	    p.cno=no;
	    create(2,i);
	    flag=1;
	    break;
	   }}
	   if(flag==0)
	     cout<<"\n\t\t\tPARKING IS FULL";
	   break;
   case 3: for(i=0;i<=4;++i)
	  { if(a[1][i]==0)
	   {
	    a[1][i]=no;
	    p.cno=no;
	    create(1,i);
	    flag=1;
	    break;
	   } }
	   if(flag==0)
	   {
	    cout<<"\n\t\t\tPARKING IS FULL";
	   }
	   break;
   case 4: for(i=0;i<=4;++i)
	   {if(a[0][i]==0)
	   {
	    a[0][i]=no;
	    p.cno=no;
	    create(0,i);
	    flag=1;
	    break;
	   }
	   }
	   if(flag==0)
	    cout<<"\n\t\t\tPARKING IS FULL";
	   break;
   }
   getch();
   closegraph();
 }
void display()
{
  clrscr();
  int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");

  setbkcolor(LIGHTRED);
  settextstyle(8,0,8 );
  outtextxy(5,10,"   PARKING ");
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
  for( int i=0;i<=3;++i)
  {
    for(int j=0;j<=4;++j)
    {
     cout<<"  | "<<a[i][j]<<" | ";
    }
    cout<<"\n\n\t\t";
  }
  box();
  getch();
  closegraph();
}
 void alotp(int ch1,char ch)
  {
     int ch2;
     cout<<"\n\n\t     *******************************************************";
     cout<<"\n\t\t\t     \2 \2 MANAGEMENT \2 \2";
     cout<<"\n\t     *******************************************************";
     cout<<"\n\n\n\t\t\t PRESS 1 TO PARK YOUR VEHICLE";
     cout<<"\n\n\t\t\t PRESS 2 TO  GET YOUR VEHICLE";
     cout<<"\n\n\n\t   -------------------------------------------------------";
     cout<<"\n\t\t\tENTER YOUR CHOICE\t: ";

     cin>>ch2;

      cout<<"\t   -------------------------------------------------------";
     box();
     getch();
     switch(ch2)
     {
       case 1: par1(ch1);
	       break;
       case 2: search(ch);
	       break;
    }
}
void parking()
{
  char ch='y';
  for(int i=0;i<=3;++i)
  {
   for(int j=0;j<=4;++j)
   {
     a[i][j]=0;
   }
  }
  while(ch=='y')
   {
    int ch1;
    clrscr();
    closegraph();
    cout<<"\n\n\n\t   *****************************************************";
    cout<<"\n\t    MAIN MENU ";
    cout<<"\n\t   *****************************************************";
    cout<<"\n\n\t\t\t[1]. PRESS 1 FOR CYCLE";
    cout<<"\n\t\t\t[2]. PRESS 2 FOR BIKE";
    cout<<"\n\t\t\t[3]. PRESS 3 FOR CAR";
    cout<<"\n\t\t\t[4]. PRESS 4 FOR BUS";
    cout<<"\n\t\t\t[5]. RATING LIST";
    cout<<"\n\t\t\t[6]. STAFF CORNER";
    cout<<"\n\t\t\t[7]. EXIT";
    cout<<"\n\n\t   ----------------------------------------------------";
    cout<<"\n\t\tENTER YOUR CHOICE\t: ";
    cin>>ch1;
    cout<<"\n\t   ----------------------------------------------------";
    box();
    getch();
    clrscr();
    switch(ch1)
    {
      case 1: alotp(ch1,'a');
	      break;
      case 2: alotp(ch1,'b');
	      break;
      case 3: alotp(ch1,'c');
	      break;
      case 4: alotp(ch1,'c');
	      break;
      case 5: parkchart();
	      break;
      case 6: staff();
	      break;
     case 7:exit(0);
    }
  }

}




struct traffic
{
 int plate;

 traffic *next;
};



class lane
{
 traffic *front;
 traffic *rear;
 int count ;

 public:

  lane()
 {front=NULL;
 rear=NULL;
 count=0;
 }
 void input()
 {
  traffic *t=new traffic;
  cout<<"\n\t\t ENTER CAR NO. PLATE\t\t:";
  cin>>t->plate;
  t->next=NULL;
  count++;
  if(front==NULL&&rear==NULL)
  { front=t;rear=t;}
  else
  {rear->next=t;
  rear=t;}
 }
 int cnt()
 {
  return(count);

 }
  void output(int x,int y);

  void del();
  };

  void lane :: del()
  {

   traffic *temp=front;

   if(front==NULL && rear== NULL)
   {printf("NO VEHICLE");return; }
   else
   {

	 cout<<temp->plate << "  deleted\n";
	   front=front->next;
	    count--;

	   if( front== NULL)
		front =rear =NULL;
	   delete temp;

    }
      }

  void lane :: output(int x,int y)
 {
  traffic *cur=front;
    cout<<"\n";


  do{

     cout<<"\n";
     gotoxy(x,y);
     cout<<cur->plate;
     cur=cur->next;
     y=y+1;
  }while(cur!=NULL);
  getch();
  }
lane l1,l2,l3,l4;

int max()

 {int r;
 if(l1.cnt()>=l2.cnt()&&l1.cnt()>=l3.cnt()&&l1.cnt()>=l4.cnt())
  r=0;

 else if(l2.cnt()>=l1.cnt()&&l2.cnt()>=l3.cnt()&&l2.cnt()>=l4.cnt())
  r=1;
 else if(l3.cnt()>=l1.cnt()&&l3.cnt()>=l2.cnt()&&l3.cnt()>=l4.cnt())
 { r=2;}
 else if(l4.cnt()>=l1.cnt()&&l4.cnt()>=l2.cnt()&&l4.cnt()>=l3.cnt())
 { r=3;}
  return(r);
}

void light()
{ clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 settextstyle(7,0,7); //4- font ,0- alignment, 10-size
 outtextxy(170,20,"DISPLAY");
     getch();
     if(max()==0)
     {

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setfillstyle(SOLID_FILL,GREEN);
  setbkcolor(BLACK);
 circle(140,10,10);
 floodfill(141,11,WHITE);

 gotoxy(16,3);
 cout<<"LANE 1";

 l1.output(18,5);



       gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(270,10,10);
 floodfill(271,11,WHITE);
 getch();
 gotoxy(32,3);
 cout<<"LANE 2";
      l2.output(34,5);

	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(390,10,10);
 floodfill(391,11,WHITE);
 getch();
 gotoxy(47,3);
 cout<<"LANE 3";
      l3.output(49,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(520,10,10);
 floodfill(521,11,WHITE);
 getch();
 gotoxy(64,3);
 cout<<"LANE 4";
      l4.output(66,5);


   closegraph();
   return;
   }
  else if(max()==1)
     {clrscr();

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setfillstyle(SOLID_FILL,RED);

 circle(140,10,10);
 floodfill(141,11,WHITE);

 gotoxy(16,3);
 cout<<"LANE 1";

 l1.output(18,5);



       gd=DETECT,gm;

 setfillstyle(SOLID_FILL,GREEN);

 circle(270,10,10);
 floodfill(271,11,WHITE);
 getch();
 gotoxy(32,3);
 cout<<"LANE 2";
      l2.output(34,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(390,10,10);
 floodfill(391,11,WHITE);
 getch();
 gotoxy(47,3);
 cout<<"LANE 3";
      l3.output(49,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(520,10,10);
 floodfill(521,11,WHITE);
 getch();
 gotoxy(64,3);
 cout<<"LANE 4";
      l4.output(66,5);


   closegraph();
   return;
   }
  else if(max()==2)
     {clrscr();

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");


 circle(140,10,10);
 floodfill(141,11,WHITE);

 gotoxy(16,3);
 cout<<"LANE 1";

 l1.output(18,5);



       gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(270,10,10);
 floodfill(271,11,WHITE);
 getch();
 gotoxy(32,3);
 cout<<"LANE 2";
      l2.output(34,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,GREEN);

 circle(390,10,10);
 floodfill(391,11,WHITE);
 getch();
 gotoxy(47,3);
 cout<<"LANE 3";
      l3.output(49,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(520,10,10);
 floodfill(521,11,WHITE);
 getch();
 gotoxy(64,3);
 cout<<"LANE 4";
      l4.output(66,5);


   closegraph();
   return;
   }
   else if(max()==3)
     {clrscr();

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setfillstyle(SOLID_FILL,RED);

 circle(140,10,10);
 floodfill(141,11,WHITE);

 gotoxy(16,3);
 cout<<"LANE 1";

 l1.output(18,5);



       gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(270,10,10);
 floodfill(271,11,WHITE);
 getch();
 gotoxy(32,3);
 cout<<"LANE 2";
      l2.output(34,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,RED);

 circle(390,10,10);
 floodfill(391,11,WHITE);
 getch();
 gotoxy(47,3);
 cout<<"LANE 3";
      l3.output(49,5);


	gd=DETECT,gm;

 setfillstyle(SOLID_FILL,GREEN);

 circle(520,10,10);
 floodfill(521,11,WHITE);
 getch();
 gotoxy(64,3);
 cout<<"LANE 4";
      l4.output(66,5);


   closegraph();
   return;
   }
   closegraph();

}



int compare()
{
int a[4];
int i,pos,z;
a[0]=l1.cnt();
a[1]=l2.cnt();
a[2]=l3.cnt();
a[3]=l4.cnt();

//cout<<"\n"<<l1.cnt()<<"\t"<<l2.cnt()<<"\t"<<l3.cnt()<<"\t"<<l4.cnt()<<"\n";
pos=max();
int y=6;
switch(pos)
{
 case 0:
  int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 setfillstyle(SOLID_FILL,RED);


 cout<<"\t";
 textcolor(GREEN);   //to include colour to text
 cout<<"\n\t\t";
 cprintf("LANE 1");
 cout<<"  \tLANE 2\t\tLANE 3\t\t LANE 4";    //always use c before print
  closegraph();
		  l2.output(34,5);
		  l3.output(50,5);
		  l4.output(67,5);
 for( z=5;z<=6;++z)
 {
 for( i=0;i<2;++i)
 {


 gotoxy(16,z);
 delay(1000);
 l1.del();
 z++;
 }
  }

 delay(1000);
 light();
 getch();
closegraph();
 break;
 case 1:
 cout<<"\n\t\tLANE 1\t\t";
 textcolor(GREEN);   //to include colour to text
 cprintf("LANE 2");
 cout<<"\t\tLANE 3\t\t LANE 4";
 closegraph();
		  l1.output(18,5);
		  l3.output(50,5);
		  l4.output(67,5);

 for(z=5;z<=6;++z)
 {
 for( i=0;i<2;++i)
 {


 gotoxy(32,z);
 delay(1000);
 l2.del();
 z++;
 }
  }

 delay(1000);
 light();
 getch();


 break;


 case 2:
  cout<<"\n\t\tLANE 1\t\tLANE 2\t\t";
 textcolor(GREEN);   //to include colour to text
 cprintf("LANE 3");
 cout<<"\t\t LANE 4";    //always use c before print
		 closegraph();
		  l1.output(18,8);
		  l2.output(34,8);

		  l4.output(67,8);
 for(int z=5;z<=6;++z)
 {
 for( i=0;i<2;++i)
 {


 gotoxy(48,z);
 delay(1000);
 l3.del();
 z++;
 }
  }

 delay(1000);
 light();
 getch();

 break;

  case 3:
cout<<"\n\n\t\tLANE 1\t\tLANE 2\t\tLANE 3\t\t";    //always use c before print
textcolor(GREEN);   //to include colour to text
 cprintf("LANE 4");
	  closegraph();
		  l1.output(18,5);
		  l2.output(34,5);
		  l3.output(50,5);
 for(z=5;z<=6;++z)


 {
 for( i=0;i<2;++i)
 {


 gotoxy(65,z);
 delay(1000);
 l4.del();
 z++;
 }
  }

 delay(1000);
 light();
 getch();
 break;
  }

 if(l1.cnt() ==0  && l2.cnt() ==0&&l3.cnt()==0&&l4.cnt()==0)
{ return(1);
 }
 else
 compare();
closegraph();
return(0);
}
void tra()
{ char y,v,l,d; int r,ch,o;


  clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 settextstyle(7,0,7); //4- font ,0- alignment, 10-size
 outtextxy(170,10,"TRAFFIC");
 outtextxy(60,70,"MANAGEMENT");
 setbkcolor(LIGHTRED);
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t PRESS Y TO PROCEED";
  cout<<"\n\n\t\t\t PRESS N TO EXIT";
  cout<<"\n\n\n\t\t\t ENTER YOUR CHOICE : ";
  cin>>l;
  box();
  getch();
  closegraph();

  if(l=='y')
 {


 do{
  clrscr();
  closegraph();
  cout<<"\n\n\n\n\t\t*******************************************\n";
  cout<<"\t\t\t  TRAFFIC MANAGEMENT" ;
  cout<<"\n\t\t*******************************************\n\n";
  cout<<"\n\t\t\t 1.INPUT";
  cout<<"\n\t\t\t 2.DISPLAY";
  cout<<"\n\t\t\t 3.SEE WHERE IS GREEN LIGHT";
  cout<<"\n\t\t\t 4.EXIT\n";
  cout<<"\n\t\t    ENTER YOUR CHOICE\t: ";
  cin>>ch;
   box();
   getch();
  switch (ch)
  { case 1:
   clrscr();
   int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\BGI");
  settextstyle(7,0,6); //4- font ,0- alignment, 10-size
  outtextxy(170,30,"INPUT");
   getch();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t ENTER LANE NO.(1-4)\t: ";
   cin>>r;
   closegraph();
   switch(r)
   {case 1:
   clrscr();
   cout<<"\n\n\n\n\n\t\t***************************************\n";
   cout<<"\t\t\t   INPUT LANE 1";
   cout<<"\n\t\t***************************************\n";

   do{
    l1.input();
    cout<<"\t\t DO YOU WANT TO CONTINUE\t: ";
    cin>>y;
     }while(y=='y');
   break;
   case 2:
   clrscr();
   cout<<"\n\n\n\n\t\t***************************************\n";
   cout<<"\t\t\t   INPUT LANE 2";
   cout<<"\n\t\t***************************************\n";
   do{
    l2.input();
    cout<<"\t\t DO YOU WANT TO CONTINUE\t: ";
    cin>>y;
     }while(y=='y');
   break;

   case 3:
   clrscr();
   cout<<"\n\n\n\n\t\t***************************************\n";
   cout<<"\t\t\t   INPUT LANE 3";
   cout<<"\n\t\t***************************************\n";
   do{
    l3.input();
    cout<<"\t\t DO YOU WANT TO CONTINUE\t: ";
    cin>>y;
     }while(y=='y');
   break;

   case 4:
   clrscr();
   cout<<"\n\n\n\n\t\t***************************************\n";
   cout<<"\t\t\t   INPUT LANE 4";
   cout<<"\n\t\t***************************************\n";
   do{
    l4.input();
    cout<<"\t\t DO YOU WANT TO CONTINUE\t: ";
    cin>>y;
     }while(y=='y');
   break;
}

  break;

  case 2:clrscr();
	light();break;
  case 3: clrscr();
   //cout<<"\n\t\tLANE 1\t\tLANE 2\t\tLANE 3\t\t LANE 4";
  //getch();
  compare(); getch();    break;
  case 4:  exit(0);
  }
 }while(ch<5);
 }
 else
 exit(0);
}


void main()
{
  clrscr();
  heading();
   clrscr();
    int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\tc\\bgi");
   setbkcolor(LIGHTRED) ;

     setfillstyle(9,BLUE) ;
	bar(100, 70, 550, 400) ;
	setcolor(WHITE) ;
	settextstyle(8,0,5);
	outtextxy(200, 100, "1.Traffic  ");
	outtextxy(200,140,"2.Parking  ") ;

	int ch;
	setcolor(WHITE) ;
	textbackground(LIGHTRED);
	settextstyle(5,0,3)  ;
	outtextxy(150, 250, "Press key(1/2) to continue . . .") ;
	gotoxy(170,260);
	cin>>ch;
	getch();
	switch(ch)
	{
	  case 2:parking();
		 closegraph();
		 break;
	  case 1: tra();
		   break;
	  default:exit(0);
	}
 getch();
 }






