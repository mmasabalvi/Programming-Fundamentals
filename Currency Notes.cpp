/* Name: Muhammad Masab Hammad
   Roll No.: 22I-1004
   Assignment #1 PF */

#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{ 
int amount;
 
cout<< "Enter the amount in Rupees between 100 and 100000  only: "<<endl;

cin>> amount;

cout<< "Currency Note" << setw(14) << ": Number" <<endl;

int notea= 500;                                            //Declare all notes
int noteb= 100;
int notec= 50;
int noted= 20;
int notee= 10;
int notef= 5;
int noteg= 1;

int numa, numb, numc, numd, nume, numf, numg;             //Declare output

numa= (amount/notea);                                     // 57477/500

cout<< notea << setw(18) << ": " << numa << endl;

numb = (amount-(notea*numa))/noteb;                       // 57477-(500*114) divide by 100

cout<< noteb << setw(18) << ": " << numb << endl;

numc= ((amount-(notea*numa))-(numb*noteb))/notec;         // 57477-(500*114)-(4*100) divide by 50.....logic continues

cout<< notec << setw(19) << ": " << numc << endl;   

numd= (((amount-(notea*numa))-(numb*noteb))-(numc*notec))/noted;

cout<< noted << setw(19) << ": " << numd << endl;

nume= ((((amount-(notea*numa))-(numb*noteb))-(numc*notec))-(numd*noted))/notee;

cout<< notee << setw(19) << ": " << nume << endl;

numf= ((((amount-(notea*numa))-(numb*noteb))-(numc*notec))-(numd*noted)-(nume*notee))/notef;

cout << notef << setw(20) << ": " << numf << endl;

numg= ((((amount-(notea*numa))-(numb*noteb))-(numc*notec))-(numd*noted)-(nume*notee)-(numf*notef))/noteg;

cout<< noteg << setw(20) << ": " << numg << endl;

return 0;

} 
