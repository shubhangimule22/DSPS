#include <iostream>
using namespace std;
class linear
{
    public:
    int i,j,a[20],temp=0,flag=0,N,target,ch;
    void sort()
    {
        cout<<"Enter size of array : ";
        cin>>N;
        cout<<"Enter array elements : ";
        for(i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<N-1;i++)
        {
            for(j=0;j<N-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<"Sorted elements are : ";
        for(i=0;i<N;i++)
        {
            cout<<""<<a[i]<<"\t";
        }
    }
    void search()
    {
        cout<<"\nEnter key element you want to search : ";
        cin>>target;
        for(i=0;i<N;i++)
        {
            if(target==a[i])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
            cout<<"Element"<<target<<"is not present";
        }
        else
        {
            cout<<"Element "<<target<<" is present at "<<i<<" position";
        }
    }
};
int main()
{
    linear a1;
    a1.sort();
    a1.search();
    return 0;
}
