#include<iostream>
using namespace std;
class search
{
public:
int rollno;
string name,div;
   void accept()
   {
      cout<<"Enter class of student:\n";
      cin>>div;
      cout<<"Enter the name of student:\n";
      cin>>name;
      cout<<"Enter roll number of student:\n";
      cin>>rollno;
   }  
};
int main()
{
  search stud[10];
  int i,n,key;
  cout<<"Enter the number of student:\n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    stud[i].accept();
  }
  cout<<"\nSTUDENT DATA:\n";
  for(i=0;i<n;i++)
  {
     cout<<"\nDIV:"<<stud[i].div<<"\tName:"<<stud[i].name<<"\t\tROLLNO:"<<stud[i].rollno;
  }
  cout<<"Enter Rollno for searching:";
  cin>>key;
  for(i=0;i<n;i++)
  {
     if(key==stud[i].rollno)
     {
         cout<<"";          
     }
     else
     {
     
     }
  }
  return 0;
