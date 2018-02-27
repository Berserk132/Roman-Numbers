#include <iostream>

using namespace std;

int main()
{
    int num;
    string roman;
    int thou;
    int hun;
    int ten;
    int ones;
    int temp=0;




    cout<< "Please Enter 4 Digit Arabic Number : " <<endl;
    cin>> num;
    cout<<endl;


    if (temp!=thou)
    {
        int thou=num/1000;

        if(thou==3)
        {
            roman+="MMM";
        }
        else if(thou==2)
        {
            roman+="MM";
        }
        else if(thou==1)
        {
            roman+="M";
        }
    }

    else if (temp!=hun)
    {

        int hun=(num-(thou*1000))/100;
        if(hun==9)
        {
            roman+="CM";
        }
        else if(hun==8)
        {
            roman+="DCCC";
        }
        else if(hun==7)
        {
            roman+="DCC";
        }
        else if(hun==6)
        {
            roman+="DC";
        }
        else if(hun==5)
        {
            roman+="D";
        }

        else if(hun==4)
        {
            roman+="CD";
        }

        else if(hun==3)
        {
            roman+="CCC";
        }

        else if(hun==2)
        {
            roman+="CC";
        }
        else if(hun==1)
        {
            roman+="C";
        }

    }

    else if (true)
    {
        int ten=(num-(thou*1000+hun*100))/10;

        if(ten==9)
        {
            roman+="XC";
        }
        else if(ten==8)
        {
            roman+="LXXX";
        }
        else if(ten==7)
        {
            roman+="LXX";
        }
        else if(ten==6)
        {
            roman+="LX";
        }
        else if(ten==5)
        {
            roman+="L";
        }
        else if(ten==4)
        {
            roman+="XL";
        }
        else if(ten==3)
        {
            roman+="XXX";
        }
        else if(ten==2)
        {
            roman+="XX";
        }
        else if(ten==1)
        {
            roman+="X";
        }
        else if(ten==0)
        {
            roman+="";
        }

    }
    else if (true){
        ones=(num-(thou*1000+hun*100+ten*10));


        if(ones==9)
        {
            roman+="IX";
        }
        else if(ones==8)
        {
            roman+="VIII";
        }
        else if(ones==7)
        {
            roman+="VII";
        }
        else if(ones==6)
        {
            roman+="VI";
        }
        else if(ones==5)
        {
            roman+="V";
        }
        else if(ones==4)
        {
            roman+="IV";
        }
        else if(ones==3)
        {
            roman+="III";
        }
        else if(ones==2)
        {
            roman+="II";
        }
        else if(ones==1)
        {
            roman+="I";
        }
    }




    cout<<roman;


    return 0;
}
