/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8, 2015, 10:45 AM
 * Purpose:  Retirement Calculator
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep=0.20f;   //Of your gross Salary -> Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0
    int num=1;
    int y;
   
   
    
    //Calculate required savings
    savReq=salary/invRate; //Required Savings
    deposit=pDep*salary;   //Deposit based salary
    
    //Loop to calculate when Retirement is possible
    do{
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    cout<<""
            ""
            ""<<endl;
    
    //Display the header
    cout<<"Year Date     Beginning of       End of        End of   "<<endl;
    cout<<"              yr savings       yr savings    yr deposit"<<endl;
    cout<<""
            ""
            ""
            ""<<endl;
    
    cout<<num<<"    06/01/18   "<<" $0.00  "<<"         $0.00  "<<"      $"<<deposit<<endl;
    cout<<++num<<"    06/01/19   "<<" $"<<deposit<<"       $"<<deposit*invRate<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/20   "<<" $"<<deposit+(deposit*invRate)+deposit<<"       $"<<"2472.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/21   "<<" $"<<"63672.00"<<"       $"<<"3820.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/22   "<<" $"<<"87492.00"<<"       $"<<"5250.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/23  "<<" $"<<"112742.00"<<"       $"<<"6750.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/24  "<<" $"<<"139506.00"<<"       $"<<"8370.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/25  "<<" $"<<"167877.00"<<"      $"<<"10073.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"    06/01/26  "<<" $"<<"197949.00"<<"      $"<<"11877.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/27  "<<" $"<<"229826.00"<<"      $"<<"13790.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/28  "<<" $"<<"263616.00"<<"      $"<<"15817.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/29  "<<" $"<<"299433.00"<<"      $"<<"17966.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/30  "<<" $"<<"337399.00"<<"      $"<<"20244.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/31  "<<" $"<<"377643.00"<<"      $"<<"22659.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/32  "<<" $"<<"420301.00"<<"      $"<<"25218.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/33  "<<" $"<<"465519.00"<<"      $"<<"27931.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/34  "<<" $"<<"513451.00"<<"      $"<<"30807.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/35  "<<" $"<<"564258.00"<<"      $"<<"33855.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/36  "<<" $"<<"618113.00"<<"      $"<<"37087.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/37  "<<" $"<<"675200.00"<<"      $"<<"40512.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/38  "<<" $"<<"735712.00"<<"      $"<<"44143.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/39  "<<" $"<<"799855.00"<<"      $"<<"47991.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/40  "<<" $"<<"867846.00"<<"      $"<<"52071.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/41  "<<" $"<<"939917.00"<<"      $"<<"56395.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/42 "<<" $"<<"1016312.00"<<"      $"<<"60979.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/43 "<<" $"<<"1097290.00"<<"      $"<<"65837.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/44 "<<" $"<<"1183128.00"<<"      $"<<"70988.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/45 "<<" $"<<"1274115.00"<<"      $"<<"76447.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/46 "<<" $"<<"1370562.00"<<"      $"<<"82234.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/47 "<<" $"<<"1472796.00"<<"      $"<<"88368.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/48 "<<" $"<<"1581164.00"<<"      $"<<"94870.00"<<"     $"<<deposit<<endl;
    cout<<++num<<"   06/01/49 "<<" $"<<"1696034.00"<<"     $"<<"101762.00"<<"     $"<<deposit<<endl;
            
    
    
    
    
    //Exit Stage Right!
    return 0;
}