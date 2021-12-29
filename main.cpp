#include <iostream>
#include <string>
using namespace std;

   // function declaration 
string first(  long int);   
string twodigit (long int);
string threedigit( long int);
string fourdigit (long int);
string fivedigit( long int);
string sixdigit( long int);
string sevendigit (long int);
string eightdigit (long int);
string ninedigit(long int);
string tendigit(long int);
string str;
int main()
{      
        long int n;
cout<<"          ********WELCOME*********  " <<endl;
cout<<" -:  This Code Will Convert Numbers Into ALPHABETSS  :-"<<endl<<endl;
cout<<"Hey user Enter any number    " <<endl;
cin>>n;
cout<< " Number you entered is  : "<<endl<<n <<endl;
cout<<"Congradulations  " <<n  <<" Converted into LETTERDIGIT Successfully ..    " <<endl;
       first(n);

       string LETTERDIGIT;
       LETTERDIGIT=first(n);

cout<<LETTERDIGIT<<endl;



       return 0;
}

string first (  long int n)
{      if(n<=20)

       {     
      switch(n)  //   ID - 32060 --  n is condition 
                     {
                           case 0:
                           str="zero";
                           break;
                           case 1:
                           str="one ";
                           break;
                           case 2:
                           str="two ";
                           break;
                           case 3:
                           str="three ";
                           break;
                           case 4:
                           str="four ";
                           break;
                           case 5:
                           str="five ";
                           break;
                           case 6:
                           str="six ";
                           break;
                           case 7:
                           str="seven ";
                           break;
                           case 8:
                           str="eight ";
                           break;
                           case 9:
                            str="nine ";
                           break;
                           case 10:
                           str="Ten ";
                           break;
                           case 11:
                           str="Eleven ";
                           break;
                           case 12:
                           str="Twelve ";
                           break;
                           case 13:
                           str="Thirteen ";
break;case 14:
                           str="Fourteen ";
break;case 15:
                           str="Fifteen ";
break;case 16:
                           str="Sixteen ";
break;case 17:
                           str="Seventeen ";
break;case 18:
                           str="Eighteen ";
break;case 19:
                           str="Ninteen ";
break;case 20:
                           str="Tewenty ";
                           break;
                           default:
                            break;
                           }
                           }


                 else if(n%10==0 && n<=90)
                   {
                     switch(n)
                           {
                           case 30:
                           str="Thirty ";
break;case 40:
                           str="Fourty ";
break;case 50:
                           str="Fifty ";
break;case 60:
                           str="Sixty ";
break;case 70:
                           str="Seventy ";
break;case 80:
                           str="Eighty ";
break;case 90:
                           str="ninty ";
                           break;
                           default:
                            break;
                     }
                     }

   else if(n<=99)
   {
str=twodigit(n);
   }
 else if(n>=100&&n<=999)
{str=threedigit(n);}
else if(n>=1000 &&n<=9999)
{str=fourdigit(n);}
 else if(n>=10000&&n<=99999)
{str=fivedigit(n);}
else if(n>=100000&&n<=999999)
{str=sixdigit(n);}
else if(n>=1000000&&n<=9999999)
{str=sevendigit(n);}
else if(n>=10000000&&n<=99999999)
{str=eightdigit(n);}
else if(n>=100000000&&n<=999999999)
 {str=ninedigit(n);}
else if(n>=1000000000&&n<=9999999999)
{str=tendigit(n);}


       return str;
}
//two digits
string twodigit( long int n)     //FUNCTION defination
{      string rtn;

        int firstdigit,seconddigit;
firstdigit=n/10;
firstdigit=firstdigit*10;

seconddigit=n%10;
rtn=first(firstdigit);
rtn=rtn + first(seconddigit);
       return rtn;
}

//three digits
string threedigit( long int n)
{      string rtn;
       long int firstdigit,seconddigit,third;
firstdigit=n/100;
seconddigit=n%100;
rtn=first(firstdigit);

rtn=rtn+" Hundered and ";
rtn=rtn + first(seconddigit);
       return rtn;
}
//four digits
string fourdigit(  long int n)
{      string rtn;
       long int firstdigit,seconddigit;
firstdigit=n/1000;
seconddigit=n%1000;
rtn=first(firstdigit);
rtn=rtn+" Thousand ";
rtn=rtn + threedigit(seconddigit);
       return rtn;
}
//five digits
string fivedigit( long int n)
{      string rtn;
      long int firstdigit,seconddigit;
firstdigit=n/1000;               // 4 and 5 digit n0. divided by 1000
seconddigit=n%1000;
rtn=first(firstdigit);
rtn=rtn+" Thousand ";
rtn=rtn + threedigit(seconddigit);
       return rtn;
}
//six digits
string sixdigit(  long int n)
{      string rtn;
       long int firstdigit,seconddigit;
firstdigit=n/100000;
seconddigit=n%100000;
rtn=first(firstdigit);
rtn=rtn+" Lack ";
rtn=rtn + fivedigit(seconddigit);
       return rtn; 
}
//seven digits
string sevendigit(  long int n)
{      string rtn;
       unsigned long int firstdigit,seconddigit;   
firstdigit=n/100000; // 6 or 7 digit ,, divided by 10, 000      
seconddigit=n%100000;
rtn=first(firstdigit);
rtn=rtn+" Lack ";
rtn=rtn + fivedigit(seconddigit);
       return rtn;
}

//eight digits
string eightdigit(  long int n)
{      string rtn;
       unsigned long int firstdigit,seconddigit;
firstdigit=n/10000000;      // 8 and 9 ,,,, 7  0's or 10,000,000
seconddigit=n%10000000;
rtn=first(firstdigit);
rtn=rtn+" Crore ";
rtn=rtn + sevendigit(seconddigit);
       return rtn;
}
//nine digits
string ninedigit(  long int n)
{      string rtn;
       unsigned long int firstdigit,seconddigit;
firstdigit=n/10000000;
seconddigit=n%10000000;
rtn=first(firstdigit);
rtn=rtn+" Crores ";
rtn=rtn + sevendigit(seconddigit);
       return rtn;
}
//Ten digits
string tendigit( long int n)
{      string rtn;
       unsigned long int firstdigit,seconddigit;
firstdigit=n/1000000000;
seconddigit=n%1000000000;
rtn=first(firstdigit);
rtn=rtn+" Billion ";
rtn=rtn + ninedigit(seconddigit);
       return rtn;
}
