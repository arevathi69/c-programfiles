#include<iostream.h>
#include<conio.h>
void main()
  {
   clrscr();
   int age;
   cout << "Enter the age\n";
   cin >> age;
   if(age>=18)
     cout << " person is eligible to vote\n";
   else
     cout<<" person is not eligible to vote\n";
  getch();
  }