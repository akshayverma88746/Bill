#include <bits/stdc++.h>
#include<string>
using namespace std;
#define max 100
int main()
{
    char c;
    cout <<"Please enter the type of purchase"<<endl<<"'L'for laptops"<<endl<<"'D' for desktop"<<endl;
    cin >> c;
    switch (c)
    {
    case 'L':{
                string name,add;
		        int amt;
                float dis,final;
		        cin.ignore();
		        cout<<"Enter the Name of customer:";
                getline (cin,name);
                cout<<"Enter the Address of customer:";
                getline (cin,add);
		        cout<<"Enter the amount of purchase:";
                cin >> amt;
                cout<<"  "  ;
                cout<<"  "  ;

                if(amt>0 && amt<=25000)
                {
                    cout<<"Sorry the amount is less for eligible discount";
                }
                if(amt>25000 && amt<=57000)
                {
                    dis = (0.05/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
                if(amt>57000 && amt<=100000)
                {
                    dis = (0.075/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
                if(amt>100000)
                {
                    dis = (0.10/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
             }
        
        break;
    
    case 'D':{
                string name,add;
	        	int amt;
                float dis,final;
	        	cin.ignore();
		        cout<<"Enter the Name of customer:";
                getline (cin,name);
                cout<<"Enter the Address of customer:";
                getline (cin,add);
		        cout<<"Enter the amount of purchase:";
                cin >> amt;


                if(amt>0 && amt<=25000)
                {
                    dis = (0.05/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
                if(amt>25000 && amt<=57000)
                {
                    dis = (0.079/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
                if(amt>57000 && amt<=100000)
                {
                    dis = (0.10/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
                if(amt>100000)
                {
                    dis = (0.15/100)*amt;
                    final = amt-dis;


                    cout<<"*********BILL***********"<<endl;
                    cout<<"Name of customer is:"<<name<<endl;
                    cout<<"Address of customer is:"<<add<<endl;
                    cout<<"Total amount to be paid:"<<final<<endl;
                }
             }
        
        break;    
    

    default:{
        cout <<"Invalid input";
    }

 
        break;
    }
    return 0;
}
