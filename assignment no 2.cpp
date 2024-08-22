#include<iostream>
#include<string>
using namespace std;
class Book
{
public:
  int cost;
  string name;
  void Accept()
  {
   cout<<"Book Name: ";
   cin>>name;
   cout<<"Book cost: ";
   cin>>cost;
   }
};
int main()
{
Book books[10],temp[10];
int i,size=0,n,choice,flag=0;
int count=0,ch=0,l=0;
do{
cout<<"1.Fill Books Details\n";
cout<<"2.Sorting Books (By Cost)\n";
cout<<"3.Books Less than 500\n";
cout<<"4.count of Books More Than 500\n";
cout<<"5.Deletion of Duplication By Orignal Array\n";
cout<<"6.Duplicate Enteries in Temporary Array\n"; 
cout<<"7.Exit\n";
cout<<"Enter Your Choice: ";
cin>>choice;

switch(choice)
{
case 1:
cout<<"Enter Books size: ";
cin>>n;
size+=n;
cout<<"-Enter Book Details:-\n";
for(i=0;i<size;i++)
{ 
     books[i].Accept();
}
cout<<"\t* BOOKS LIST:*";
cout<<"\t\tNAMES\t\tCOST\n\n";
for(i=0;i<size;i++)
{
cout<<"\t\t "<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
}
break;


case 2:
cout<<"\n\n";
for(i=1;i<size;i++)
{
for(int j=0;j<i;j++)
{
if(books[i].cost>books[j].cost)
{
int temp=books[i].cost;
string temp1=books[i].name;
books[i].cost=books[j].cost;
books[i].name=books[j].name;                      
books[j].cost=temp;
books[j].name=temp1;
}
}
}
cout<<"\t *SORTED BOOKS LIST*\n";
cout<<"\t\tNAMES\t\tCOST\n";
for(i=0;i<size;i++)
{
cout<<"\t\t "<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
}
break;

case 3:
cout<<"\t *BOOKS LIST is less than 500:*\n\n";
cout<<"\t\tNAMES\t\tCOST\n";
for(i=0;i<size;i++)
{
 if(books[i].cost<500)
 {
cout<<"\t\t "<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
 }
else
{
flag=1;
count++;
}
}
if(flag==1)
{
 if(count==size)
 {
 cout<<"\n\t\t  None of Book less than 500\n";
 }
}
break;

case 4:
cout<<"Count of Books greater than 500 : "<<count<<"\n";
break;

case 5:
for(i=0;i<size-1;i++)
{
    for(int j=i+1;j<size;j++)
    {
       
        if(books[i].name==books[j].name)
        {
        temp[l].name=books[j].name;
        temp[l].cost=books[j].cost;
        l++;
        for(int k=j;k<size;k++)
        {
         books[k].name=books[k+1].name;
         books[k].cost=books[k+1].cost;
        }
        size--;
        j--;
        }
    }
}
cout<<"\t*BOOKS LIST AFTER DUPLICATION DELETION (By Orignal array):*\n";
cout<<"\t\tNAMES\t\tCOST\n";
for(i=0;i<size;i++)
{
cout<<"\t\t "<<books[i].name<<"\t\t"<<books[i].cost<<"\n";
}
break;

case 6:
cout<<"\t*BOOKS LIST OF DUPLICATE ENTERIES (By Temporary array):*\n";
cout<<"\t\tNAMES\t\tCOST\n";
if(l==0)
{
cout<<"\t\t\tNo Duplicate Enteries !\n";
}
else
{
for(i=0;i<l;i++)
{
cout<<"\t\t\t "<<temp[i].name<<"\t\t"<<temp[i].cost<<"\n";
}
}
break;

case 7:
exit(0);
break;

default:cout<<"Wrong Choice\n";
}
cout<<"\n\nDo You Want to continue\n1.Yes\n2.No\nEnter Your Choice:";
cin>>ch;
}while(ch==1);
return 0;
}
