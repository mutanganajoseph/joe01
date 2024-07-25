#include<iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
#include <cstdlib>

using namespace std;


class Network_providers{
public:


int count=0;
float MoMo_account=7500, amount=0,fee=0;
string number,choice;

 time_t joe =time(0);
   char* currentTime = ctime(&joe);


void timer(){
   system("clear");
 int second = 0;

    // Infinite loop to count seconds
    while (true) {
      
        // Display the corresponding word based on 'second'
        if(second ==0){
         system("clear");
         cout<<"\n\n\n";
         cout<<"\n  WELCOME TO NETWORK PROVIDERS, PROGRAM WILL START IN TEN SECONDS!\n\n\n";
        }
        else if (second == 3) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           YOU GONNA TYPE *182# OR *131#.\n" << endl;
        } else if (second == 5) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           THEN FOLLOW PROMPT.\n" << endl;
        } else if (second == 7) {
         system("clear");
         cout<<"\n\n\n";
            cout << "                           ENJOY YOUR TIME WITH NETWORK PROVIDERS!\n" << endl;
        }
        else if(second ==9){
         system("clear");
          cout<<"\n\n\n";
         cout<<"                         GET READY!\n" <<endl;
        }
        else if(second ==10){
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
         system("clear");
      cout<<"";
      break;
    }
    second++;
      this_thread::sleep_for(chrono::seconds(1));
   }
}


void exit(){
    while(true){
      cout<<"\nExiting...\n\n> ";
      break;
      }
      }



void Action(){

   system("clear");
   int count=0;
   
   float mtn_airtime_balance, airtel_airtime_balance;

   cout<<"\n> ";
   cin >>choice;
   if(choice=="*182#"){
         system("clear");
       cout<<"\n\n";
      cout<<"1.MTN\n2.Airtel\n\n> ";
      cin>>choice;
      
      if(choice=="1"){
         
      mtn_prompt();
      
      }
      else if(choice=="2"){
         airtel_prompt();
      }
      else{
         cout<<"\nWrong Choice!\n\n";
      }
   }


   else if(choice=="*131#"){
         system("clear");
      cout<<"\n\n";
      cout<<"1.MTN\n2.Airtel\n\n> ";
      cin>>choice;

      if(choice=="1"){
         cout<<"\n";
         mtn_airtime();
         
      }
      else if(choice=="2"){
         cout<<"\n";
         airtel_airtime();
      }
      else{
         
         cout<<"\nWrong choice!\n\n";
      }
   }


   else{
      cout<<"\nUNKNOWN APPLICATION!\n\n";
   }
}



void mtn_prompt(){
system("clear");
 
     int count=0;
    
    wait_timer();
   cout<<"\n1.Send Money\n2.Buy\n3.Bank\n4.Others\n5.My account\n6.Stop\n7.Next\n\n> ";
   cin>>choice;
   system("clear");
   if(choice=="1"){
     wait_timer();
      mtn_send_money();
   }
    
    else if(choice=="2"){
     
      cout<<"\nMTN reserved Buy\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00"){
         mtn_prompt();
      }
      else{
         cout<<"\nWrong choice!\n\n";
        
      }
   } 
   
   
   else if(choice=="3"){
      cout<<"\nMTN reserved Bank\n\n00.Back\n\n>";
      cin>>choice;
      if(choice=="00")
      {
         mtn_prompt();
      }
       else{
         cout<<"\nWrong choice!\n\n";
      }
   }
   
   
    else if(choice=="4"){
      cout<<"\nMTN reserved others\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00")
      {
         mtn_prompt();
      }
       else{
         cout<<"\nWrong choice!\n\n";
         
      }
   } 
   
   
   else if(choice=="5"){
      cout<<"\nMTN reserved my Account\n\n00.Back\n\n> ";
      cin>>choice;
      if(choice=="00")
      {
         mtn_prompt();
      }
       else{
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
      cout<<"\nWrong Choice! Try again!\n\n";
      mtn_prompt();
      
   }
}



void mtn_next(){
  
   
   cout<<"\n8.MoMo Paye\n9.Insurance\n10.Macye Macye\n11.Back\n12.Eixt\n\n> ";
   cin>>choice;
    system("clear");
    wait_timer();
     if(choice=="8"){
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
         cout<<"\nWrong Choice!\n\n";

      }
   } 
    else if(choice=="99"){
       
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
         cout<<"\nWrong Choice!\n\n";
          }
       }

 else if(choice=="10"){
      cout<<"\nMTN reserved Macye Macye\n\n0.Back\n99.choice\n\n> ";
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

   cout<<"\n1.MoMo user\n2.Send to Ekash\n3.International Remittances\n4.Exit\n00.Back\n\n> ";
    cin >> choice;
     system("clear");
    wait_timer();
    if (choice == "1") {
        mtn_recipient();
        MoMo_amount();
       }
      

    else if (choice == "2") {
        cout << "\nMTN reserved Ekash\n\n0.Back\n\n> ";
        cin>>choice;
        system("clear");
    wait_timer();
          if (choice == "0") {
          mtn_send_money(); 
    }
    else {
        cout << "\n\nWrong choice. Try again!\n\n";
        mtn_send_money();
    }
    }
    else if (choice == "3") {
        cout << "\nMTN reserved International Remittances\n\n0.Back\n\n> ";
        cin>>choice;
        system("clear");
    wait_timer();
          if (choice == "0") {
        mtn_send_money(); 
    }
    else {
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
        cout << "\n\nWrong choice. Try again!\n\n";
        mtn_send_money();
    }
}



void mtn_recipient(){
   cout << "\nEnter recipient 07*******\n\n> ";
        cin >> number;
         system("clear");
         wait_timer();
         if (number.length() != 10 || (number.substr(0, 3) != "078" && number.substr(0, 3) != "079")){
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


   else if(confirm_pin == pin && pin.length() ==5){

       system("clear");
       wait_timer();

      cout<<"\n\n   Money of "<<amount<<"FRW. Transferd succefully at: (" << currentTime <<"). fee was "<<fee<<"FRW. Your new balance is "<<MoMo_account<<"FRW.Thank you for using MTN.\n\n"; 
   }
  
}

void airtel_prompt(){
   int count=0;

 system("clear");
 wait_timer();
cout<<"\n\n1.Send\n2.Buy\n3.Bank\n4.Others\n5.My account\n6.Stop\n\n>";
   cin>>choice;
  system("clear");
 if(choice=="1"){
      cout<<"\nAirtel reserved Send\n\n00.Back\n\n>";
      cin>>choice;
      if(choice=="00")
      {
         airtel_prompt();
      }
      else{ 
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   }
    
    else if(choice=="2"){
      cout<<"\nAirtel  reserved Buy\n\n00.Back\n\n>";
      cin>>choice;
      
      if(choice=="00")
      {
         airtel_prompt();
      }
      else{ 
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   } 
   
   
   else if(choice=="3"){
      cout<<"\nAritel reserved Bank \n\n00.Back\n\n>";
      cin>>choice;
     
      if(choice=="00")
      {
         airtel_prompt();
      }
      else{ 
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   }
   
   
    else if(choice=="4"){
      cout<<"\nAirtel reserved others\n\n00.Back \n\n>";
      cin>>choice;
      
      if(choice=="00")
      {
         airtel_prompt();
      }
      else{ 
      cout<<"\nWrong Choice! Try again!\n\n";
   }
   } 
   
   
   else if(choice=="5"){
      cout<<"\nAirtel reserved my account\n\n00.Back\n\n>";
      cin>>choice;
    
      if(choice=="00")
      {
         airtel_prompt();
      }
      else{ 
      cout<<"\nWrong Choice! Try again!\n\n";
      
   }
   } 
  
   else if(choice=="6"){
       exit();
       }

    else{
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
   open.timer();
   open.Action();
   
  
}
