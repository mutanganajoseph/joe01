#include<iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <algorithm> 
#include <iomanip>

using namespace std;
string toUpperCase(const string& str) {
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    return upperStr;
    string sim1, sim2;
    string Sim_mt, Sim_air;
    
}


class Network_providers{
public:

    string sim1, sim2;
    string Sim_mt, Sim_air;

int count=0;
float mtn_airtime_balance, airtel_airtime_balance;
float MoMo_account=7500, amount=0,fee=0;
string number,choice;

 time_t joe =time(0);
   char* currentTime = ctime(&joe);

time_t now=time(0);
 tm* localTime= localtime(&now);


void timer(){
   
 float second = 0;

    // Infinite loop to count seconds
    while (true) {
      
        // Display the corresponding word based on 'second'
        if(second ==3){
         system("clear");
         cout<<"\n\n\n";
         cout<<"\n                              WELCOME TO NETWORK PROVIDERS.\n\n\n";
        }
        else if (second == 5) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           YOU MUST TYPE *182# OR *131#.\n" << endl;
        } else if (second == 8) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           THEN FOLLOW PROMPT.\n" << endl;
        } else if (second == 10) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           ENJOY YOUR TIME WITH NETWORK PROVIDERS!\n" << endl;
        }
        else if(second ==11){
         system("clear");
          cout<<"\n\n\n";
         cout<<"                         GET READY!\n" <<endl;
         
        }
        else if(second ==12){
         system("clear");
         break;
        }

        // Increment 'second' and wait for 1 second
        second++;
        this_thread::sleep_for(chrono::seconds(1));
    }

}



void wait_timer(){

   int second=0;
      while (true) {
         
         if(second ==0){
            cout<<"\nUSSD code running...\n";
            
            
         }
      else if(second ==1){
      cout<<"";
       system("clear");
      break;
      
    }
   
    second++;
      this_thread::sleep_for(chrono::seconds(1));
   }
}


void exit(){
    while(true){
       wait_timer();
      cout<<"\nExiting... \n\n ";
      break;
      }
      }




void Sim() {
   
    // Get input for SIM cards
    cout<< "\n\n                          No SIM card detected. Please insert SIM cards.\n\n                                   Enter SIM One as MTN or Airtel: \n\n> ";
    cin >> sim1;
    system ("clear");
     wait_timer();
    cout << "                                 Enter SIM Two as MTN or Airtel: \n\n> ";
    cin >> sim2;
    system ("clear");
    // Convert input to uppercase
    sim1 = toUpperCase(sim1);
    sim2 = toUpperCase(sim2);

    
    system("clear"); 
    if (sim1 == "MTN") {
        Sim_mt = sim1;
    } else if (sim1 == "AIRTEL") {
        Sim_air = sim1;
    }

    if (sim2 == "MTN") {
        Sim_mt = sim2;
    } else if (sim2 == "AIRTEL") {
        Sim_air = sim2;
    }

    bool validSim1 = (sim1 == "MTN" || sim1 == "AIRTEL");
    bool validSim2 = (sim2 == "MTN" || sim2 == "AIRTEL");

    // Check if one or both SIM cards are invalid
    if (validSim1 && !validSim2) {
    
        if(sim1 == Sim_mt){
         wait_timer();
        cout << "Only MTN SIM is valid.\n\n";
        cout << "1." << sim1 << "\n\n";
                timer();
               sim_mtn();
               }
        
        else{
         wait_timer();
          cout << "Only AIRTEL SIM is valid.\n\n";
          cout << "1. " << sim1 << "\n\n"; 
          timer();
          sim_airtel();
      }
        
    } 
    else if (!validSim1 && validSim2) {
      
      if(sim2 == Sim_air){
          system("clear");
         wait_timer();
        cout << "Only Airtel SIM is valid.\n\n";
        cout << "1." << sim2 << "\n\n";
              timer();
               sim_airtel();
               }
        
      else{
         
         wait_timer();
          cout << "Only MTN SIM is valid.\n\n";
          cout << "1." << sim2 << "\n\n"; 
          timer();
           sim_mtn();
      }
      
        
    } 
    
    else if (!validSim1 && !validSim2) {
    system("clear");
    wait_timer();
   
        cout << "Both SIM cards are invalid. at " <<put_time(localTime, "%H:%M:%S")<<"\n\n1."<<sim1<<"\n2."<<sim2<<"\n\n";

        
        Sim();
    } else { // Both SIMs are valid
        if (sim1 == sim2) {
           system ("clear");
            wait_timer();
            cout << "Both SIMs are the same.\n\n";
            if(sim1 == Sim_mt){     
            cout << "  You are using MTN only\n\n1. " << sim1 << "\n2. " << sim2 << "\n\n";
               timer();
               sim_mtn_mtn();
            }
            else{
               wait_timer();
               cout<<" You are using AIRTEL only\n\n1. " << sim1 << "\n2. " << sim2 << "\n\n";
               timer();
               sim_airtel_airtel();
            }
                   
        } else if (sim1 == "AIRTEL" && sim2 == "MTN") {
             wait_timer();
            cout << "\n          SIM ARE PLACE AS \n\n            1."<<sim1<<"\n            2."<<sim2<<"\n\n";
            
            timer();
            
            sim_airtel_mtn();
            
            
        } else {
         system("clear");
         wait_timer();
            cout << "\n                SIM ARE PLACED AS: \n\n            1."<<sim1<<"\n            2."<<sim2<<"\n\n"; 
             timer();
             system("clear");
            sim_mtn_airtel();
           
        }

      
    }}





//while airtel is only valid sim
void sim_airtel() {
   
   cout << "\n> ";
   cin >> choice;
   system("clear");
   if (choice == "*182#") {
      
      wait_timer();
      airtel_prompt();
   }
   else if (choice == "*131#") {
      
      wait_timer();
      airtel_airtime();
   }
   else {
      system("clear");
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   } // <- Added this closing curly brace
}

void sim_mtn() {
   int count = 0;
   
   cout << "\n> ";
   cin >> choice;
   system("clear");
   if (choice == "*182#") {
      system("clear");
      wait_timer();
      mtn_prompt(); 
   }
   else if (choice == "*131#") {
     
      wait_timer();
      mtn_airtime();    
   }
   else {
      system("clear");
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   } // <- Added this closing curly brace
}

void sim_airtel_mtn() {
   cout << "\n> ";
   cin >> choice;
  system("clear");
      wait_timer();
   if (choice == "*182#") {
      
      cout << "\n\n";
      cout << "\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
      system("clear");
      if (choice == "1") {
         wait_timer();  
         airtel_prompt();
      }
      else if (choice == "2") {
         
         wait_timer();
         mtn_prompt();
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong Choice!\n\n";
         sim_airtel_mtn();
      }
   }
   else if (choice == "*131#") {
      system("clear");
      wait_timer();
      cout << "\n\n";
      cout << "\n\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
       system("clear");
      if (choice == "1") {
         cout << "\n";
         
         wait_timer();
         airtel_airtime();
      }
      else if (choice == "2") {
         cout << "\n";
         
         wait_timer();
         mtn_airtime();
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong choice!\n\n";
      }
   }
   else {
     
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   }
}


//while all sim1 and sim2 is mtn
void sim_mtn_mtn() {
   float sim_mtn_balance=200;
    
   cout << "\n> ";
   cin >> choice;
   system("clear");
   if (choice == "*182#") {
      system("clear");
      wait_timer();
      cout << "\n\n";
      cout << "\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
       system("clear");
       
      if (choice == "1") {
         wait_timer(); 
         mtn_prompt();
      }
      else if (choice == "2") {
         wait_timer();
         mtn_prompt();
      }
      else {
         wait_timer();
         cout << "\nWrong Choice!\n\n";
         sim_mtn_mtn();
      }
   }
   else if (choice == "*131#") {
      system("clear");
      wait_timer();
      cout << "\n\n";
      cout << "\n\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
       system("clear");
        
      if (choice == "1") {
         cout << "\n";
        wait_timer();
         mtn_airtime();
      }
      else if (choice == "2") {
         system("clear");
          wait_timer();
         cout << "\n";
        
         cout<<"MTN airtime is " <<sim_mtn_balance<<"FRW.\n\n";
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong choice! Type *182# OR *131#\n\n";
         sim_mtn_mtn();
      }
   }
   else {
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   }
}

void sim_airtel_airtel() {
   float sim_airtel_balance=300;
    system("clear");
   cout << "\n> ";
   cin >> choice;
   system("clear");
   if (choice == "*182#") {
      system("clear");
     
      cout << "\n\n";
      cout << "\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
       system("clear");
      
      
      if (choice == "1") {
          wait_timer();   
         airtel_prompt();
      }
      else if (choice == "2") {
         wait_timer();
         airtel_prompt();
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong Choice!\n\n";
      }
   }
   else if (choice == "*131#") {
      system("clear");
      wait_timer();
      cout << "\n\n";
      cout << "\n\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
        system("clear");
       
      if (choice == "1") {
         cout << "\n";
          wait_timer();
         airtel_airtime();
      }
      else if (choice == "2") {
         cout << "\n";
         wait_timer();
         cout<<"Airtel Airtime balance is " << sim_airtel_balance<<"FRW.\n\n";
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong choice! Type *182# OR *131#\n\n";
         sim_airtel_airtel();
      }
   }
   else {
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   }
}



void sim_mtn_airtel() {
   cout << "\n> ";
   cin >> choice;
   system("clear");
   if (choice == "*182#") {
      wait_timer();
      cout << "\n\n";
      cout << "\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
      system("clear");
      if (choice == "1") {
         wait_timer();   
         mtn_prompt();
      }
      else if (choice == "2") {
         wait_timer();
         airtel_prompt();
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong Choice!\n\n";
      }
   }
   else if (choice == "*131#") {
      system("clear");
      
      cout << "\n\n";
      cout << "\n\n1." << sim1 << "\n2." << sim2 << "\n\n> ";
      cin >> choice;
      system("clear");
      if (choice == "1") {
         cout << "\n";
         wait_timer();
         mtn_airtime();
      }
      else if (choice == "2") {
         cout << "\n";
         wait_timer();
         airtel_airtime();
      }
      else {
         system("clear");
         wait_timer();
         cout << "\nWrong choice!\n\n";
      }
   }
   else {
      wait_timer();
      cout << "\nUNKNOWN APPLICATION!\n\n";
   }
}

void mtn_prompt(){
 
   int count=0;
    
    
   cout<<"\n1.Send Money\n2.Buy\n3.Bank\n4.Others\n5.My account\n6.Stop\n7.Next\n\n> ";
   cin>>choice;
   system("clear");
   if(choice=="1"){
     wait_timer();
      mtn_send_money();
   }
    
    else if(choice=="2"){
      wait_timer();
      cout<<"\nMTN reserved Buy\n\n00.Back\n\n> ";
      cin>>choice;
      system("clear");
      if(choice=="00"){
         
         wait_timer();
         mtn_prompt();
      }
      else{
         system("clear");
         wait_timer();
         cout<<"\nWrong choice!\n\n";
        
      }
   } 
   
   
   else if(choice=="3"){
       wait_timer();
      cout<<"\nMTN reserved Bank\n\n00.Back\n\n> ";
      cin>>choice;
      system("clear");
      if(choice=="00")
      {
         wait_timer();
         mtn_prompt();
      }
       else{
         system("clear");
         wait_timer();
         cout<<"\nWrong choice!\n\n";
      }
   }
   
   
    else if(choice=="4"){
       wait_timer();
      cout<<"\nMTN reserved others\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00")
      {
         system("clear");
         wait_timer();
         mtn_prompt();
      }
       else{
         system("clear");
          wait_timer();
         cout<<"\nWrong choice!\n\n";
         
      }
   } 
   
   
   else if(choice=="5"){
       wait_timer();
      cout<<"\nMTN reserved my Account\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00")
      {
         system("clear");
         wait_timer();
         mtn_prompt();
      }
       else{
         system("clear");
          wait_timer();
         cout<<"\nWrong choice!\n\n";

      }
   } 
 else if(choice=="6"){
      exit();
       }
   else if(choice=="7"){
      mtn_next();
   }
else{ 
    system("clear");
     wait_timer();
      cout<<"\nWrong Choice! Try again!\n\n";
      mtn_prompt();
      
   }
}



void mtn_next(){
  
   wait_timer();
   cout<<"\n8.MoMo Paye\n9.Insurance\n10.Macye Macye\n11.Back\n12.Eixt\n\n> ";
   cin>>choice;
    system("clear");
    wait_timer();
     if(choice=="8"){
       wait_timer();
      cout<<"\nMTN reserved MoMo Paye\n\n0.Back\n99.choice\n\n> ";
      cin>>choice;
      if(choice=="0")
      {
         system("clear");
         mtn_next();
      }
      else if(choice=="99")
      {
         mtn_prompt();
      }
       else{
         wait_timer();
         cout<<"\nWrong Choice!\n\n";
        

      }
   } 
    else if(choice=="99"){
        wait_timer();
      cout<<"\nMTN reserved Insurance\n\n0.Back\n99.choice\n\n> ";
      cin>>choice;
     system("clear");
      if(choice=="0")
      {
         mtn_next();
      }
      else if(choice=="99"){
         mtn_prompt();
      }
       else{
          wait_timer();
         cout<<"\nWrong Choice!\n\n";
          }
       }

 else if(choice=="10"){
    wait_timer();
      cout<<"\nMTN reserved Macye Macye\n\n0.Back\n99.Menu\n\n> ";
      cin>>choice;
      system("clear");
      if(choice=="0")
      {
         mtn_next();
      }
      else if(choice=="99"){
         mtn_prompt();
      }
      else{
          wait_timer();
         cout<<"\nWrong choice.\n\n";

      }
   } 
    else if(choice=="12"){
     exit();
      }
   else if(choice=="11"){
      mtn_prompt();
   }

   else{
      cout<<"\nWrong Choice. Try Again!\n\n";
      mtn_next();
   }
}

void mtn_send_money() {
     wait_timer();
   cout<<"\n1.MoMo user\n2.Send to Ekash\n3.International Remittances\n4.Exit\n00.Back\n\n> ";
    cin >> choice;
     system("clear");
    wait_timer();
    if (choice == "1") {
        mtn_recipient();
        MoMo_amount();
       }
      

    else if (choice == "2") {
       wait_timer();
        cout << "\nMTN reserved Ekash\n\n0.Back\n\n> ";
        cin>>choice;
        system("clear");
    wait_timer();
          if (choice == "0") {
          mtn_send_money(); 
    }
    else {
       wait_timer();
        cout << "\n\nWrong choice. Try again!\n\n";
        mtn_send_money();
    }
    }
    else if (choice == "3") {
       wait_timer();
        cout << "\nMTN reserved International Remittances\n\n0.Back\n\n> ";
        cin>>choice;
        system("clear");
    wait_timer();
          if (choice == "0") {
        mtn_send_money(); 
    }
    else {
       wait_timer();
        cout << "\n\nWrong choice. Try again!\n\n";
        mtn_send_money();
    }
    }
    else if (choice == "4") {
        exit();
    }
    else if (choice == "00") {
        mtn_prompt(); 
    }
    else {
       wait_timer();
        cout << "\n\nWrong choice. Try again!\n\n";
        mtn_send_money();
    }
}



void mtn_recipient(){
    wait_timer();
   cout << "\nEnter recipient 07*******\n\n> ";
        cin >> number;
         system("clear");
         wait_timer();
         if (number.length() != 10 || (number.substr(0, 3) != "078" && number.substr(0, 3) != "079")){
             wait_timer();
            cout << "\nRecipient not found!\n" << endl; 
            mtn_recipient();
        
        }
}



void MoMo_amount() {
    while (true) {
        system("clear"); 
        wait_timer();   
        cout << "\nEnter amount to send to " << number << ".\n\n > ";
        cin >> amount;   
        system("clear"); 
        wait_timer();   

        if (amount <= 0) {
            system("clear");
            wait_timer();
            cout << "\nInvalid amount\n\n";
            break; 
        } else if (amount > MoMo_account) {
            system("clear");
            wait_timer();
            cout << "\nNot enough balance to perform transaction!\n\n";
            break; 
                  }

        
        if (amount <= 1000) {
            fee = 20;
        } else if (amount <= 3000) {
            fee = 100;
        } else if (amount <= 4999) {
            fee = 150;
        } else if (amount >= 5000) {
            fee = 250;
        }

        
        MoMo_account -= (amount + fee); 
        wait_timer();
        system("clear");
        cout << "\nYou entered " << amount << " FRw. Fee is " << fee << " FRW. Money will be sent to " << number << ".\n";

        
        if (amount > 0) {
            mtn_pin(); 
        }

        
        break;
    }
}




void mtn_pin(){
   string pin;
   string confirm_pin;
    wait_timer();
   cout<<"\nEnter your MoMo Pin to confirm transaction.\n\n> ";
      cin>>pin;  
      
  
    system("clear");
       wait_timer();

if(pin.length() !=5 )
   { 
      system("clear");
       wait_timer();
      
      cout<<"\n\nPin must be FIVE digit! try again!\n\n";
      mtn_pin();
       
   }
   
 wait_timer();
   cout<<"\nConfirm Pin\n\n>";
  cin>>confirm_pin;
    system("clear");
       wait_timer();


   if(confirm_pin.length() !=5)
   { 
      system("clear");
       wait_timer();
      cout<<"\n\nPIN did not match! try agin\n\n";
      mtn_pin();
   
       }

  else  if(confirm_pin == pin && pin.length() ==5){

       system("clear");
       wait_timer();

      cout<<"\n\n   Money of "<<amount<<"FRW. Transferd succefully at: (" << currentTime <<"). fee was "<<fee<<"FRW. Your new balance is "<<MoMo_account<<"FRW.Thank you for using MTN.\n\n"; 
   }
  
}



void airtel_prompt(){
   int count=0;

 
 
cout<<"\n\n1.Send\n2.Buy\n3.Bank\n4.Others\n5.My account\n6.Stop\n\n> ";
   cin>>choice;
  system("clear");
 if(choice=="1"){
    wait_timer();
    system("clear");
      cout<<"\nAirtel reserved Send\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00")
      {
         system("clear");
         wait_timer();
         airtel_prompt();
      }
      else{
         system("clear");
          wait_timer(); 
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   }
    
    else if(choice=="2"){
       wait_timer();
      cout<<"\nAirtel  reserved Buy\n\n00.Back\n\n> ";
      cin>>choice;
      
      if(choice=="00")
      { 
         system("clear");
         wait_timer();
         airtel_prompt();
      }
      else{ 
         system("clear");
          wait_timer();
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   } 
   
   
   else if(choice=="3"){
       wait_timer();
      cout<<"\nAritel reserved Bank \n\n00.Back\n\n> ";
      cin>>choice;
     system("clear");
      if(choice=="00")
      
      { 
         system("clear");
           wait_timer();
         airtel_prompt();
      }
      else{ 
         system("clear");
          wait_timer();
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   }
   
   
    else if(choice=="4"){
       wait_timer();
      cout<<"\nAirtel reserved others\n\n00.Back \n\n> ";
      cin>>choice;
      
      if(choice=="00")
      {system("clear");
           wait_timer();
         airtel_prompt();
      }
      else{ 
         system("clear");
          wait_timer();
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   } 
   
   
   else if(choice=="5"){
      system("clear");
       wait_timer();
      cout<<"\nAirtel reserved my account\n\n00.Back\n\n> ";
      cin>>choice;
      system("clear");
      if(choice=="00")
      {
         system("clear");
          wait_timer();
         airtel_prompt();
      }
      else{ 
         system("clear");
          wait_timer();
      cout<<"\nWrong Choice! Try again!\n\n";
      
   }
   } 
  
   else if(choice=="6"){
       exit();
       }

    else{
      system("clear");
     wait_timer();
      cout<<"\nWrong choice. Try Again!\n\n";
      airtel_prompt();
   }

}


void mtn_airtime(){
   system("clear");
   float mtn_airtime_balance=120;
   wait_timer();
   cout<<"\nMTN Airtime Balance is FRW"<<mtn_airtime_balance<<".\n\n";
    
}



void airtel_airtime(){
  system("clear");
   float airtel_airtime_balance=150;
   wait_timer();
   cout<<"\nYour Airtel airtime Balance is FRW"<<airtel_airtime_balance<<".\n\n";
   
}
};


int main(){
   Network_providers open;
   system("clear");
     open.Sim();
  
}
