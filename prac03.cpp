#include <iostream.h>
#include <conio.h>

void main()
{
    int a[10], pos, item, count=0;
    clrscr();
    
    cout<<"Enter elements in an array"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<"Enter array elements:";
        cin>>a[i];
    }
    
    cout<<endl<<"Original array"<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<" "<<a[i];
    }
    
    cout<<endl<<"Enter the element to be searched:";
    cin>>item;
    
    for(int i=0; i<10; i++)
    {
        if(item==a[i])
        {
            count = count + 1;
            if(count==1)
            {
                cout<<"Item "<<item<<" found at location (first occurrence)"<<i;
            }
        }
    }
    
    if(count==0)
    {
        cout<<"Element not found!";
    }
    else
    {
        cout<<endl<<count<<" Number of times element occurs";
    }
    
    getch();
}