#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <fstream.h>
#include <string.h>

void heading()
{
  textcolor(14);
  cout<<"\n\t\t\t\t";
  cprintf("LIBRARY MANAGEMENT");
  cout<<"\n\t\t\t\t";
  cprintf("________________________");
}
class library
{
  int bkno;
  int stock;
  float price;
  char bkn[80],author[80],type[90];
  void assign();
 public:
  library();
  void input();
  void appendinput();
  void output();
  void individualoutput();
  void update();
  int retstock();
  void upd_bookstock(char cd);
  int retno();
};
class members
{
  int memno,mempno,bborrow,age;
  char memname[80],memtype[80],memaddr[80];
  void memberassign();
 public:
  members();
  void minput();
  void mappendinput();
  void upd_membook(int bno);
  void moutput();
  void mindividualoutput();
  void mupdate();
  void outputbook();
  int mretno();
  int retbkno();
};
library :: library()
{
 stock = 10;
}
void library :: input()
{
 heading();
 textcolor(10);
 cout<<"\n\n\n";
 cprintf("BOOK DETAILS (FILE CREATION)");
 cout<<"\n";
 cprintf("_________________________________");
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("ENTER THE BOOK NUMBER");
 cin>>bkno;
 cout<<"\n\n";
 cprintf("ENTER THE BOOK NAME");
 gets(bkn);
 cout<<"\n\n";
 cprintf("ENTER THE AUTHOR");
 gets(author);
 cout<<"\n\n";
 cprintf("ENTER THE STOCK");
 cin>>stock;
 cout<<"\n\n";
 cprintf("ENTER THE PRICE");
 cin>>price;
 assign();
}
void library :: appendinput()
{
 heading();
 textcolor(10);
 cout<<"\n\n\n";
 cprintf("BOOK DETAILS (APPEND)");
 cout<<"\n";
 cprintf("_________________________");
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("ENTER THE BOOK NUMBER");
 cin>>bkno;
 cout<<"\n\n";
 cprintf("ENTER THE BOOK NAME");
 gets(bkn);
 cout<<"\n\n";
 cprintf("ENTER THE AUTHOR");
 gets(author);
 cout<<"\n\n";
 cprintf("ENTER THE STOCK");
 cin>>stock;
 cout<<"\n\n";
 cprintf("ENTER THE PRICE");
 cin>>price;
 assign();
}
int library :: retno()
{
 return bkno;
}
int library :: retstock()
{
 return stock;
}
void library :: output()
{
 clrscr();
  heading();
  textcolor(10);
 cout<<"\n\n";
 cprintf("BOOK DETAILS (DISPLAY)");
 cout<<"\n";
 cpintf("______________________");r
 textcolor(3);
 cout<<"\n\n";
 cprintf("BOOK NUMBER - ");
 cout<<"  "<<bkno;
 cout<<"\n\n";
 cprintf("NAME        - ");
 cout<<"  "<<bkn;
 cout<<"\n\n";
 cprintf("AUTHOR      - ");
 cout<<"  "<<author;
 cout<<"\n\n";
 cprintf("TYPE        - ");
 cout<<"  "<<type;
 cout<<"\n\n";
 cprintf("STOCK       - ");
 cout<<"  "<<stock;
 cout<<"\n\n";
 cprintf("PRICE       - ");
 cout<<"  "<<price;
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("*PRESS ANY KEY TO CONTINUE*");
getch();
}
void library :: individualoutput()
{
 clrscr();
  heading();
  textcolor(10);
 cout<<"\n\n";
 cprintf("BOOK DETAILS (INDIVIDUAL DISPLAY)");
 cout<<"\n";
 cprintf("_________________________________");
 textcolor(3);
 cout<<"\n\n";
 cprintf("BOOK NUMBER - ");
 cout<<"  "<<bkno;
 cout<<"\n\n";
 cprintf("NAME        - ");
 cout<<"  "<<bkn;
 cout<<"\n\n";
 cprintf("AUTHOR      - ");
 cout<<"  "<<author;
 cout<<"\n\n";
 cprintf("TYPE        - ");
 cout<<"  "<<type;
 cout<<"\n\n";
 cprintf("STOCK       - ");
 cout<<"  "<<stock;
 cout<<"\n\n";
 cprintf("PRICE       - ");
 cout<<"  "<<price;
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("*PRESS ANY KEY TO CONTINUE*");
getch();
}
void library :: upd_bookstock(char cd)
{
  if(cd=='I')
     stock--;
  else
     if(cd=='R')
        stock++;
}
void library :: update()
{
 int op;
 do
  {
   clrscr();
   heading();
   textcolor(10);
   cout<<"\n\n\n";
   cprintf("UPDATE FUNCTION");
   cout<<"\n";
   cprintf("_______________");
   textcolor(8);
   cout<<"\n\n";
   cprintf("ENTER ONE OF THE FOLLOWING OPTION");
   cout<<"\n\n";
   textcolor(11);
   cprintf("1.TO UPDATE THE PRICE");
   cout<<"\n\n";
   cprintf("2.TO UPDATE THE STOCK");
   cout<<"\n\n";
   cprintf("3.TO UPDATE THE TYPE");
   cout<<"\n\n";
   cprintf("4.TO EXIT THIS FUNCTION");
   cin>>op;
   getch();
    switch(op)
    {
      case 1 :
               clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (PRICE)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW PRICE");
                cin>>price;
               getch();
                break;
      case 2 :
               clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (STOCK)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW STOCK");
                cin>>stock;
               getch();
                 break;
      case 3 :
                clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (TYPE)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                assign();
                getch();
                 break;
    }
  }while(op<4);
}
void library :: assign()
{
 int op;
 textcolor(8);
 cout<<"\n\n";
 cprintf("ENTER THE BOOK TYPE FROM THE FOLLOWING OPTIONS");
 textcolor(6);
 cout<<"\n\n";
 cprintf("ENTER 1.IF NOVEL");
 cout<<"\n\n";
 cprintf("ENTER 2.IF FICTION");
 cout<<"\n\n";
 cprintf("ENTER 3.IF BIOGRAPHY");
 cout<<"\n\n";
 cprintf("ENTER 4.IF TRAVEL / JOURNAL");
 cout<<"\n\n";
 cprintf("ENTER 5.IF COMICS / GRAPHIC NOVELS");
 cout<<"\n\n";
 cprintf("ENTER 6.IF MAGAZINES");
 cin>>op;
     switch(op)
      {
       case 1 :
                strcpy(type,"NOVEL");
                 break;
       case 2 :
                strcpy(type,"FICTION");
                 break;
       case 3 :
                strcpy(type,"BIOGRAPHY");
                 break;
       case 4 :
                strcpy(type,"TRAVEL / JOURNAL");
                 break;
       case 5 :
                strcpy(type,"COMICS / GRAPHIC NOVELS");
                 break;
       case 6 :
                strcpy(type,"MAGAZINES");
     }
}
members :: members()
{
 bborrow = 0;
}
void members :: memberassign()
{
 int op;
  textcolor(8);
  cout<<"\n\n";
  cprintf("ENTER YOUR OPTION");
  textcolor(6);
  cout<<"\n\n";
  cprintf("1.IF THE MEMBER IS A PLATINUM CARD HOLDER");
  cout<<"\n\n";
  cprintf("2.IF THE MEMBER IS A GOLDEN CARD HOLDER");
  cout<<"\n\n";
  cprintf("3.IF THE MEMBER IS A SILVER CARD HOLDER");
  cout<<"\n\n";
  cprintf("4.IF THE MEMBER IS NEW");
  cin>>op;
   switch(op)
    {
      case 1 :
               strcpy(memtype,"PLATINUM");
                break;
      case 2 :
               strcpy(memtype,"GOLD");
                break;
      case 3 :
               strcpy(memtype,"SILVER");
                break;
      case 4 :
               strcpy(memtype,"NEW");
    }
}
void members :: minput()
{
 textcolor(10);
 cout<<"\n\n";
 cprintf("MEMBER DETAILS (FILE CREATION)");
 cout<<"\n";
 cprintf("____________________________________");
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("ENTER THE MEMBER ID NUMBER");
 cin>>memno;
 cout<<"\n\n";
 cprintf("ENTER THE NAME");
 gets(memname);
 cout<<"\n\n";
 cprintf("ENTER THE AGE");
 cin>>age;
 cout<<"\n\n";
 cprintf("ENTER THE PHONE NUMBER");
 cin>>mempno;
 cout<<"\n\n";
 cprintf("ENTER THE ADDRESS");
 gets(memaddr);
 memberassign();
}
void members :: mappendinput()
{
 textcolor(10);
 cout<<"\n\n";
 cprintf("MEMBER DETAILS (APPEND)");
 cout<<"\n";
 cprintf("_____________________________");
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("ENTER THE MEMBER ID NUMBER");
 cin>>memno;
 cout<<"\n\n";
 cprintf("ENTER THE NAME");
 gets(memname);
 cout<<"\n\n";
 cprintf("ENTER THE AGE");
 cin>>age;
 cout<<"\n\n";
 cprintf("ENTER THE PHONE NUMBER");
 cin>>mempno;
 cout<<"\n\n";
 cprintf("ENTER THE ADDRESS");
 gets(memaddr);
 memberassign();
}
void members :: moutput()
{
 clrscr();
 heading();
 textcolor(10);
 cout<<"\n\n";
 cprintf("MEMBER DETAILS (DISPLAY)");
 cout<<"\n";
 cprintf("________________________");
 textcolor(3);
 cout<<"\n\n";
 cprintf("ID NUMBER     - ");
 cout<<" "<<memno;
 cout<<"\n\n";
 cprintf("NAME          - ");
 cout<<" "<<memname;
 cout<<"\n\n";
 cprintf("AGE           - ");
 cout<<" "<<age;
 cout<<"\n\n";
 cprintf("PHONE NUMBER  - ");
 cout<<" "<<mempno;
 cout<<"\n\n";
 cprintf("ADRESS        - ");
 cout<<" "<<memaddr;
 cout<<"\n\n";
 cprintf("TYPE          - ");
 cout<<" "<<memtype;
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("*PRESS ANY KEY TO CONTINUE*");
 getch();
}
void members :: mindividualoutput()
{
 clrscr();
 heading();
 textcolor(10);
 cout<<"\n\n";
 cprintf("MEMBER DETAILS (INDIVIDUAL DISPLAY)");
 cout<<"\n";
 cprintf("___________________________________");
 textcolor(3);
 cout<<"\n\n";
 cprintf("ID NUMBER     - ");
 cout<<" "<<memno;
 cout<<"\n\n";
 cprintf("NAME          - ");
 cout<<" "<<memname;
 cout<<"\n\n";
 cprintf("AGE           - ");
 cout<<" "<<age;
 cout<<"\n\n";
 cprintf("PHONE NUMBER  - ");
 cout<<" "<<mempno;
 cout<<"\n\n";
 cprintf("ADRESS        - ");
 cout<<" "<<memaddr;
 cout<<"\n\n";
 cprintf("TYPE          - ");
 cout<<" "<<memtype;
 textcolor(6);
 cout<<"\n\n\n";
 cprintf("*PRESS ANY KEY TO CONTINUE*");
 getch();
}
void members :: mupdate()
{
 int op;
 do
  {
   clrscr();
   heading();
   textcolor(10);
   cout<<"\n\n\n";
   cprintf("UPDATE FUNCTION");
   cout<<"\n";
   cprintf("_______________");
   textcolor(8);
   cout<<"\n\n";
   cprintf("ENTER ONE OF THE FOLLOWING OPTION");
   cout<<"\n\n";
   textcolor(11);
   cprintf("1.TO UPDATE THE PHONE NUMBER");
   cout<<"\n\n";
   cprintf("2.TO UPDATE THE AGE");
   cout<<"\n\n";
   cprintf("3.TO UPDATE THE ADDRESS");
   cout<<"\n\n";
   cprintf("4.TO UPDATE THE MEMBERS'CARD");
   cout<<"\n\n";
   cprintf("5.TO EXIT THIS FUNCTION");
   cin>>op;
   getch();
    switch(op)
    {
      case 1 :
               clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (PHONE NUMBER)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW PHONE NUMBER");
                cin>>mempno;
               getch();
                break;
      case 2 :
                 clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (AGE)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW AGE");
                cin>>age;
               getch();
                break;
      case 3 :
               clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (ADDRESS)");
                cout<<"\n";
                cprintf("_______________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW ADRESS");
                gets(memaddr);
               getch();
                 break;
      case 4 :
               clrscr();
                heading();
                textcolor(10);
                cout<<"\n\n\n";
                cprintf("UPDATE FUNCTION (MEMBERS'CARDS)");
                cout<<"\n";
                cprintf("_______________________________");
                textcolor(6);
                cout<<"\n\n";
                cprintf("ENTER THE NEW CARD TYPE");
                memberassign();
               getch();
                 break;
    }
  }while(op<4);
}
void members :: outputbook()
{
 textcolor(3);
 cout<<"\n";
 cprintf("%d ",memno);
 cprintf("%-15s  ", memname);
 cprintf("%d",bborrow);
 cout<<"\n\n";
}
void members :: upd_membook(int bkn)
{
  bborrow = bkn;
}
int members :: mretno()
{
 return memno;
}
int members :: retbkno()
{
  return bborrow;
}
void lcreate()
{
 int n;
 library x;
 textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE NUMBER OF BOOKS TO BE ENTERED");
  cin>>n;
   ofstream out("book.dat",ios::binary);
    for(int i=0;i<n;i++)
        {
          clrscr();
          x.input();
           out.write((char*)&x,sizeof(x));
          getch();
        }
   out.close();
}
void lappend()
{
  int n;
 library x;
  textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE NUMBER OF BOOKS TO BE ENTERED");
  cin>>n;
   ofstream out("book.dat",ios::binary | ios::app);
    for(int i=0;i<n;i++)
        {
         clrscr();
          x.appendinput();
           out.write((char*)&x,sizeof(x));
         getch();
        }
   out.close();
}
void lchange(int bknumber)
{
 library x;
  fstream in("book.dat",ios::binary | ios::in | ios::out);
         while(in.read((char*)&x,sizeof(x)))
               if(bknumber==x.retno())
                  {
                    x.update();
                     in.seekp(-sizeof(x),ios::cur);
                     in.write((char*)&x,sizeof(x));
                     break;
                  }
  in.close();
}
void ldisplay()
{
 library x;
  ifstream in("book.dat",ios::binary);
    while(in.read((char*)&x,sizeof(x)))
            x.output();
  in.close();
}
void lindividual_display(int bnumber)
{
 library x;
  int flag=0;
  ifstream in("book.dat",ios::binary);
    while(in.read((char*)&x,sizeof(x)))
          if(bnumber==x.retno())
            {
             flag=1;
             x.individualoutput();
            }
   if(flag==0)
      {
       textcolor(6);
       cout<<"\n\n";
       cprintf("ERROR, BOOK NUMBER DOES NOT EXSIST");
      }
  in.close();
}
void ldeletion()
{
 library x;
 int bknum;
 int flag=0;
  textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE BOOK NUMBER OF THE BOOK TO BE DELETED");
  cin>>bknum;
  ifstream in("book.dat",ios::binary);
  ofstream out("temp.dat",ios::binary);
   while(in.read((char*)&x,sizeof(x)))
         if(bknum!=x.retno())
            {
             out.write((char*)&x,sizeof(x));
             flag=1;
            }
   textcolor(6);
   if(flag==1)
      {
       cout<<"\n\n";
       cprintf("ERROR, THE BOOK NUMBER DOES NOT EXSIST");
      }
   else
      {
       textcolor(6);
       cout<<"\n\n";
       cprintf("RECORD HAS BEEN DELETED");
      }
 in.close();
 out.close();
 remove("book.dat");
 rename("temp.dat","book.dat");
}
void lcount()
{
 ifstream in("book.dat",ios::binary);
  in.seekg(0,ios::end);
  textcolor(13);
   cout<<"\n\n";
   cprintf("NO OF BOOKS = ");
   cout<<" "<<in.tellg()/sizeof(library);
  in.close();
}
void mcreate()
{
 int n;
 members x;
  textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE NUMBER OF MEMBERS");
  cin>>n;
  ofstream out("member.dat",ios::binary);
   for(int i=0;i<n;i++)
       {
        clrscr();
         heading();
         x.minput();
          out.write((char*)&x,sizeof(x));
        getch();
       }
  out.close();
}
void mappend()
{
  int n;
 members x;
 textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE NUMBER OF MEMBERS TO BE ENTERED");
  cin>>n;
   ofstream out("member.dat",ios::binary | ios::app);
    for(int i=0;i<n;i++)
        {
         clrscr();
         heading();
          x.mappendinput();
           out.write((char*)&x,sizeof(x));
         getch();
        }
   out.close();
}

void mchange(int membernumber)
{
 members x;
  fstream in("member.dat",ios::binary | ios::in | ios::out);
         while(in.read((char*)&x,sizeof(x)))
               if(membernumber==x.mretno())
                  {
                     x.mupdate();
                     in.seekp(-sizeof(x),ios::cur);
                     in.write((char*)&x,sizeof(x));
                     break;
                  }
  in.close();
}
void mdisplay()
{
 members x;
  ifstream in("member.dat",ios::binary);
    while(in.read((char*)&x,sizeof(x)))
            x.moutput();
 in.close();
}
void mindividual_display(int mnumber)
{
 members x;
  int flag=0;
  ifstream in("member.dat",ios::binary);
    while(in.read((char*)&x,sizeof(x)))
          if(mnumber==x.mretno())
            {
             flag=1;
             x.mindividualoutput();
            }
   if(flag==0)
      {
       textcolor(6);
       cout<<"\n\n";
       cprintf("ERROR, MEMBER NUMBER DOES NOT EXSIST");
      }
  in.close();
}
void mdelete()
{
 members x;
 int memberno;
 int flag=0;
  textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE MEMBER ID NUMBER OF THE MEMBER TO BE DELETED");
  cin>>memberno;
  ifstream in("member.dat",ios::binary);
  ofstream out("mtemp.dat",ios::binary);
   while(in.read((char*)&x,sizeof(x)))
         if(memberno!=x.mretno())
            {
             out.write((char*)&x,sizeof(x));
             flag=1;
            }
    if(flag==1)
       {
        textcolor(6);
        cout<<"\n\n";
        cprintf("MEMBER NUMBER DOES NOT EXSIST");
       }
    else
       {
        textcolor(6);
        cout<<"\n\n";
        cprintf("RECORD HAS BEEN DELETED");
       }
 in.close();
 out.close();
 remove("member.dat");
 rename("mtemp.dat","member.dat");
}
void mcount()
{
 ifstream in("member.dat",ios::binary);
  in.seekg(0,ios::end);
  textcolor(13);
   cout<<"\n\n";
   cprintf("NO OF BOOKS = ");
   cout<<" "<<in.tellg()/sizeof(members);
  in.close();
}
void give()
{
 library ob;
 members x;
 int mn,bkn;
 int mflag=0,bflag=0;
  textcolor(13);
  cout<<"\n\n";
  cprintf("ENTER THE MEMBER ID NUMBER");
  cin>>mn;
   fstream min("member.dat",ios::binary|ios::in|ios::out);
    while(min.read((char*)&x,sizeof(x)))
          if(mn==x.mretno())
             {
               mflag=1;
                if(x.retbkno()!=0)
                   {
                    textcolor(6);
                    cout<<"\n\n";
                    cprintf("ERROR, THE MEMBER HAS ALREADY BORROWED A BOOK");
                   }
                else
                  {
                   bflag=0;
                   textcolor(13);
                   cout<<"\n\n";
                   cprintf("ENTER THE BOOK NUMBER THAT HAS TO BE GIVEN");
                   cin>>bkn;
                    fstream bin("book.dat",ios::binary|ios::in|ios::out);
                     while(bin.read((char*)&ob,sizeof(ob)))
                           if(bkn==ob.retno())
                              {
                                bflag=1;
                                 if(ob.retstock()==0)
                                    {
                                     textcolor(6);
                                     cout<<"\n\n";
                                     cprintf("ERROR, NO STOCK");
                                    }
                                 else
                                    {
                                      x.upd_membook(bkn);
                                      ob.upd_bookstock('I');
                                      min.seekp(-sizeof(x),ios::cur);
                                      min.write((char*)&x,sizeof(x));
                                      bin.seekp(-sizeof(ob),ios::cur);
                                      bin.write((char*)&ob,sizeof(ob));
                                    }
                              }
                     bin.close();
                     if(bflag==0)
                     {
                       textcolor(6);
                       cout<<"\n\n";
                       cprintf("ERROR, INVALID BOOK CODE");
                     }
                  }
              }
   if(mflag==0)
      {
       textcolor(6);
       cout<<"\n\n";
       cprintf("ERROR, INVALID MEMBER");
      }
  min.close();
}
void receive()
{
 int mn,mflag=0,bflag=0,bkn;
 library ob;
 members x;
 textcolor(13);
 cout<<"\n\n";
 cprintf("ENTER THE MEMBER ID NUMBER");
 cin>>mn;
  fstream min("member.dat",ios::binary|ios::in|ios::out);
    while(min.read((char*)&x,sizeof(x)))
          if(mn==x.mretno())
             {
               mflag=1;
                if(x.retbkno()!=0)
                   {
                     bkn=x.retbkno();
                      fstream bin("book.dat",ios::binary|ios::in|ios::out);
                        while(bin.read((char*)&ob,sizeof(ob)))
                              if(bkn==ob.retno())
                                 {
                                   bflag=1;
                                    x.upd_membook(0);
                                    ob.upd_bookstock('R');
                                    min.seekp(-sizeof(x),ios::cur);
                                    min.write((char*)&x,sizeof(x));
                                    bin.seekp(-sizeof(ob),ios::cur);
                                    bin.write((char*)&ob,sizeof(ob));
                                 }
                      bin.close();
                      if(bflag==0)
                      {
                        textcolor(6);
                        cout<<"\n\n";
                        cprintf("ERROR, INVALID BOOK CODE");
                      }
                   }
             }
  if(mflag==0)
     {
      textcolor(6);
      cout<<"\n\n";
      cprintf("ERROR, INVALID MEMBER");
     }
 min.close();
}
void outputlendbook()
{
 cout<<"\n\n";
  members x;
   ifstream min("member.dat",ios::binary);
        while(min.read((char*)&x,sizeof(x)))
              x.outputbook();
 cout<<"\n\n\n";
 textcolor(6);
 cprintf("*PRESS ANT KEY TO CONTINUE*");
 getch();
 min.close();
}
void main()
{
 int op,choice,bnumber,option,mnumber,bknumber,membernumber;
    do
     {
       clrscr();
       textcolor(10);
       cout<<"\n\t\t\t";
       cprintf("WELCOME TO LIBRARY MANAGEMENT");
       cout<<"\n\t\t\t";
       cprintf("_______________________________________");
        textcolor(8);
        cout<<"\n\n\n";
        cprintf("ENTER YOUR OPTION");
        textcolor(14);
        cout<<"\n\n\n";
        cprintf("1.TO ENTER THE RECORD OF BOOKS");
        cout<<"\n\n";
        cprintf("2.TO ENTER THE RECORD OF MEMBERS");
        cout<<"\n\n";
        cprintf("3.TO LEND A BOOK TO A MEMBER");
        cout<<"\n\n";
        cprintf("4.TO RECEIVE A BOOK FROM THE MEMBER");
        cout<<"\n\n";
        cprintf("5.TO DISPLAY MEMBER/BOOK LEND DETAILS");
        cout<<"\n\n";
        cprintf("6.TO EXIT THE PROGRAM");
        cin>>op;
        getch();
           switch(op)
           {
            case 1:
                    do
                      {
                        clrscr();
                         heading();
                          textcolor(10);
                          cout<<"\n\n\n";
                          cprintf("RECORD OF BOOKS");
                          cout<<"\n";
                          cprintf("**********************");
                          textcolor(8);
                          cout<<"\n\n\n";
                          cprintf("ENTER YOUR OPTION");
                          textcolor(11);
                          cout<<"\n\n";
                          cprintf("1.TO CREATE A COMPLETELY NEW FILE");
                          cout<<"\n\n";
                          cprintf("2.TO ADD A BOOK TO THE EXSISTING RECORDS");
                          cout<<"\n\n";
                          cprintf("3.TO DISPLAY ALL THE BOOKS");
                          cout<<"\n\n";
                          cprintf("4.TO DISPLAY INDIVIDUAL DETAILS");
                          cout<<"\n\n";
                          cprintf("5.TO UPDATE A BOOK");
                          cout<<"\n\n";
                          cprintf("6.TO DELETE A BOOK");
                          cout<<"\n\n";
                          cprintf("7.TO KNOW THE NUMBER OF BOOKS");
                          cout<<"\n\n";
                          cprintf("8.TO EXIT BOOK RECORDS");
                          cin>>choice;
                        getch();
                          switch(choice)
                          {
                            case 1:
                                   clrscr();
                                    heading();
                                    textcolor(10);
                                     cout<<"\n\n\n";
                                     cprintf("FILE CREATION");
                                     cout<<"\n";
                                     cprintf("*****************");
                                     lcreate();
                                   getch();
                                     break;
                            case 2:
                                   clrscr();
                                    heading();
                                    textcolor(10);
                                     cout<<"\n\n\n";
                                    cprintf("ADDING BOOKS");
                                     cout<<"\n";
                                     cprintf("******************");
                                     lappend();
                                   getch();
                                     break;
                            case 3:
                                   clrscr();
                                    heading();
                                    textcolor(10);
                                     cout<<"\n\n\n";
                                     cprintf("DISPLAY OF ALL THE RECORDS");
                                     cout<<"\n";
                                     cprintf("***********************************");
                                     ldisplay();
                       getch();
                                     break;
                            case 4:
                                    clrscr();
                                     heading();
                                     textcolor(10);
                                      cout<<"\n\n\n";
                                      cprintf("INDIVIDUAL BOOK RECORDS");
                                      cout<<"\n";
                                      cprintf("**********************************");
                                      cout<<"\n\n";
                                      textcolor(13);
                                      cprintf("ENTER THE BOOK NUMBER OF THE BOOK TO BE DISPLAYED");
                                      cin>>bnumber;
                                      lindividual_display(bnumber);
                       getch();
                                     break;
                            case 5:
                                    clrscr();
                                     heading();
                                     textcolor(10);
                                      cout<<"\n\n\n";
                                      cprintf("UPDATION OF RECORDS");
                                      cout<<"\n";
                                      cprintf("***************************");
                                      textcolor(13);
                                      cout<<"\n\n";
                                      cprintf("ENTER THE BOOK NUMBER OF THE BOOK TO BE UPDATED");
                                      cin>>bknumber;
                                      lchange(bknumber);
                                    getch();
                                     break;
                            case 6:
                                    clrscr();
                                     heading();
                                     textcolor(10);
                                      cout<<"\n\n\n";
                                      cprintf("DELETION OF RECORDS");
                                      cout<<"\n";
                                      cprintf("***************************");
                                      ldeletion();
                                    getch();
                                     break;
                            case 7:
                                    clrscr();
                                     heading();
                                     textcolor(10);
                                     cout<<"\n\n\n";
                                     cprintf("NUMBER OF BOOKS");
                                     cout<<"\n";
                                     cprintf("**********************");
                                     lcount();
                                    getch();
                                       break;
                          }
                      }while(choice<8);
                         break;
            case 2:
                    do
                      {
                        clrscr();
                         heading();
                         textcolor(10);
                          cout<<"\n\n";
                          cprintf("RECORD OF MEMBERS");
                          cout<<"\n";
                          cprintf("*************************");
                          textcolor(11);
                          cout<<"\n\n\n";
                          cprintf("1.TO CREATE A COMPLETELY NEW FILE FOR ALL THE MEMBERS");
                          cout<<"\n\n";
                          cprintf("2.TO ADD A MEMBER TO THE EXSISTING DATA");
                          cout<<"\n\n";
                          cprintf("3.TO DISPLAY THE RECORDS OF ALL THE MEMBERS");
                          cout<<"\n\n";
                          cprintf("4.TO DISPLAY INDIVIDUAL DETAILS");
                          cout<<"\n\n";
                          cprintf("5.TO UPDATE THE RECORD OF MEMEBERS");
                          cout<<"\n\n";
                          cprintf("6.TO DELETE A MEMBER");
                          cout<<"\n\n";
                          cprintf("7.TO KNOW THE NUMBER OF MEMBERS");
                          cout<<"\n\n";
                          cprintf("8.TO EXIT");
                          cin>>option;
                        getch();
                         switch(option)
                         {
                          case 1:
                                  clrscr();
                                    heading();
                                     cout<<"\n\n";
                                     textcolor(10);
                                     cprintf("FILE CREATION");
                                     cout<<"\n";
                                     cprintf("*****************");
                                     mcreate();
                                  getch();
                                     break;
                          case 2:
                                  clrscr();
                                    heading();
                                     cout<<"\n\n";
                                     textcolor(10);
                                     cprintf("ADDING MEMBERS");
                                     cout<<"\n";
                                     cprintf("*********************");
                                     mappend();
                                  getch();
                                     break;
                          case 3:
                                  clrscr();
                                   heading();
                                     cout<<"\n\n";
                                     textcolor(10);
                                     cprintf("DISPLAY OF ALL THE MEMBER RECORDS");
                                     cout<<"\n";
                                     cprintf("**********************************************");
                                     mdisplay();
                                  getch();
                                     break;
                          case 4:
                                  clrscr();
                                   heading();
                                     cout<<"\n\n";
                                     textcolor(10);
                                     cprintf("DISPLAY OF INDIVIDUAL MEMBER DETAILS");
                                     cout<<"\n";
                                     cprintf("***************************************");
                                     textcolor(13);
                                     cout<<"\n\n";
                                     cprintf("ENTER THE MEMBER NUMBER OF THE PERSON");
                                     cin>>mnumber;
                                     mindividual_display(mnumber);
                                  getch();
                                     break;
                           case 5:
                                    clrscr();
                                     heading();
                                     textcolor(10);
                                      cout<<"\n\n\n";
                                      cprintf("UPDATION OF RECORDS");
                                      cout<<"\n";
                                      cprintf("***************************");
                                      textcolor(13);
                                      cout<<"\n\n";
                                      cprintf("ENTER THE MEMBER NUMBER OF THE MEMBER TO BE UPDATED");
                                      cin>>membernumber;
                                      mchange(membernumber);
                                    getch();
                                     break;
                          case 6:
                                  clrscr();
                                   heading();
                                    cout<<"\n\n";
                                    textcolor(10);
                                    cprintf("DELETION OF RECORDS");
                                    cout<<"\n";
                                    cprintf("***************************");
                                   mdelete();
                                  getch();
                                     break;
                          case 7:
                                  clrscr();
                                   heading();
                                    cout<<"\n\n";
                                    textcolor(10);
                                    cprintf("NUMBER OF MEMBERS");
                                    cout<<"\n";
                                    cprintf("*************************");
                                   mcount();
                                  getch();
                                     break;
                         }
                      }while(option<8);
                         break;
            case 3:
                    clrscr();
                     heading();
                     textcolor(10);
cout<<"\n\n\n";
                      cprintf("LENDING BOOKS");
                      cout<<"\n";
                      cprintf("_________________");
                     give();
                    getch();
                     break;
            case 4:
                    clrscr();
                     heading();
                     textcolor(10);
                      cout<<"\n\n\n";
                      cprintf("RECEIVING BOOKS");
                      cout<<"\n";
                      cprintf("___________________");
                     receive();
                    getch();
                     break;
            case 5:
                    clrscr();
                     heading();
                     textcolor(10);
                      cout<<"\n\n\n";
                      cprintf("LENDED BOOKS DETAIL");
                      cout<<"\n";
                      cprintf("________________________");
                     outputlendbook();
                    getch();
                     break;

           }
     }while(op<6);
 getch();
}








