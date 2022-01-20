#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h>
using namespace std;

class displayinf
{
	public:
	void menu1();
	
};
void displayinf::menu1()
{
	system("color 9");
	cout<<"\n\n\t\t\t\t\t ==========!!! WELCOME TO FOOD PARADISE RESTURANT  !!!=========="<<endl; 
	cout<<"\n\n\t================================================!!! START YOUR ORDER !!!===============================================================\n"<<endl;
	cout<<"\n\n\t====    BREAKFAST    ====\t\t\t=====     LUNCH     =====\t\t\t====    DINNER    ====="<<endl;
	cout<<"\t-------------------------\t\t\t--------------------------\t\t\t------------------------"<<endl;
	cout<<"\n\t===========================\t\t\t===========================\t\t\t==========================="<<endl;
	cout<<"\t[1] String Hoppers [Rs.  5]\t\t\t[5] Rice & Curry   [Rs.200]\t\t\t [9] Hoppers       [Rs. 30]\n\t[2] Noodles        [Rs.120]\t\t\t[6] Fried Rice     [Rs.250]\t\t\t[10] Roti          [Rs. 40]\n\t[3] Bread & Curry  [Rs. 80]\t\t\t[7] Yellow Rice    [Rs.200]\t\t\t[11] Pittu         [Rs.100]\n\t[4] Rice & Curry   [Rs.120]\t\t\t[8] Pasta          [Rs.180]\t\t\t[12] Rice & Curry  [Rs.200]\n\t===========================\t\t\t===========================\t\t\t==========================="<<endl;
	cout<<"\n\n\n\t======     DESSERTS     ======\t\t\t====  BEVERAGES [COOL]  ====\t\t\t====  BEVERAGES [HOT]  ===="<<endl;
	cout<<"\t------------------------------\t\t\t----------------------------\t\t\t---------------------------"<<endl;
	cout<<"\n\t==============================\t\t\t===========================\t\t\t==========================="<<endl;
	cout<<"\t[13] Ice Cream & Jelly[Rs.150]\t\t\t[17] Iced Cofee    [Rs.100]\t\t\t[21] Cup Of Tea     [Rs.40]\n\t[14] Fruit Salad      [Rs.100]\t\t\t[18] Falooda       [Rs.120]\t\t\t[22] Nescafe        [Rs.40]\n\t[15] Watalappam       [Rs.100]\t\t\t[19] Iced Milo     [Rs.100]\t\t\t[23] Plain Tea      [Rs.30]\n\t[16] Custard Pudding  [Rs.120]\t\t\t[20] Milk Shakes   [Rs.120]\t\t\t[24] Hot Milo       [Rs.40]\n\t==============================\t\t\t===========================\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[25] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    
}
class getinput:public displayinf
{
	protected:
     int  qu,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x;
     float py,tt;
     string y,ye,dp;
     
     public:
     void menu2()
     {    
        ofstream write;
        write.open("order.text");
        if(!write)
       {
	     cout<<"file can not open"<<endl;
	     exit (-1);
       }

       a:
     	 b:
   		   c:
   	         cout<<"\n\n\tENTER YOUR ORDER (One Order at a time): "; 
             cin>>ch;
    
             cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) : ";
             cin>>ye;
 
            if(ye=="y"|| ye=="Y")
            {
  	         goto b;
            }
            else
            {
            switch(ch)
            {
   	        case 1:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    a=5;
   		    tt=a*qu;
   		    write<<"Your Order : String Hoppers ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : String Hoppers"<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 2:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    b=120;
   		    tt=b*qu;
   		    write<<"Your Order : Noodles ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Noodles "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 3:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    c=80;
   		    tt=c*qu;
   		    write<<"Your Order : Bread & Curry ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Bread & Curry "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 4:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    d=120;
   		    tt=d*qu;
   		    write<<"Your Order : Rice & Curry ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Rice & Curry "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 5:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    e=200;
   		    tt=e*qu;
   		    write<<"Your Order : Rice & Curry ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Rice & Curry "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 6:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    f=250;
   		    tt=f*qu;
   		    write<<"Your Order : Fried Rice ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Fried Rice "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 7:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    g=200;
   		    tt=g*qu;
   		    write<<"Your Order : Yellow Rice ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Yellow Rice "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 8:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    h=180;
   		    tt=h*qu;
   		    write<<"Your Order : Pasta ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order :  Pasta "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 9:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    i=30;
   		    tt=i*qu;
   		    write<<"Your Order : Hoppers ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Hoppers "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 10:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    j=40;
   		    tt=j*qu;
   		    write<<"Your Order : Roti ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Roti "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 11:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    k=100;
   		    tt=k*qu;
   		    write<<"Your Order : Pittu ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Pittu "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 12:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    l=200;
   		    tt=l*qu;
   		    write<<"Your Order : Rice & Curry ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Rice & Curry "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 13:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    m=150;
   		    tt=m*qu;
   		    write<<"Your Order : Ice Cream & Jelly ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Ice Cream & Jelly "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 14:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    n=100;
   		    tt=n*qu;
   		    write<<"Your Order : Fruit Salad ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Fruit Salad "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 15:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    o=100;
   		    tt=o*qu;
   		    write<<"Your Order : Watalappam ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Watalappam "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 16:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    p=120;
   		    tt=p*qu;
   		    write<<"Your Order : Custard Pudding ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Custard Pudding "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 17:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    q=100;
   		    tt=q*qu;
   		    write<<"Your Order : Iced Cofee ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Iced Cofee "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 18:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    r=120;
   		    tt=r*qu;
   		    write<<"Your Order : Falooda ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Falooda "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 19:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    s=100;
   		    tt=s*qu;
   		    write<<"Your Order : Iced Milo ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Iced Milo "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 20:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    t=120;
   		    tt=t*qu;
   		    write<<"Your Order : Milk Shakes ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Milk Shakes "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 21:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    u=40;
   		    tt=u*qu;
   		    write<<"Your Order : Cup Of Tea ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Cup Of Tea "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 22:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    v=40;
   		    tt=v*qu;
   		    write<<"Your Order : Nescafe ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Nescafe "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 23:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    w=30;
   		    tt=w*qu;
   		    write<<"Your Order : Plain Tea ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Plain Tea "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 24:
	        cout<<"\n\n\tEnter Quantity : ";
   		    cin>>qu;
   	
   		    x=40;
   		    tt=x*qu;
   		    write<<"Your Order : Hot Milo ";
   		    write<<" \n";
   		    write<<" Quantity : "<<qu;
   		    write<<"\n";
            write<<" Total Price : Rs."<<tt<<".00";
   		    write<<"\n";
   		    cout<<"\n\n\t\t\t\t\tYour Order : Hot Milo "<<endl;
   		    cout<<"\n\n\t\t\t\t\tTotal Price : Rs."<<tt<<".00"<<endl;
   	        cout<<"\n\n\t\t\t\t\t============   Your Order Successfully Saved ... !!!   ============"<<endl;
   	        break;
   	        
   	        case 25:
   	        system("cls");
   		    cout<<"\n\n\n\n\n\n\n\t\t\t======================================   Thanks For Using Our Food Paradise Resturant ....!!!!!   =================================\n\n\n\n\n\t\t\t\t===============================================   Come Again ...!!!    ===============================================\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t==========  System Create By : DSE/DCSD 19.2 Batch ... =====================================================================================\n\n";
   	        exit(0);
   	        break;
   	
   	        default:
   		    cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
            goto c;
            break;
            }
          cout<<"\n\tDO YOU WANT ANOTHER ORDER (y/n) : ";
          cin>>y;
          if(y=="y"|| y=="Y")
          {
   	        system("cls");
   	        show1();
          }
          else
          {
             cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
             for(int a=1;a<2;a++)
	          {
		        Sleep(500);
		        cout << "...";
	          }
   	          cout<<"\n\t\t\t\t\t\t\t";
  	          system("PAUSE");
              }
           } write.close();
               system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               FOOD PARADISE RESTURANT              |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51                Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier : ISURU               Date : 12/12/2020"<<endl;
						cout << endl;
						cout<<"\t\t\t\t\t\t\t\t          Food No  : "<<ch<<endl;
						cout<<"\t\t\t\t\t\t\t\t          Quantity : "<<qu<<endl;
                        cout<<"\n\t\t\t\t\t\t\t         Total Bill Amount : Rs. "<<tt<<".00"<<endl;
                        cout<<"\n\t\t\t\t\t\t\t        Enter Your Payment : Rs. ";
                        cin>>py;
                        cout<<"\n\t\t\t\t\t\t\t                  Balance  : Rs. "<<(py-tt)<<".00"<<endl;
                        cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"\n\tDo you want to Move ; Main Menu (y/n) : ";
						cin>>dp;
						if(dp=="y"|| dp=="Y")
                        {
   	                     system("cls");
   	                     show1();
                         }
                         else if(y=="n"|| y=="N")
                         {
                         	exit(0);
                         }
                         else{
                         	cout<<"Key NOT Found..!!!";
                         }
   
  
                 }
      void show1()
     {
     	menu1();
  	   menu2();
      }
  
};
class final:public displayinf,public getinput
{
	public:
		void total()
      {     system("color 2");
            cout<<"\n\n\n\n\n========================================================================================================================================================================\n\n\n\n\n==========================================================           FOOD PARADISE RESTURANT               =============================================================\n\n\n\n========================================================================================================================================================================"<<endl;
      		long userId; //for user id of administrator
      		
			d:	
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t------------------------";
			cout<<"\n\n\t\t\t\t\t\t\t\t\tEnter Login Id : ";
			cin>>userId;
			if(userId!=1234)  
			{
				cout<<"\nEnter correct id : \n";
				goto d;
			}
			else
			cout<<"\n\n\n\t\t\t\t\t\t\t==========!!! WELCOME TO FOOD PARADISE RESTURANT  !!!==========\n";
			z:
			string pwd="pass"; 
			string pass="";  
			char c;	
				cout<<"\n\n\t\t\t\t\t\t\t\t\t   Password : "; 
				p:
				c=getch();
				cout<<"*";   
				if(c!=13)
				{
					pass=pass+c;  
					goto p;
				}   
					
      			{
      			if(pass==pwd)
      			{
      				cout<<"\n\n\n\t\t\t\t\t\t\tAccess Granted. Welcome to Our FOOD PARADISE RESTURANT System\n\n\n";
      				system("PAUSE");
      				system("CLS");
      				show1();
				}
				else
				{
				cout<<"\nWrong Password\n";
				goto z;
				}
			}
		}
};
int main()
{   
   final ob;
   ob.total();
  getch();
}

/* TeamMates :- 
   
   KUDSE192F-001
   KUDSE192F-002
   KUDSE192F-003
   KUDSE192F-004
   
*/