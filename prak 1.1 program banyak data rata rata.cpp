#include <iostream>
#include <conio.h>
using namespace std;
int main()
  {
    int i, n, data[50];
    float rata,jum;
    
    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/n;
        
    cout<<endl;
    cout<<"Jumlah = "<<jum<<endl;
    cout<<"Rata-rata = "<<rata<<endl;
  getch();
  }
