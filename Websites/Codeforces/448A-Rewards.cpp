#include <iostream>

using namespace std;

int main()
{
    //Declaring variable to keep count of everything
    int tlb=0,tla=0;
    int cntra=0, cntrb=0;
    int total=0;
    //Using for to calculate how many shelves are going to be needed
    for(int i=1; i<=6; i++)
    {
        int a;
        //getting shelves for the cups
        if(i<=3)
        {
            cin>>a;
            tla+=a;
            if(i==3)
            {
              if(tla%5==0)
                cntra= tla/5;

              else
                cntra=(tla/5)+1;

            }
        }
        //getting shelves for the medals
        int b;
        if(i>3)
        {
             cin>>b;
            tlb+=b;
            if(i==6)
            {
                if(tlb%10==0)
                    cntrb= tlb/10;
                else
                    cntrb=(tlb/10)+1;




            }
        }
         total= cntra+cntrb;
    }


    int n;
    cin>>n;
    if(total<=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
