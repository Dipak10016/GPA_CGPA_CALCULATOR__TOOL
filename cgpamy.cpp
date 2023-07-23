#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>
using namespace std;
int calculateGPA();
void calculateCGPA();
void  method();
int i,l,choise,repchoise,count,credit,totalcrd,credits,stotalcrd=0;
float total=0,sumtotal,allcredits;

int main()

{  system("cls");  
   cout<<"\x1B[31m"
    <<"**************************************************************************"<<endl;
    cout<<"\x1B[32m"
    <<"                            GPA & CGPA Calculator                          "<<endl;
    cout<<"\x1B[31m"
    <<"**************************************************************************"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
sub:
  while(1){
  cout<<"Enter your choice: ";
  cin>>i;
  switch(i)
  {     case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        
        case 3:
                cout<<"exit";
                exit(0);
                break;
        default:
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;

  }
  
  
         }

}       

  
void calculateCGPA()
{
system("cls");  
cout<<"\x1B[32m";
cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
cout<<"How many semester results do you want input? :";
cin>>l;
vector <float > v(l);
for(int i=0;i<=v.size()-1;i++)
{
 cout<<"\nEnter Semester "<<1+i<<" result:-\n";


   cin>>v[i];
}
cout<<endl;
 
for(int i=0;i<=v.size()-1;i++)
{

   total+=v[i];
  
}
 total=total/l;
 cout<<"\x1B[36m";
cout<<"******* Your CGPA is:-"<< total <<" ********"<<endl;
 sub:
    cout<<"\x1B[31m";
    cout<<"\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your choise : "<<endl;
    cin>>repchoise;
   
   while(1){
    switch(repchoise)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                cout<<"exit";
                exit(0);
                break;

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
              break;
    
     }
  }
}

int calculateGPA(){
system("cls");      
cout<<"\x1B[32m";

cout<<"--------------------------GPA Calculating--------------------------------"<<endl;
cout<<"\x1B[31m";
       cout<<" According to MUMBAI UNIVERCITY credits assign as follow \n";
    
cout<<"\x1B[37m";    
cout<<" SEM-1 subjets---> "<<endl <<"                  \t M-1 BEE MECHANICS=3\n\t\t\tPHYSCIS-1 CHEMESTRY-1=2\n";
cout<<" SEM-2 subjets----> "<<endl <<"                  \t M-2 C(PROGRAMING)=3\n\t\t\tPHYSICS-2 CHEMISTRY2 GRAPHICS=2\n";
cout<<" SEM-3 subjets-------> "<<endl <<"                \tM-3 DLCOA DG DS DSGT=3";

cout<<"\x1B[31m"
             <<" \nupcoming semester creditd adding coming soon..............................\n";

cout<<"\nHow many subject's points do you want to calculate ?  ";
cin>>count;

vector <float > v(count);
for(int i=0;i<=v.size()-1;i++)
{cout<<"\x1B[33m";
 cout<<"\nEnter "<<1+i<<" subject credits:- ";
 cin>>credits;
 cout<<"Enter "<<1+i<<" subject IA(AVG)-MARKS :-";
 cin>>v[i];
 int xtotal=v[i];
 cout<<"Enter "<<1+i<<" subject semester marks(points):- ";
 cin>>v[i];
int ytotal=v[i];
total=xtotal+ytotal;
 cout<<"Total marks:-" <<total<<endl;



if(credits==3){

if(total>=80 &&total<=100) credit=10;
else if(total >=75&&total<=79.99) credit=9 ;
else if(total >=70&&total<=74.99) credit= 8;
else if(total >=60&&total<=69.99) credit= 7;
else if(total >=50&&total<=59.99) credit= 6;
else if(total >=45&&total<=49.99)  credit=5;
else if(total >=40&&total<=44.99) credit=5;
else if(total >=0 &&total<=39.99) credit=4;
totalcrd=credit*credits;
 cout<<"Sub credit:-"<<totalcrd<<endl;

}

if(credits==2){

if(total>=60 &&total<=80) credit=10;
else if(total >=55&&total<=59.99) credit=9 ;
else if(total >=50&&total<=54.99) credit= 8;
else if(total >=40&&total<=49.99) credit= 7;
else if(total >=30&&total<=39.99) credit= 6;
else if(total >=25&&total<=29.99)  credit=5;
else if(total >=20&&total<=24.99) credit=5;
else if(total >=0 &&total<=19.99) credit=4;

totalcrd=credit*credits;
cout<<"\nsub credit:-"<<totalcrd<<endl;

}
allcredits+=credits;
stotalcrd+=totalcrd;

}

cout<<"\nyour total credits "<<stotalcrd<<endl;
cout<<"\nall sub basic credits "<<allcredits<<" "<<endl ;
cout<<"\x1B[36m";
cout<<"\n*** Your CGPA is "<<stotalcrd/allcredits<<" *****"<<endl;
sub:
cout<<"\x1B[31m";
cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>repchoise;
while(1){
    switch(repchoise)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                cout<<"exit";
                exit(0);
                break;

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
              
    
     }
  }

}


