

# include <iostream.h>
# include <conio.h>
# include <stdio.h>
# include <fstream.h>
# include <process.h>
# include <dos.h>
# include <string.h>

# define CP cprintf

# include "purchase.cpp"
# include "customer.cpp"
# include "sales.cpp"
# include "service.cpp"
# include "search3.cpp"

# include "search.cpp"
# include "search2.cpp"
# include "search4.cpp"
# include "searsalesid.cpp"
# include "sear1salescompany.cpp"
# include "sear2salesname.cpp"
# include "sear3salesdealer.cpp"
# include "searchcustomerid.cpp"
# include "searcust.cpp"
# include "serv1.cpp"
# include "serv2.cpp"
# include "purmodid.cpp"
# include "delpurid.cpp"
# include "custmodid.cpp"
# include "custdelid.cpp"
# include "delcustname.cpp"
# include "delsaleid.cpp"
# include"delsalename.cpp"
# include"delservid.cpp"
# include"delservname.cpp"
# include "salemodid.cpp"
# include"salemodname.cpp"
# include"sermodid.cpp"
# include"sermodname.cpp"

void mainmenu();
void title();
void about();
void purchasemenu();
void sales();
void customers();
void services();
void reports();
purchase pobj;
customer cobj;
sale sobj;

service seobj;
void main()
{
	title();
	mainmenu();

	getch();

}
void mainmenu()
{
 int choice;
 do
 {
  gotoxy(35,7);
  cout<<"Main Menu";
  textcolor(4);
  gotoxy(30,9);
  CP("1. About");
  gotoxy(30,11);
  CP("2. Purchase");
  gotoxy(30,13);
  CP("3. Customers");
  gotoxy(30,15);
  CP("4. Sales");
  gotoxy(30,17);
  CP("5. Service");
  gotoxy(30,19);
  CP("6. Reports");
  gotoxy(30,21);
  CP("7. Exit");
  textcolor(7);
  gotoxy(30,23);
  cout<<"Enter choice :";
  cin>>choice;
  switch(choice)
  {

	case 1:
	 about();
	  break;
	case 2:
	clrscr();
	purchasemenu();
	break;
	case 3:
	clrscr();
	customers();
	break;
	case 4:
	clrscr();
	sales();
	break;
	case 5:
	clrscr();
	services();
	break;
	case 6:
	clrscr();
	reports();
	break;
	case 7:
	clrscr();
	return;
	default:
		cout<<"\n Invalid choice.";
	 }
  }while(1);
}



void title()
{
  clrscr();
	gotoxy(25,2);
	textcolor(2);
	CP("Apex Computers Sales and Service");
	gotoxy(22,3);
	textcolor(3);
	CP("Near Gopalaswamy Temple, M.G. Road, WGL.");
	gotoxy(22,4);
	cout<<"_______________________________________";

}


void about()
{
 clrscr();
 ifstream fin("abot.txt");
 textcolor(1);
 if(!fin)
 {
 cerr<<"\n ERROR: File Does Not Exist";
 getch();
 return;

 }
 const N=80;
 char line[N];
 while(fin)
 {
 fin.getline(line,N);
 cout<<line;
 }
 fin.close();
 getch();

}
void purchasemenu()
{ int choice;

	do
	{
			 gotoxy(35,7);
			 textcolor(6);
			 CP("PURCHASE MENU");
			 gotoxy(30,9);
			 textcolor(5);
			 CP("1.Add");
			 gotoxy(30,10);
			 CP("2.Search");
			 gotoxy(30,11);
			 CP("3.delete");
			 gotoxy(30,12);
			 CP("4.Modify");
			 gotoxy(30,13);
			 CP("5.Back to Main Menu");
			gotoxy(30,14);
			cout<<"Enter choice :";
			 cin>>choice;
			 cout<<"hello";
			 getch();
	 switch(choice)
  {
	case 1:
	pobj.addpurchase();
	  break;
	case 2:
	pobj.searchmenu();
	break;
	case 3:
	pobj.deletepurchasemenu();
	break;
	case 4:
	pobj.modifypurchasemenu();
	break;
	case 5:
	clrscr();
	return;
	 default:
		 cout<<"\n Invalid choice.";
	 }
  }while(1);
}

void sales()
{
int choice;
	do
	{
			 gotoxy(35,7);
			 textcolor(8);
			 CP("SALES MENU");
			 gotoxy(30,9);
			 textcolor(9);
			 CP("1.Add");
			 gotoxy(30,10);
			 CP("2.Serach");
			 gotoxy(30,11);
			 CP("3.delete");
			 gotoxy(30,12);
			 CP("4.Modify");
			 gotoxy(30,13);
			 CP("5.Back to Main Menu");
			gotoxy(30,14);
			cout<<"Enter choice :";
			 cin>>choice;
	 switch(choice)
  {
	case 1:
	sobj.addsale();
	  break;
	case 2:
	sobj.searchsalesmenu();
	break;
	case 3:
	sobj.deletesalesmenu();
	break;
	case 4:
	sobj.modifysalesmenu();
	break;
	case 5:
	clrscr();
	return;
	 default:
		 cout<<"\n Invalid choice.";
	 }
  }while(1);
}
void customers()
{
		  int choice;
	do
	{
			 gotoxy(35,7);
			 textcolor(11);
			 CP("CUSTOMERS MENU");
			 gotoxy(30,9);
			 textcolor(12);
			 CP("1.Add");
			 gotoxy(30,11);
			 CP("2.Serach");
			 gotoxy(30,13);
			 CP("3.delete");
			 gotoxy(30,15);
			 CP("4.Modify");
			 gotoxy(30,17);
			 CP("5.Back to Main Menu");
			gotoxy(30,19);
			cout<<"Enter choice :";
			 cin>>choice;
	 switch(choice)
  {
	case 1:
  cobj.addcustomer();
	  break;
	case 2:
  cobj.searchcustomermenu();
	break;
	case 3:
  cobj.deletecustomermenu();
	break;
	case 4:
   cobj.modifycustomermenu();
	break;
	case 5:
	clrscr();
	return;
	 default:
		 cout<<"\n Invalid choice.";
	 }
  }while(1);
}
void services()
{
int choice;
	do
	{
			 gotoxy(35,7);
			 textcolor(13);
			 CP("SERVICE MENU");
			 gotoxy(30,9);
			 textcolor(14);
			 CP("1.Add");
			 gotoxy(30,10);
			 CP("2.Serach");
			 gotoxy(30,11);
			 CP("3.delete");
			 gotoxy(30,12);
			 CP("4.Modify");
			 gotoxy(30,13);
			 CP("5.Back to Main Menu");
			gotoxy(30,14);
			cout<<"Enter choice :";
			 cin>>choice;
	 switch(choice)
  {
	case 1:
	seobj.addservice();
	  break;
	case 2:
	seobj.searchservicemenu();
	break;
	case 3:
	seobj.deleteservicemenu();
	break;
	case 4:
	seobj.modifyservicemenu();
	break;
	case 5:
	clrscr();
	return;
	 default:
		 cout<<"\n Invalid choice.";
	 }
  }while(1);
}
void reports()
{

}