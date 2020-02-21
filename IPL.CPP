#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h>
#include<iomanip.h>
class IPL
{
 int Rank,Matches;
 float Nrr;
 char Teamname[30],jersey[20];
 public:int Points;
	char* Jersey()
	{
	 return jersey;
	}
	int getrank()
	{
	 return Rank;
	}
	char* get_name()
	{
	 return Teamname;
	}
	void get1()
	{
	 cout<<"\n\tRank: ";
	 cin>>Rank;
	 cout<<"\n\tName of team: ";
	 gets(Teamname);
	 cout<<"\n\tJersey of team: ";
	 gets(jersey);
	 cout<<"\n\tPoints(0< & 30>): ";
	 cin>>Points;
	 cout<<"\n\tMatches Played: ";
	 cin>>Matches;
	 cout<<"\n\tNet run rate(-1< & 1>)(upto 3 decimal places): ";
	 cin>>Nrr;
	}
	void modify()
	{
	 char ch[10];
	 cout<<"\n\tThe record of team is: ";
	 cout<<"\n\tRank: "<<Rank;
	 cout<<"\n\tMatches played: "<<Matches;
	 cout<<"\n\tPoints: "<<Points;
	 cout<<"\n\tNet run rate: "<<Nrr;
	 cout<<"\n\tDo you want to change the Name of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new name: ";
	  gets(Teamname);
	 }
	 cout<<"\n\tDo you want to change the Jersey of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new jersey: ";
	  gets(jersey);
	 }
	 cout<<"\n\tDo you want to change the Matches of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new matches: ";
	  cin>>Matches;
	 }
	 cout<<"\n\tDo you want to change the Points of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new points: ";
	  cin>>Points;
	 }
	 cout<<"\n\tDo you want to change the Net run rate of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new run rate: ";
	  cin>>Nrr;
	 }
	 show2();
	}
	void modify_1()
	{
	 char ch[10];
	 cout<<"\n\tThe record of team is: ";
	 cout<<"\n\tRank: "<<Rank;
	 cout<<"\n\tMatches played: "<<Matches;
	 cout<<"\n\tPoints: "<<Points;
	 cout<<"\n\tNet run rate: "<<Nrr;
	 cout<<"\n\tDo you want to change the Rank of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new rank: ";
	  cin>>Rank;
	 }
	 cout<<"\n\tDo you want to change the Matches of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new matches: ";
	  cin>>Matches;
	 }
	 cout<<"\n\tDo you want to change the Points of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new points: ";
	  cin>>Points;
	 }
	 cout<<"\n\tDo you want to change the Net run rate of Team: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new run rate: ";
	  cin>>Nrr;
	 }
	 show2();
	}
	void show1()
	{
	 cout<<"\n\n"<<Rank<<"\t"<<Teamname<<setw(27-strlen(Teamname))<<"\t "<<jersey<<setw(7-strlen(jersey))<<"     "<<Matches<<"     "<<Points<<"     "<<Nrr;
	}
	void show2()
	{
	 cout<<"\n\tThe record after the modification is: ";
	 cout<<"\n\tRank: "<<Rank;
	 cout<<"\n\tName: "<<Teamname;
	 cout<<"\n\tJersey: "<<jersey;
	 cout<<"\n\tMatches played: "<<Matches;
	 cout<<"\n\tPoints: "<<Points;
	 cout<<"\n\tNet run rate: "<<Nrr;
	}
};
class IPL1
{
 char Name[30],Best[30],Team[30];
 int rank,Runs,Sixes;
 public:char* getname()
	{
	 return Name;
	}
	void Orange_in()
	{
	 cout<<"\n\tRank: ";
	 cin>>rank;
	 cout<<"\n\tName: ";
	 gets(Name);
	 cout<<"\n\tPlaying for: ";
	 gets(Team);
	 cout<<"\n\tRuns: ";
	 cin>>Runs;
	 cout<<"\n\tSixes: ";
	 cin>>Sixes;
	 cout<<"\n\tBest performance: ";
	 gets(Best);
	}
	void modify_record1()
	{
	 char ch[10];
	 cout<<"\n\tThe record of player is: ";
	 cout<<"\n\tRank: "<<rank;
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tTotal Runs: "<<Runs;
	 cout<<"\n\tTotal sixes: "<<Sixes;
	 cout<<"\n\tDo you want to change rank of the player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new rank of player: ";
	  cin>>rank;
	 }
	 cout<<"\n\tDo you want to change the team of Player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the current team of player: ";
	  gets(Team);
	 }
	 cout<<"\n\tDo you want to change the total runs of Player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new runs: ";
	  cin>>Runs;
	 }
	 cout<<"\n\tDo you want to change the total sixes by player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the total sixes: ";
	  cin>>Sixes;
	 }
	 Orange_out();
	}
	void Orange_out()
	{
	 cout<<"\n\tThe details are: ";
	 cout<<"\n\tRank: "<<rank;
	 cout<<"\n\tName: ";
	 puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tRuns: "<<Runs;
	 cout<<"\n\tSixes: "<<Sixes;
	 cout<<"\n\tBest performance: ";
	 puts(Best);
	}
};
class IPL2
{
 char Name[30],Best[30],Team[30];
 int rank,Wickets,Hattricks;
 public:char* getname()
	{
	 return Name;
	}
	void Purple_in()
	{
	 cout<<"\n\tRank: ";
	 cin>>rank;
	 cout<<"\n\tName: ";
	 gets(Name);
	 cout<<"\n\tPlaying for: ";
	 gets(Team);
	 cout<<"\n\tTotal Wickets: ";
	 cin>>Wickets;
	 cout<<"\n\tNumber of Hattricks: ";
	 cin>>Hattricks;
	 cout<<"\n\tBest performance: ";
	 gets(Best);
	}
	void modify_record2()
	{
	 char ch[10];
	 cout<<"\n\tThe record of player is: ";
	 cout<<"\n\tRank: "<<rank;
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tTotal Wickets: "<<Wickets;
	 cout<<"\n\tTotal Hattricks: "<<Hattricks;
	 cout<<"\n\tDo you want to change rank of the player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new rank of player: ";
	  cin>>rank;
	 }
	 cout<<"\n\tDo you want to change the team of Player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the current team of player: ";
	  gets(Team);
	 }
	 cout<<"\n\tDo you want to change the total Wickets taken by Player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new number of wickets taken by player: ";
	  cin>>Wickets;
	 }
	 cout<<"\n\tDo you want to change the total Hattricks taken by player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new number of hattricks taken b player: ";
	  cin>>Hattricks;
	 }
	 Purple_out();
	}
	void Purple_out()
	{
	 cout<<"\n\tRank: "<<rank;
	 cout<<"\n\tThe details are: ";
	 cout<<"\n\tName: ";
	 puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tTotal Wickets: "<<Wickets;
	 cout<<"\n\tHattricks: "<<Hattricks;
	 cout<<"\n\tBest performance: ";
	 puts(Best);
	}
};
class IPL3
{
 char Name[30],Best[30],Team[30],Speciality[30];
 int age,Runs,fifties,centuries;
 public:char* getname()
	{
	 return Name;
	}
	void Player_in()
	{
	 cout<<"\n\tName: ";
	 gets(Name);
	 cout<<"\n\tAge: ";
	 cin>>age;
	 cout<<"\n\tPlaying for: ";
	 gets(Team);
	 cout<<"\n\tSpeciality: ";
	 gets(Speciality);
	 cout<<"\n\tRuns: ";
	 cin>>Runs;
	 cout<<"\n\t50's: ";
	 cin>>fifties;
	 cout<<"\n\t100's: ";
	 cin>>centuries;
	 cout<<"\n\tBest performance: ";
	 gets(Best);
	}
	void modify_record3()
	{
	 char ch[10];
	 cout<<"\n\tThe record of player is: ";
	 cout<<"\n\tName: ";puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tSpeciality: ";
	 puts(Speciality);
	 cout<<"\n\tRuns: "<<Runs;
	 cout<<"\n\t50's: "<<fifties;
	 cout<<"\n\t100's: "<<centuries;
	 cout<<"\n\tDo you want to change the total runs of Player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new runs: ";
	  cin>>Runs;
	 }
	 Player_out();
	}
	void Player_out()
	{
	 cout<<"\n\tThe details are: ";
	 cout<<"\n\tName: ";
	 puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tRuns: "<<Runs;
	 cout<<"\n\tSpeciality: ";
	 puts(Speciality);
	 cout<<"\n\tRuns: "<<Runs;
	 cout<<"\n\t50's: "<<fifties;
	 cout<<"\n\t100's: "<<centuries;
	 cout<<"\n\tBest performance: ";
	 puts(Best);
	}
};
class IPL4
{
 char Name[30],Best[30],Team[30],Speciality[30];
 int age,wickets,hattricks;
 public:char* getname()
	{
	 return Name;
	}
	void Player1_in()
	{
	 cout<<"\n\tName: ";
	 gets(Name);
	 cout<<"\n\tAge: ";
	 cin>>age;
	 cout<<"\n\tPlaying for: ";
	 gets(Team);
	 cout<<"\n\tSpeciality: ";
	 gets(Speciality);
	 cout<<"\n\tWickets: ";
	 cin>>wickets;
	 cout<<"\n\tHattricks: ";
	 cin>>hattricks;
	 cout<<"\n\tBest performance: ";
	 gets(Best);
	}
	void modify_record4()
	{
	 char ch[10];
	 cout<<"\n\tThe record of player is: ";
	 cout<<"\n\tName: ";puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tSpeciality: ";
	 puts(Speciality);
	 cout<<"\n\tWickets: "<<wickets;
	 cout<<"\n\tHattricks: "<<hattricks;
	 cout<<"\n\tDo you want to change the total runs of Player: ";
	 gets(ch);
	 cout<<"\n\tDo you want to change the total wickets by player: ";
	 gets(ch);
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the total wickets: ";
	  cin>>wickets;
	 }
	 if(strcmpi(ch,"Yes")==0)
	 {
	  cout<<"\n\tEnter the new hattricks: ";
	  cin>>hattricks;
	 }
	 Player1_out();
	}
	void Player1_out()
	{
	 cout<<"\n\tThe details are: ";
	 cout<<"\n\tName: ";
	 puts(Name);
	 cout<<"\n\tPlaying for: ";
	 puts(Team);
	 cout<<"\n\tSpeciality: ";
	 puts(Speciality);
	 cout<<"\n\tWickets: "<<wickets;
	 cout<<"\n\tHattricks: "<<hattricks;
	 cout<<"\n\tBest performance: ";
	 puts(Best);
	}
};
void display_table(IPL i)
{
 ifstream f("ipl.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 textbackground(23);
 textcolor(BLUE+BLINK);
 gotoxy(27,2);cprintf("RANK TABLE");
 gotoxy(24,3);cout<<"****************";
 textbackground(16);
 textcolor(WHITE);
 cout<<"\nRank\tTeam\t\t\t\t Jersey  Matches  Points  NetRunRate";
 cout<<"\n________________________________________________________________________________";
 while(f.read((char*)&i,sizeof i))
 {
  i.show1();
  cout<<"\n------------------------------------------------------------------------------";
 }
 f.close();
}
void append_rec(IPL i)
{
 int num;
 ofstream f("ipl.dat",ios::binary|ios::app);
 cout<<"\n\tEnter the total number of teams for Rank Table: ";
 cin>>num;
 for(int a=0;a<num;a++)
 {
  cout<<"\n\tEnter the details of team "<<a+1<<": ";
  i.get1();
  f.write((char*)&i,sizeof i);
 }
 cout<<"\n\tRecord has been entered.";
 f.close();
}
void delete_rec(IPL i)
{
 char name[30];
 int found=0;
 cout<<"\nEnter the name of team whose record is to be deleted: \n";
 gets(name);
 ifstream f("ipl.dat",ios::binary);
 ofstream fout("abc.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i,sizeof i))
 {
  if(strcmpi(i.get_name(),name)!=0)
  {
   found++;
   fout.write((char*)&i,sizeof i);
  }
 }
 if(found==0)
  cout<<"\n\tRecord not found.";
 else
  cout<<"\n\tRecord of team is deleted.";
 f.close();
 fout.close();
 remove("ipl.dat");
 rename("abc.dat","ipl.dat");
}
void modify_rec(IPL i)
{
 int found=0,r;
 char name[28];
 fstream f("ipl.dat",ios::binary|ios::in|ios::out);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 cout<<"\n\tEnter the name of team whose record is to be modified: ";
 gets(name);
 while(!f.eof())
 {
  f.read((char*)&i,sizeof i);
  if(strcmpi(i.get_name(),name)==0)
  {
   found++;
   cout<<"\n\tRecord found.";
   i.modify();
   f.seekg(f.tellg()-sizeof i);
   f.write((char*)&i,sizeof i);
   break;
  }
 }
 if(found==0)
  cout<<"\n\tTeam not found.";
 f.close();
}
int rank()
{
 int ch;
 IPL i;
 /*ofstream f("ipl.dat",ios::binary,ios::app);
 f.write((char*)&i,sizeof i);
 f.close();*/
 cout<<"\n\t#. So you have chosen for Rank Table.";
 cout<<"\n\t#. Ok there is again a menu.";
 cout<<"\n\tpress any key to continue....";
 getch();
 bs2:
 {
  clrscr();
  textbackground(9);textcolor(YELLOW+BLINK);
  gotoxy(35,4);cprintf("'RANK TABLE MENU'");
  textbackground(24);textcolor(WHITE);
  gotoxy(27,5);
  cout<<"=================================";
  gotoxy(27,7);cout<<"1.View Rank Table.";
  gotoxy(27,10);cout<<"2.Add Record in Rank Table.";
  gotoxy(27,13);cout<<"3.Delete a Record from Rank Table.";
  gotoxy(27,16);cout<<"4.Modify a record.";
  gotoxy(27,19);cout<<"5.BACK.";
  cout<<"\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  display_table(i);
	  break;
   case 2:clrscr();
	  append_rec(i);
	  break;
   case 3:clrscr();
	  delete_rec(i);
	  break;
   case 4:modify_rec(i);
	  break;
   case 5:return ch;
  }
  cout<<"\n\n\nEnter you choice(1-go to backscreen/2-go to main menu): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
void view_rec2(IPL2 i2)
{
 ifstream f("ipl2.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i2,sizeof i2))
 {
  i2.Purple_out();
 }
 f.close();
}
void app_rec2(IPL2 i2)
{
 ofstream f("ipl2.dat",ios::binary|ios::app);
 int num;
 cout<<"\n\tEnter the number of players whose record is to be added: ";
 cin>>num;
 for(int a=0;a<num;a++)
 {
  cout<<"\n\tEnter the details of player: "<<a+1;
  i2.Purple_in();
  f.write((char*)&i2,sizeof i2);
 }
 cout<<"\n\tRecord has been entered.";
 f.close();
}
void del_rec2(IPL2 i2)
{
 char name[30];
 int found=0;
 cout<<"\n\tEnter the name of player whose record you want to delete: ";
 gets(name);
 ifstream f("ipl2.dat",ios::binary);
 ofstream fout("abc.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i2,sizeof i2))
 {
  if(strcmpi(name,i2.getname())==0)
  {
   cout<<"\n\tRecord of player found";
   found++;
  }
  else
  fout.write((char*)&i2,sizeof i2);
 }
 if(found==0)
 cout<<"\n\tRecord not found.";
 f.close();
 fout.close();
 remove("ipl2.dat");
 rename("abc.dat","ipl2.dat");
}
void mod_rec2(IPL2 i2)
{
 int found=0;
 char name[28];
 fstream f("ipl2.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 cout<<"\n\tEnter the name of player whose record is to be modified: ";
 gets(name);
 while(!f.eof())
 {
  f.read((char*)&i2,sizeof i2);
  if(strcmpi(i2.getname(),name)==0)
  {
   found++;
   cout<<"\n\tRecord found.";
   i2.modify_record2();
   f.seekg(f.tellg()-sizeof i2);
   f.write((char*)&i2,sizeof i2);
   break;
  }
 }
 if(found==0)
  cout<<"\n\tRequired Player not found.";
 f.close();
}
int Purple()
{
 IPL2 i2;
 /*ofstream f("ipl2.dat",ios::binary);
 f.write((char*)&i2,sizeof i2);
 f.close();   */
 int ch,choice;
 bs2:
 {
  clrscr();
  gotoxy(35,4);cout<<"'PURPLE CAP MENU'";
  gotoxy(25,5);
  cout<<"====================================";
  gotoxy(25,7);cout<<"1.View records of Purple Cap Winners.";
  gotoxy(25,10);cout<<"2.Add new Record.";
  gotoxy(25,13);cout<<"3.Delete a Record.";
  gotoxy(25,16);cout<<"4.Modify a record.";
  gotoxy(25,19);cout<<"5.BACK.";
  cout<<"\n\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  view_rec2(i2);
	  break;
   case 2:clrscr();
	  app_rec2(i2);
	  break;
   case 3:clrscr();
	  del_rec2(i2);
	  break;
   case 4:mod_rec2(i2);
	  break;
   case 5:return ch;
  }
  cout<<"\n\n\n\n\nEnter yor choice(1-to continue/2-to go to backscreen): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
void view_rec1(IPL1 i1)
{
 ifstream f("ipl1.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i1,sizeof i1))
 {
  i1.Orange_out();
  cout<<"\n------------------------------------------------------------------------------";
 }
 f.close();
}
void app_rec1(IPL1 i1)
{
 ofstream f("ipl1.dat",ios::binary|ios::app);
 int num;
 cout<<"\n\tEnter the number of players whose record is to be added: ";
 cin>>num;
 for(int a=0;a<num;a++)
 {
  cout<<"\n\tEnter the details of player: "<<a+1;
  i1.Orange_in();
  f.write((char*)&i1,sizeof i1);
 }
 cout<<"\n\tRecord has been entered.";
 f.close();
}
void del_rec1(IPL1 i1)
{
 char name[30];
 int found=0;
 cout<<"\n\tEnter the name of player whose record you want to delete: ";
 gets(name);
 ifstream f("ipl1.dat",ios::binary);
 ofstream fout("abc.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i1,sizeof i1))
 {
  if(strcmpi(i1.getname(),name)!=0)
  {
   cout<<"\n\tRecord of player deleted.";
   found++;
   fout.write((char*)&i1,sizeof i1);
  }
 }
 if(found==0)
 cout<<"\n\tRecord not found.";
 f.close();
 fout.close();
 remove("ipl1.dat");
 rename("abc.dat","ipl1.dat");
}
void mod_rec1(IPL1 i1)
{
 int found=0;
 char name[28];
 fstream f("ipl1.dat",ios::binary,ios::in|ios::out);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 cout<<"\n\tEnter the name of player whose record is to be modified: ";
 gets(name);
 while(!f.eof())
 {
  f.read((char*)&i1,sizeof i1);
  if(strcmpi(i1.getname(),name)==0)
  {
   found++;
   cout<<"\n\tRecord found.";
   i1.modify_record1();
   f.seekg(f.tellg()-sizeof i1);
   f.write((char*)&i1,sizeof i1);
   break;
  }
 }
 if(found==0)
  cout<<"\n\tRequired Player not found.";
 f.close();
}
int Orange()
{
 IPL1 i1;
 /*ofstream f("ipl1.dat",ios::binary);  //just to create a file.
 f.write((char*)&i1,sizeof i1);
 f.close();  */
 int ch,choice;
 bs2:
 {
  clrscr();
  gotoxy(35,4);cout<<"'ORANGE CAP MENU'";
  gotoxy(25,5);
  cout<<"====================================";
  gotoxy(25,7);cout<<"1.View records of Orange Cap Winners.";
  gotoxy(25,10);cout<<"2.Add new Record.";
  gotoxy(25,13);cout<<"3.Delete a Record.";
  gotoxy(25,16);cout<<"4.Modify a record.";
  gotoxy(25,19);cout<<"5.BACK.";
  cout<<"\n\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  view_rec1(i1);
	  break;
   case 2:clrscr();
	  app_rec1(i1);
	  break;
   case 3:clrscr();
	  del_rec1(i1);
	  break;
   case 4:mod_rec1(i1);
	  break;
   case 5:return ch;
  }
  cout<<"\n\n\n\n\nEnter yor choice(1-to continue/2-to go to backscreen): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
int special_rec()
{
 int ch,choice;
 cout<<"\n\tSo you have chosen for Special Records.";
 cout<<"\n\tOk there is again a menu.";
 cout<<"\n\tpress any key to continue....";
 getch();
 bs2:
 {
  clrscr();
  gotoxy(33,4);
  cout<<"'SPECIAL RECORDS MENU'";
  gotoxy(28,5);
  cout<<"===============================";
  gotoxy(30,8);cout<<"1.Orange Cap.";
  gotoxy(30,14);cout<<"2.Purple Cap.";
  gotoxy(30,20);cout<<"3.BACK";
  cout<<"\n\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  choice=Orange();
	  if(choice==2||choice==5)
	  {
	   clrscr();
	   goto bs2;
	  }
	  break;
   case 2:clrscr();
	  choice=Purple();
	  if(choice==2||choice==5)
	  {
	   clrscr();
	   goto bs2;
	  }
	  break;
   case 3:return ch;
  }
  cout<<"\n\n\n\n\nEnter yor choice(1-go to backscreen/2-to go to special records menu): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
void view_rec3(IPL3 i3)
{
 ifstream f("ipl3.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i3,sizeof i3))
 {
  i3.Player_out();
 }
 f.close();
}
void app_rec3(IPL3 i3)
{
 ofstream f("ipl3.dat",ios::binary|ios::app);
 int num;
 cout<<"\n\tEnter the number of players whose record is to be added: ";
 cin>>num;
 for(int a=0;a<num;a++)
 {
  cout<<"\n\tEnter the details of player: "<<a+1;
  i3.Player_in();
  f.write((char*)&i3,sizeof i3);
 }
 cout<<"\n\tRecord has been entered.";
 f.close();
}
void del_rec3(IPL3 i3)
{
 char name[30];
 int found=0;
 cout<<"\n\tEnter the name of player whose record you want to delete: ";
 gets(name);
 ifstream f("ipl3.dat",ios::binary);
 ofstream fout("abc.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i3,sizeof i3))
 {
  if(strcmpi(name,i3.getname())==0)
  {
   cout<<"\n\tRecord of player found";
   found++;
  }
  else
  fout.write((char*)&i3,sizeof i3);
 }
 if(found==0)
 cout<<"\n\tRecord not found.";
 f.close();
 fout.close();
 remove("ipl3.dat");
 rename("abc.dat","ipl3.dat");
}
void mod_rec3(IPL3 i3)
{
 int found=0;
 char name[28];
 fstream f("ipl3.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 cout<<"\n\tEnter the name of player whose record is to be modified: ";
 gets(name);
 while(!f.eof())
 {
  f.read((char*)&i3,sizeof i3);
  if(strcmpi(i3.getname(),name)==0)
  {
   found++;
   cout<<"\n\tRecord found.";
   i3.modify_record3();
   f.seekg(f.tellg()-sizeof i3);
   f.write((char*)&i3,sizeof i3);
   break;
  }
 }
 if(found==0)
  cout<<"\n\tRequired Player not found.";
 f.close();
}
int Player1()
{
 IPL3 i3;
 /*ofstream f("ipl3.dat",ios::binary);  //just to create a file.
 f.write((char*)&i3,sizeof i3);
 f.close();  */
 int ch,choice;
 bs2:
 {
  clrscr();
  gotoxy(35,4);cout<<"'PLAYER(BATSMAN) MENU'";
  gotoxy(25,5);
  cout<<"====================================";
  gotoxy(25,7);cout<<"1.View records of Players.";
  gotoxy(25,10);cout<<"2.Add new Record.";
  gotoxy(25,13);cout<<"3.Delete a Record.";
  gotoxy(25,16);cout<<"4.Modify a record.";
  gotoxy(25,19);cout<<"5.BACK.";
  cout<<"\n\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  view_rec3(i3);
	  break;
   case 2:clrscr();
	  app_rec3(i3);
	  break;
   case 3:clrscr();
	  del_rec3(i3);
	  break;
   case 4:mod_rec3(i3);
	  break;
   case 5:return ch;
  }
  cout<<"\n\n\n\n\nEnter yor choice(1-to continue/2-to go to backscreen): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
void view_rec4(IPL4 i4)
{
 ifstream f("ipl4.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i4,sizeof i4))
 {
  i4.Player1_out();
 }
 f.close();
}
void app_rec4(IPL4 i4)
{
 ofstream f("ipl4.dat",ios::binary|ios::app);
 int num;
 cout<<"\n\tEnter the number of players whose record is to be added: ";
 cin>>num;
 for(int a=0;a<num;a++)
 {
  cout<<"\n\tEnter the details of player: "<<a+1;
  i4.Player1_in();
  f.write((char*)&i4,sizeof i4);
 }
 cout<<"\n\tRecord has been entered.";
 f.close();
}
void del_rec4(IPL4 i4)
{
 char name[30];
 int found=0;
 cout<<"\n\tEnter the name of player whose record you want to delete: ";
 gets(name);
 ifstream f("ipl4.dat",ios::binary);
 ofstream fout("abc.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 while(f.read((char*)&i4,sizeof i4))
 {
  if(strcmpi(name,i4.getname())==0)
  {
   cout<<"\n\tRecord of player found";
   found++;
  }
  else
  fout.write((char*)&i4,sizeof i4);
 }
 if(found==0)
 cout<<"\n\tRecord not found.";
 f.close();
 fout.close();
 remove("ipl4.dat");
 rename("abc.dat","ipl4.dat");
}
void mod_rec4(IPL4 i4)
{
 int found=0;
 char name[28];
 fstream f("ipl4.dat",ios::binary);
 if(!f)
 {
  cout<<"\n\tUnable to open file.";
  return;
 }
 cout<<"\n\tEnter the name of player whose record is to be modified: ";
 gets(name);
 while(!f.eof())
 {
  f.read((char*)&i4,sizeof i4);
  if(strcmpi(i4.getname(),name)==0)
  {
   found++;
   cout<<"\n\tRecord found.";
   i4.modify_record4();
   f.seekg(f.tellg()-sizeof i4);
   f.write((char*)&i4,sizeof i4);
   break;
  }
 }
 if(found==0)
  cout<<"\n\tRequired Player not found.";
 f.close();
}
int Player2()
{
 IPL4 i4;
 /*ofstream f("ipl4.dat",ios::binary);  //just to create a file.
 f.write((char*)&i4,sizeof i4);
 f.close();  */
 int ch,choice;
 bs2:
 {
  clrscr();
  gotoxy(35,4);cout<<"'PLAYER(BOWLER) MENU'";
  gotoxy(25,5);
  cout<<"====================================";
  gotoxy(25,7);cout<<"1.View records of Players.";
  gotoxy(25,10);cout<<"2.Add new Record.";
  gotoxy(25,13);cout<<"3.Delete a Record.";
  gotoxy(25,16);cout<<"4.Modify a record.";
  gotoxy(25,19);cout<<"5.BACK.";
  cout<<"\n\n\n\tEnter your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:clrscr();
	  view_rec4(i4);
	  break;
   case 2:clrscr();
	  app_rec4(i4);
	  break;
   case 3:clrscr();
	  del_rec4(i4);
	  break;
   case 4:mod_rec4(i4);
	  break;
   case 5:return ch;
  }
  cout<<"\n\n\n\n\nEnter yor choice(1-to continue/2-to go to backscreen): ";
  cin>>ch;
 }
 if(ch==1)
   goto bs2;
 else if(ch==2)
   return ch;
 else
   return 0;
}
void match(IPL i)
{
 clrscr();
 randomize();
 fstream f;
 f.open("ipl.dat",ios::binary|ios::in|ios::out);
 int score,csk,mi,rcb,srh;
 score=csk=rcb=srh=mi=0;
 cout<<"\n\tTOP 4 TEAMS are: ";
 cout<<"\n\t1.Mumbai Indians\n\t2.Royal Challengers Banglore\n\t3.Sunrisers Hyderabad\n\t4.Chennai Super Kings.";
 getch();
 cout<<"\n\t\t\t\tQualifier1 match.";
 score=random(2);
 if(score==0)
 {
  mi++;
  cout<<"\n\tMI is in final.";
  cout<<"\n\tRCB is in Eliminator.";
  while(f.read((char*)&i,sizeof i))
  {
   if(strcmpi(i.get_name(),"Mumbai Indians")==0)
   {
    i.modify_1();
    f.seekg(f.tellg()-sizeof i);
    f.write((char*)&i,sizeof i);
   }
  }
 }
 else
 {
  rcb++;
  cout<<"\n\tRCB is in final.";
  cout<<"\n\tMI is in eliminator.";
  while(f.read((char*)&i,sizeof i))
  {
   if(strcmpi(i.get_name(),"Royal Challengers Banglore")==0)
   {
    i.modify_1();
    f.seekg(f.tellg()-sizeof i);
    f.write((char*)&i,sizeof i);
   }
  }
 }
 f.close();
 cout<<"\n\tpress any key to continue....";
 getch();
 f.open("ipl.dat",ios::binary|ios::in|ios::out);
 cout<<"\n\t\t\t\tEliminator match.";
 score=random(2);
 if(score==0)
 {
  csk++;
  cout<<"\n\tCSK is in qualifier2 ";
  while(f.read((char*)&i,sizeof i))
  {
   if(strcmpi(i.get_name(),"Chennai Super Kings")==0)
   {
    i.modify_1();
    f.seekg(f.tellg()-sizeof i);
    f.write((char*)&i,sizeof i);
   }
  }
 }
 else
 {
  srh++;
  cout<<"\n\tSRH is in qualifier2.";
  while(f.read((char*)&i,sizeof i))
  {
   if(strcmpi(i.get_name(),"Sunrisers Hyderabad")==0)
   {
    i.modify_1();
    f.seekg(f.tellg()-sizeof i);
    f.write((char*)&i,sizeof i);
   }
  }
 }
 f.close();
 cout<<"\n\tpress any key to continue....";
 getch();
 f.open("ipl.dat",ios::binary|ios::in|ios::out);
 cout<<"\n\t\t\t\tQualifier2 match.";
 score=random(2);
 if(score==0)
 {
  if(rcb==0)
  {
   rcb++;
   cout<<"\n\tRCB is in final.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Royal Challengers Banglore")==0)
    {
     i.modify();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
  else
  {
   mi++;
   cout<<"\n\tMI is in final.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Mumbai Indians")==0)
    {
     i.modify();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
 }
 else
 {
  if(csk==1)
  {
   csk++;
   cout<<"\n\tCSK is in final.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Chennai Super Kings")==0)
    {
     i.modify_1();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
  else
  {
   srh++;
   cout<<"\n\tSRH is in final.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Sunrisers Hyderabad")==0)
    {
     i.modify_1();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
 }
 f.close();
 cout<<"\n\tpress any key to continue....";
 getch();
 f.open("ipl.dat",ios::binary|ios::in|ios::out);
 cout<<"\n\t\t\t\t\tFinal Match";
 score=random(2);
 if(score==0)
 {
  if(rcb==1)
  {
   cout<<"\n\tRCB wins";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Royal Challengers Banglore")==0)
    {
     i.modify();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
  else
  {
   cout<<"\n\tMI wins.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Mumbai Indians")==0)
    {
     i.modify();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
 }
 else
 {
  if(csk==2)
  {
   cout<<"\n\tCSK wins.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Chennai Super Kings")==0)
    {
     i.modify_1();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
  else
  {
   cout<<"\n\tSRH wins.";
   while(f.read((char*)&i,sizeof i))
   {
    if(strcmpi(i.get_name(),"Sunrisers Hyderabad")==0)
    {
     i.modify_1();
     f.seekg(f.tellg()-sizeof i);
     f.write((char*)&i,sizeof i);
    }
   }
  }
 }
 cout<<"\n\press any key to continue....";
 getch();
}
void main()
{
 clrscr();
 int ch,choice;
 char enter;
 delay(1000);
 textbackground(18); textcolor(YELLOW+BLINK);
 gotoxy(30,5); cprintf("'Vivo & Pepsi.Co presents'");
 gotoxy(21,6); cout<<"^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^";
 delay(1000);
 gotoxy(19,7); cprintf("The Greatest , The Biggest Sport Event of India");
 gotoxy(6,8);
 cout<<"-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^";
 delay(1000);
 textbackground(21); textcolor(WHITE+BLINK);
 gotoxy(32,12); cprintf("- W E L C O M E  T O -");
 gotoxy(30,13); cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^";
 delay(1000);
 textbackground(23); textcolor(BLUE+BLINK);
 gotoxy(42,16); cprintf("THE");
 gotoxy(37,17); cout<<"-*-*-*-*-*-*-";
 delay(1500);
 textcolor(RED+BLINK);
 gotoxy(31,19); cprintf("''INDIAN PREMIER LEAGUE''");
 textcolor(WHITE); textbackground(16);
 gotoxy(10,20);
 cprintf("*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/");
 delay(500);
 cout<<"\n\tPress 'Y' to continue: ";
 cin>>enter;
 if(enter=='Y'||enter=='y')
   goto continue_prog;
 else
   return;
 continue_prog:
 clrscr();
 bs1:
 {
  gotoxy(35,4);cout<<"'IPL Main Menu'";
  gotoxy(26,5);
  cout<<"==================================";
  gotoxy(26,7);cout<<"1.Rank Table.";
  gotoxy(26,10);cout<<"2.Special Records.";
  gotoxy(26,13);cout<<"3.Playoffs.";
  gotoxy(26,16);cout<<"4.Search for your favourite team.";
  gotoxy(26,17);cout<<"=>a.Batsman";
  gotoxy(26,18);cout<<"=>b.Bowler";
  gotoxy(26,21);cout<<"5.Exit";
  cout<<"\n\n\n\n\tOk,let us know your choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:choice=rank();
	  if(choice==2||choice==5)
	  {
	   clrscr();
	   goto bs1;
	  }
	  break;
   case 2:choice=special_rec();
	  if(choice==2||choice==3)
	  {
	   clrscr();
	   goto bs1;
	  }
	  break;
   case 3:IPL i;
	  match(i);
	  clrscr();
	  goto bs1;
   case 4:cout<<"\n\tAgain Enter your choice for your favourite player(a/b): ";
	  cin>>enter;
	  if(enter=='a')
	  {
	   clrscr();
	   ch=Player1();
	   clrscr();
	   if(ch==2||ch==5)
	   goto bs1;
	  }
	  else if(enter=='b')
	  {
	   clrscr();
	   ch=Player2();
	   clrscr();
	   if(ch==2||ch==5)
	   goto bs1;
	  }
	 break;
   case 5:return;
  }
 }
 getch();
}





