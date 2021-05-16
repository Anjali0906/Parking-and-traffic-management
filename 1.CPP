#include<fstream.h>
#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>
void parkchart()
{ clrscr();
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  setbkcolor(CYAN);
  cout<<"\n\n\t+------------------+----------------+---------------+---------+";
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

	  textcolor(5+BLINK) ;
	  cout<<"\n\n\t";
	  cprintf("* * *   * * * *  * * * *    *      *        * * * *    *       *");
	  cout<<"\n\t";
	  cprintf("*          *     *          * *    *           *       * *     * ");
	  cout<<"\n\t";
	  cprintf("* * *      *     *   * *    *  *   *           *       *   *   *");
	  cout<<"\n\t";
	  cprintf("    *      *     *     *    *    * *           *       *     * *");
	  cout<<"\n\t";
	  cprintf("* * *   * * * *  * * * *    *      *        * * * *    *       *" );

   ofstream f("userdata.txt",ios::app);
   cout<<"\n\n\tUSER NAME\t\t: ";
   gets(name);
   cout<<"\n\tADDRESS\t\t\t: ";
   gets(address);
   cout<<"\n\tPHONE NUMBER\t\t: ";
   cin>>phno;
   cout<<"\n\tUSER ID\t\t\t: ";
   gets(userid);
   cout<<"\n\tPASSWORD\t\t: ";
   gets(password);
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

	  char id[50],pass[50],npass[100],i[100];
	  ifstream F("userdata.txt");
	  textcolor(3+BLINK);
	  cout<<"\n\n\t\t";
	  cprintf("*      * * *  * * *     * * *  *    *");
	  cout<<"\n\t\t";
	  cprintf("*      *   *  *           *    * *  *");
	  cout<<"\n\t\t";
	  cprintf("*      *   *  *   *       *    *  * *");
	  cout<<"\n\t\t";
	  cprintf("* * *  * * *  * * *     * * *  *    *");
	  cout<<"\n\n\n\t\tENTER YOUR ID       :";
	  gets(id);
	  strcpy(i,id);
	  cout<<"\n\t\tENTER YOUR PASSWORD :";
	  cin>>pass;
	  char word[50];
	  strcpy(npass,strcat(id,pass));

	   while(!F.eof())
	   {
	    F>>word;
	     if(strcmp(npass,word)==0)
	     {flag=1;
	     break;
	     }
	     }
	     if(flag==1)
		 { clrscr();
		   parkchart();
		  }
	     else
	     {
	       textcolor(2);
	      cout<<"\n\t\t";
	      cprintf("!INVALID USER ID-PASSWORD !");

	     }
	     getch();
	     F.close();
	    }

void staff()
{
    clrscr();
    int ch;
    Entry E;
   int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  setbkcolor(LIGHTMAGENTA);

   cout<<"\n\n\t";
   cout<<"\n\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 STAFF CORNER \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4";
   cout<<"\n\t";
   cout<<"\n\n\n\n\t\t\t[1]. LOGIN";
   cout<<"\n\n\t\t\t[2]. SIGN IN";
   cout<<"\n\n\t\t\t[3]. MAIN MENU";
   cout<<"\n\n\n\t********************************************************";
   cout<<"\n\n\t\tEnter your choice\t: ";
   cin>>ch;
   cout<<"\n\t********************************************************";
   getch();
   closegraph();
   switch(ch)
   {
     case 1:E.login();break;
     case 2:E.sign();break;
    // case 3:goto 1;break;
   }
   getch();
}
void heading()
{
  clrscr();
   int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  setbkcolor(BROWN);
       cout<<"\n\n\t      * * *  * * *   * * *  * * *  * * *  * * *  * * * *" ;
       cout<<"\n\t        *    *    *  *   *  *      *        *    *      ";
       cout<<"\n\t        *    * * *   * * *  * * *  * * *    *    *     " ;
       cout<<"\n\t        *    *   *   *   *  *      *        *    *     ";
       cout<<"\n\t        *    *    *  *   *  *      *      * * *  * * * *\n\n" ;
       cout<<"\n\t		 * * * *  *    *  * * *	";
       cout<<"\n\t		 *     *  * *  *  *    *" ;
       cout<<"\n\t		 * * * *  *  * *  *     *";
       cout<<"\n\t		 *     *  *   **  *    *";
       cout<<"\n\t		 *     *  *    *  * * * \n\n";
       cout<<"\n\t\t* * *   * * *  * * *   *   *  * * *  *    *   * * * *	";
       cout<<"\n\t\t*    *  *   *  *    *  *  *     *    * *  *   *	";
       cout<<"\n\t\t* * *   * * *  * * *   **       *    *  * *   *   * *";
       cout<<"\n\t\t*	    *   *  *   *   *  *     *    *   **   *     *";
       cout<<"\n\t\t*	    *   *  *    *  *   *  * * *  *    *   * * * *\n\n";
       cout<<"\n  *     *  * * *  *     *  * * *  * * *   * * *  *     *  * * *  *    *  * * * ";
       cout<<"\n  * * * *  *   *  * *   *  *   *  *       *      * * * *  *      * *  *    *   ";
       cout<<"\n  *  *  *  * * *  *  *  *  * * *  *  * *  * * *  *  *  *  * * *  *  * *    *";
       cout<<"\n  *     *  *   *  *   * *  *   *  *   *   *      *     *  *      *   **    *   ";
       cout<<"\n  *     *  *   *  *     *  *   *  * * *   * * *  *     *  * * *  *    *    *   ";

  getch();
  closegraph();
}
  void main()
{

  clrscr();

heading();
   staff();
   getch();

}