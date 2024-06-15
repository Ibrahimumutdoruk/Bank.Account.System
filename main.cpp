#include <iostream>
#include "Account.h"
using namespace std;


int main ()
{
    Account accounts[25];
    int a = 0;
    int n;

    int money;
    for (int i = 0; i < 25; i++)
    {



        accounts[i].setID(i+1);

    }
    for (int i = 0; i < 5; i++)
    {


        accounts[i].deposit(5000);


    }
    for (int i = 5; i < 10; i++)
    {


        accounts[i].deposit(1200);


    }
    for (int i = 10; i < 15; i++)
    {


        accounts[i].deposit(100);


    }
    for (int i = 15; i < 20; i++)
    {


        accounts[i].deposit(2500);


    }
    for (int i = 20; i < 25; i++)
    {


        accounts[i].deposit(3200);


    }

    accounts[0].setName("Murat");
    accounts[1].setName("Samet");
    accounts[2].setName("Emir");
    accounts[3].setName("Ýbrahim");
    accounts[4].setName("Ali");
    accounts[5].setName("Mehmet");
    accounts[6].setName("Hasan");
    accounts[7].setName("Zeliha");
    accounts[8].setName("Hannibal");
    accounts[9].setName("Walter");
    accounts[10].setName("Max");
    accounts[11].setName("Mustafa");
    accounts[12].setName("Zeynep");
    accounts[13].setName("Mesut");
    accounts[14].setName("Ayse");
    accounts[15].setName("Kemal");
    accounts[16].setName("Melis");
    accounts[17].setName("Veli");
    accounts[18].setName("Goktug");
    accounts[19].setName("Arzu");
    accounts[20].setName("Salih");
    accounts[21].setName("Aynur");
    accounts[22].setName("Simge");
    accounts[23].setName("Caglar");
    accounts[24].setName("Sude");


    while (a != 4)
    {
        cout<<"1. show balance:"<<endl;
        cout<<"2. deposit:"<<endl;
        cout<<"3. withdraw:"<<endl;
        cout<<"4. exit:"<<endl;
        cin>>a;
        if(a==1)
        {
             cout << "Enter your ID" <<endl;
             cin >>n;
             if (n==1) {
                cout << accounts[0].getName() << " " << accounts[0].getBalance()<<endl;
             }
             /*
            for (int i = 0; i < 25; i++)
            {
                cout << accounts[i].getName() << ": $" << accounts[i].getBalance()<<endl;
            }*/
        }
        if(a==2)
        {
            cout << "Please enter your ID" << endl;
            cin >>n;

            if (n==0)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[0].deposit(money);

            }
            else if (n==1)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[1].deposit(money);
            }
            else if (n==2)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[2].deposit(money);
            }
            else if (n==3)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[3].deposit(money);
            }
            else if (n==4)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[4].deposit(money);
            }
            else if (n==5)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[5].deposit(money);
            }
            else if (n==6)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[6].deposit(money);
            }
            else if (n==7)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[7].deposit(money);
            }
            else if (n==8)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[8].deposit(money);
            }
            else if (n==9)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[9].deposit(money);
            }
            else if (n==10)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[10].deposit(money);
            }
            else if (n==11)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[11].deposit(money);
            }
            else if (n==12)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[12].deposit(money);
            }
            else if (n==13)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[13].deposit(money);
            }
            else if (n==14)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[14].deposit(money);
            }
            else if (n==15)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[15].deposit(money);
            }
            else if (n==16)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[16].deposit(money);
            }
            else if (n==17)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[17].deposit(money);
            }
            else if (n==18)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[18].deposit(money);
            }
            else if (n==19)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[19].deposit(money);
            }
            else if (n==20)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[20].deposit(money);
            }
            else if (n==21)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[21].deposit(money);
            }
            else if (n==22)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[22].deposit(money);
            }
            else if (n==23)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[23].deposit(money);
            }
            else if (n==24)
            {
                cout<<"enter deposit money";
                cin>>money;
                accounts[24].deposit(money);
            }

        }
        if(a==3)
        {
            cout << "Please enter your ID. These are start from 0 to 24" <<endl;
            cin>>n;
            if (n==0)
            {
                cout<<"enter withddraw money";
                cin>>money;
                accounts[0].withdraw(money);

            }
            else if ( n==1)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[1].withdraw(money);

            }
            else if ( n==2)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[2].withdraw(money);

            }
            else if ( n==3)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[3].withdraw(money);

            }
            else if ( n==4)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[4].withdraw(money);

            }
            else if ( n==5)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[5].withdraw(money);

            }
            else if ( n==6)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[6].withdraw(money);

            }
            else if ( n==7)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[7].withdraw(money);

            }
            else if ( n==8)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[8].withdraw(money);

            }
            else if ( n==9)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[9].withdraw(money);

            }
            else if ( n==10)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[10].withdraw(money);

            }
            else if ( n==11)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[11].withdraw(money);

            }
            else if ( n==12)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[12].withdraw(money);

            }
            else if ( n==13)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[13].withdraw(money);

            }
            else if ( n==14)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[14].withdraw(money);

            }
            else if ( n==15)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[15].withdraw(money);

            }
            else if ( n==16)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[16].withdraw(money);

            }
            else if ( n==17)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[17].withdraw(money);
            }
            else if ( n==18)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[18].withdraw(money);

            }
            else if ( n==19)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[19].withdraw(money);

            }
            else if ( n==20)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[20].withdraw(money);

            }
            else if ( n==21)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[21].withdraw(money);

            }
            else if ( n==22)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[22].withdraw(money);

            }
            else if ( n==23)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[23].withdraw(money);

            }
            else if ( n==24)
            {
                cout<<"enter withddraw money";
                cin>>money;

                accounts[24].withdraw(money);

            }
        }

    }
    return 0;
}
