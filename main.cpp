#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <conio.h>  //include header file
using namespace std;  //using standard namespace


string resit[10];    //to declare string variables //array declaration with 10 elements
string arraydelivery[1];  //to declare string variables //array declaration with 1 element
int j=0;
int i=0;   
int count=0;   //to declare number of book purchased


void BookList ();  
float BookList2 (float &fulltotal); 
void additionalcharge ();
float membership (float &fulltotal);  
float delivery (float &totalprice2);
float payment(float &totalprice3);  //function declaration


float fulltotal=0;
float totalprice2=0;
float totalprice3=0;   //to declare float variables


int main()  //as a driver function, all other function invoked from main
{ //start of function body
  
   char ansmenu;   //to declare character variables
   do  // do loop to be executed
   {
      
cout<<"\t __   __    _______    ___     __    _      __   __    _______    __    _    __   __ "<<endl;
cout<<"\t|  |_|  |  |   _   |  |   |   |  |  | |    |  |_|  |  |       |  |  |  | |  |  | |  |"<<endl;
cout<<"\t|       |  |  |_|  |  |   |   |   |_| |    |       |  |    ___|  |   |_| |  |  | |  |"<<endl;
cout<<"\t|       |  |       |  |   |   |       |    |       |  |   |___   |       |  |  |_|  |"<<endl;
cout<<"\t|       |  |       |  |   |   |  _    |    |       |  |    ___|  |  _    |  |       |"<<endl;
cout<<"\t| ||_|| |  |   _   |  |   |   | | |   |    | ||_|| |  |   |___   | | |   |  |       |"<<endl;
cout<<"\t|_|   |_|  |__| |__|  |___|   |_|  |__|    |_|   |_|  |_______|  |_|  |__|  |_______|"<<endl;  //output
  
  
       int choice;  //to declare integer variable
       cout<<endl;
       list :
       void *menu;
       cout << "\t\t\t[1] Booklist"<<endl<<endl;
       cout << "\t\t\t[2] Promotion"<<endl<<endl;
       cout << "\t\t\t[3] Book Order"<<endl<<endl;
       cout << "\t\t\t[4] Exit"<<endl<<endl;
       cout << "\t\t\tCODE: ";   //output
       cin>> choice;   //user input
       system ("CLS"); //clear the screen
  
           switch (choice)  //evaluate expression (choice)
           {
               case 1:    // code to be executed if choice is equal to 1
                   BookList();  // function call
               break;   //break statement
  
               case 2:    // code to be executed if choice is equal to 2
                   additionalcharge();  //function call
               break;   //break statement
      
               case 3:    // code to be executed if choice is equal to 3
               BookList2(fulltotal);  //function call
               cout <<endl<<endl;
               membership(fulltotal);  //function call
               cout<<endl<<endl;
               delivery (totalprice2);  //function call
               payment(totalprice3);  //function call
               break;   //break statement
      
               case 4:    // code to be executed if choice is equal to 4
               {
               cout << "\t\t\tTHANKYOUU \n\t\t\tPLEASE COME AGAIN!";  //output
               return 0;
               }
  
               default:  // code to be executed if choice doesn't match any case
               cout << "\t\t\tInvalid Input. Please re-enter.\n";    //output
               goto list;
           }
  
       cout << "\n\n\t\t\tDo you want to continue? (y/n) : ";   //output
       cin>>ansmenu;    //user input
       system ("CLS"); // clear the screen
  
   } while (ansmenu=='y' || ansmenu=='Y');  //while loop and expression inside while's parentheses
  
  
return 0;   //required because the usage of function   
} //end of function body


//this is all the function ************************************************


void BookList ()  //function definition
{ //start of function body
  
   int bookchoice;  //to declare integer variable
       cout << "\n\t\t\t (1) FICTION\n" <<endl;
       cout << "\n\t\t\t (2) non-FICTION\n" <<endl;   
       cout << "\n\t\t\t (3) YOUNG ADULT\n" <<endl;   
       cout << "\n\t\t\t (4) MYSTERY\n" <<endl; //output
       ni :  //identifier
       cout << "\n\t\t\tPlease Select Book Genre: ";  //output
       cin >> bookchoice;     //user input


  
           switch (bookchoice)  //evaluate expression (bookchoice)
           {
               int code;   //to declare integer variable
               int quantity;    //to declare integer variable
  
           case 1 :    // code to be executed if bookchoice is equal to 1
               cout << "\n\t\t\tYou chose Fiction"<<endl;
               cout << "\n\t\t\tList of Fiction Book -";
               cout << "\n\n\t\t\t<1> - All The Light We Cannot See";
               cout << "\n\t\t\t<2> - Maximum Ride Forever";
               cout << "\n\t\t\t<3> - Moby Dick";
               cout << "\n\t\t\t<4> - Only a Mother Know"; //output
           break;   //break statement
  
           case 2 :    // code to be executed if bookchoice is equal to 2
               cout << "\n\t\t\tYou chose non-Fiction genre"<<endl;
               cout << "\n\t\t\tList of non-Fiction Book -";
               cout << "\n\n\t\t\t<1> - A Doctor in The House";
               cout << "\n\t\t\t<2> - Rich Dad Poor Dad";
               cout << "\n\t\t\t<3> - Law of Attraction";
               cout << "\n\t\t\t<4> - Atomic Habit";   //output
           break;   //break statement
  
           case 3 :    // code to be executed if bookchoice is equal to 3
               cout << "\n\t\t\tYou chose Young Adult genre"<<endl;
               cout << "\n\t\t\tList of Young Adult Book -";
               cout << "\n\n\t\t\t<1> - Court Frost and Starlight";
               cout << "\n\t\t\t<2> - Diary of a Bad Boy";
               cout << "\n\t\t\t<3> - The Upside of Faling";
               cout << "\n\t\t\t<4> - To All The Boys I've Loved Before'";   //output
           break;   //break statement 


       case 4 :        // code to be executed if bookchoice is equal to 4
           cout << "\n\t\t\tYou chose Mystery genre"<<endl;
           cout << "\n\t\t\tList of Mystery Book -";
           cout << "\n\n\t\t\t<1> - The Silent Patient";
           cout << "\n\t\t\t<2> - The Good Daughter";
           cout << "\n\t\t\t<3> - The Silent Wife";
           cout << "\n\t\t\t<4> - Murder for Christmas";   //output
           break;   //break statement
          
       default :      // code to be executed if bookchoice doesn't match any case
           cout <<"\t\t\tInvalid input. Please re-enter.";  //output
           cout <<" \n"; 
           goto ni; // Control of the program move to ni
           }


      
} //end of function body




void additionalcharge ()  //function definition
{ //start of function body
                   
cout<<"\t __   __  _______  _______  ______      _______  __    _  ______     _______  _______  ___      _______ "<<endl;
cout<<"\t|  | |  ||       ||   _   ||    _ |    |       ||  |  | ||      |   |       ||   _   ||   |    |       |"<<endl;
cout<<"\t|  |_|  ||    ___||  |_|  ||   | ||    |    ___||   |_| ||  _    |  |  _____||  |_|  ||   |    |    ___|"<<endl;
cout<<"\t|       ||   |___ |       ||   |_||_   |   |___ |       || | |   |  | |_____ |       ||   |    |   |___ "<<endl;
cout<<"\t|_     _||    ___||       ||    __  |  |    ___||  _    || |_|   |  |_____  ||       ||   |___ |    ___|"<<endl;
cout<<"\t  |   |  |   |___ |   _   ||   |  | |  |   |___ | | |   ||       |   _____| ||   _   ||       ||   |___ "<<endl;
cout<<"\t  |___|  |_______||__| |__||___|  |_|  |_______||_|  |__||______|   |_______||__| |__||_______||_______| "<<endl;     //output                             
                                                            




   char ans;  //to declare character variables
   do  // do loop to be executed
   {
       char member;  //to declare character variables
       cout<<"\n\t\t\t******  MEMBER PROMOTION  ******"<<endl<<endl;
       cout<< "\t\t\tPlease Choose Member Type"<<endl<<endl;
       cout<<"\t\t\t [G] GOLD"<<endl<<endl;
       cout<<"\t\t\t [S] SILVER"<<endl<<endl;
       cout<<"\t\t\t [B] BRONZE"<<endl<<endl;
       cout<<"\t\t\t [X] NON-MEMBER"<<endl<<endl;
       cout<< "\t\t\t Member Type : ";             //output
       cin >>member;    //user input
       cout<<endl;


  
           if (member=='G'|| member=='g')  //code to be executed if the expression is true
           {
               cout<<"\t\t\t   YOU CHOSE GOLD MEMBER'S PROMOTION"<<endl<<endl<<endl;
               cout<<"\t\t\t 80% off for spending more than RM500"<<endl<<endl;
               cout<<"\t\t\t 70% off for spending more than RM200"<<endl<<endl;
               cout<<"\t\t\t 50% off for spending less than RM200"<<endl<<endl;   //output
           break;      //break statement
           }
      
           else if (member=='S'|| member=='s')  // code to be executed if the expression is true
           {
               cout<<"\t\t\t  YOU CHOSE SILVER MEMBER'S PROMOTION"<<endl<<endl<<endl;
               cout<<"\t\t\t 70% off for spending more than RM500"<<endl<<endl;
               cout<<"\t\t\t 60% off for spending more than RM200"<<endl<<endl;
               cout<<"\t\t\t 30% off for spending less than RM200"<<endl<<endl;    //output
           break;   //break statement
           }
          
           else if (member=='B'|| member=='b')    // code to be executed if the expression is true
           {
               cout<<"\t\t\t YOU CHOSE BRONZE MEMBER'S PROMOTION"<<endl<<endl<<endl;
               cout<<"\t\t\t 60% off for spending more than RM500"<<endl<<endl;
               cout<<"\t\t\t 40% off for spending more than RM200"<<endl<<endl;
               cout<<"\t\t\t 20% off for spending less than RM200"<<endl<<endl;     //output
           break;   //break statement
           }
          
           else if (member=='X'|| member=='x')   // code to be executed if the expression is true
           {
               cout<<"\t\t\t   YOU CHOSE NON-MEMBER'S PROMOTION"<<endl<<endl<<endl;
               cout<<"\t\t\t 15% off for spending more than RM500"<<endl<<endl;
               cout<<"\t\t\t 10% off for spending more than RM200"<<endl<<endl;
               cout<<"\t\t\t 5% off for spending less than RM200"<<endl<<endl;      //output
           break;   //break statement
           }
          
           else  //  code to be executed if the expression is false
           {
               cout <<"\t\t\tDo you want to rechoose? (Y/N)  ";      //output
               cin>>ans;      //user input
               cout<<endl;
          
           }
          
   }while (ans=='y' || ans== 'Y');   //while loop and expression inside while's parentheses




       cout<<endl<<endl<<endl;
       cout<<"\t\t\t\t******  DELIVERY CHARGE  ******"<<endl;     //output
       cout<<endl;
      
       cout << "\t\tCODE\t\t\tDestination\t\tDelivery Charge"<<endl<<endl;
       cout << "\t\t[1]\t\t\tKlang Valley\t\tRM10.00"<<endl<<endl;
       cout << "\t\t[2]\t\t\tNegeri Sembilan\t\tRM20.00"<<endl<<endl;
       cout << "\t\t[3]\t\t\tMelaka\t\t\tRM35.00"<<endl<<endl;
       cout << "\t\t[4]\t\t\tJohor\t\t\tRM40.00"<<endl<<endl;
       cout << "\t\t[5]\t\t\tPerak\t\t\tRM50.00"<<endl<<endl;    //output
      
      
       ofstream file("additionalcharge.txt");    // open additionalchage file in write mode.
      
       file << "\t\tCODE\t\t\tDestination\tDelivery Charge"<<endl<<endl;
       file << "\t\t[1]\t\t\tKlang Valley\t\t\tRM10.00"<<endl<<endl;
       file << "\t\t[2]\t\t\tNegeri Sembilan\t\t\tRM20.00"<<endl<<endl;
       file << "\t\t[3]\t\t\tMelaka\t\t\t\tRM35.00"<<endl<<endl;  
       file << "\t\t[4]\t\t\tJohor\t\t\t\tRM40.00"<<endl<<endl;
       file << "\t\t[5]\t\t\tPerak\t\t\t\tRM50.00"<<endl<<endl;  //write the data to file
      
       file.close();  //close the file
} //end of function body


  
float BookList2 (float &fulltotal)  //function definition
{  //start of function body


   int bookchoice,code,quantity;  //to declare integer variable
   float total;   //to declare float variables
   char ansbook;  //to declare character variables
   do // do loop to be executed
   {
           cout << "\n\t\t\tPlease Select Book Genre" <<endl;
           cout << "\n\t\t\t (1) FICTION\n" <<endl;
           cout << "\n\t\t\t (2) non-FICTION\n" <<endl;   
           cout << "\n\t\t\t (3) YOUNG ADULT\n" <<endl;   
           cout << "\n\t\t\t (4) MYSTERY\n" <<endl;
           cout << "\n\t\t\tBook Genre : ";                   //output
           cin >> bookchoice;      //user input
           system ("CLS"); //clear the screen
               
          
           switch (bookchoice)   //evaluate expression (bookchoice)
           { 
			case 1 :   // code to be executed if bookchoice is equal to 1
				cout << "\n\t\t\tYou chose Fiction genre"<<endl;
				cout << "\n\t\t\tList of Book -";
				cout << "\n\t\t\t1- Before the coffee gets cold\t\t\t[RM35.00]";
				cout << "\n\t\t\t2- The Alchemist\t\t\t\t[RM43.00]";
				cout << "\n\t\t\t3- If you tell me to come, I'll drop everything just tell me to come\t\t\t\t\t[RM55.00]";
				cout << "\n\t\t\t4- They both die at the end\t\t\t\t[RM60.00]";
				cout << "\n\n\t\t\tBook Code : ";    //output
				cin >>code;   //user input
				cout << "\n\t\t\tQuantity : ";       //output
				cin >> quantity;    //user input
				
				if (code == 1)  // code to be executed if the expression is true
				{
					total=quantity*25; //assigning the total price 
					fulltotal+=total;   //assigning the new total price
					resit[i]= "\n\t\t\tBefore the coffee gets cold";  //array initialization
					cout <<resit[i];  //output
					i++;  //increment of i
					count=count+quantity;  //increment of count
					cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;	//output


				}
		
				else if (code == 2)  //code to be executed if the expression is true
				{
					total=quantity*22; //assigning the total price
					fulltotal+=total;  //assigning the new total price
					resit[i]= "\n\t\t\tThe Alchemist";   //array initialization
					cout <<resit[i];   //output
					i++;   //increment of i
					count=count+quantity;   //increment of count
					cout<< "\n\t\t\tTotal : RM"<<setprecision(2)<<fixed<<total;    //output
				}
				
				else if (code == 3)  //code to be executed if the expression is true
				{
					total=quantity*12;  //assigning the total price
					fulltotal+=total;   //assigning the new total price
					resit[i]= "\n\t\t\tIf you tell me to come, I'll drop everything just tell me to come";   //array initialization
					cout <<resit[i];   //output
					i++;  //increment of i
					count=count+quantity;   //increment of count
					cout<< "\n\t\t\tTotal : RM"<<setprecision(2)<<fixed<<total;     //output
				}
				
				else if (code == 4)  //code to be executed if the expression is true
				{
					total=quantity*25;  //assigning the total price
					fulltotal+=total;   //assigning the new total price
					resit[i]= "\n\t\t\tThey both die at the end";   //array initialization
					cout <<resit[i];  //output
					i++;  //increment of i
					count=count+quantity;  //increment of count
					cout<< "\n\t\t\tTotal : RM"<<setprecision(2)<<fixed<<total;    //output
			
				}
				else  // block of code to be executed if the condition is false
				{
				cout <<"\n\t\t\tInvalid book code. Unable to process order.\n";  //output 
				}
		    break;   //break statement
			
			case 2 :  // code to be executed if bookchoice is equal to 2
				cout << "\n\t\t\tYou chose non-Fiction genre"<<endl;
				cout << "\n\t\t\tList of Book -";
				cout << "\n\t\t\t1- I Want to Die But I Want to Eat Tteokbokki\t[RM70.00]";
				cout << "\n\t\t\t2- This explains everything\t\t[RM54.00]";
				cout << "\n\t\t\t3- Blinkt\t[RM23.00]";
				cout << "\n\t\t\t4- The elephant in the brain\t\t\t[RM45.00]";
				cout << "\n\n\t\t\tBook Code : ";       //output
				cin >>code;     //user input
				cout << "\n\t\t\tQuantity : ";          //output
				cin >> quantity;    //user input
				
				if (code == 1)  //code to be executed if the expression is true
				{
					total=quantity*50;  //assigning the total price
					fulltotal+=total;   //assigning the new total price
					resit[i]=  "\n\t\t\tI Want to Die But I Want to Eat Tteokbokki";  //array initialization
					cout <<resit[i];     //output
					i++;  //increment of i
					count=count+quantity;			//increment of count		
					cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;   //output
				}
		
				else if (code == 2)  //code to be executed if the expression is true
				{
					total=quantity*24;  //assigning the total price
					fulltotal+=total;    //assigning the new total price
					resit[i]=   "\n\t\t\tThis explains everything";   //array initialization
					cout <<resit[i];    //output
					i++;  //increment of i
					count=count+quantity;					//increment of count
					cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;	 //output
				}
				
				else if (code == 3)  //code to be executed if the expression is true
				{ 
					total=quantity*23;   //assigning the total price
					fulltotal+=total;     //assigning the new total price
					resit[i]=  "\n\t\t\tBlink";   //array initialization
					cout <<resit[i];    //output
					i++;   //increment of i
					count=count+quantity;					//increment of count
					cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
				}
				else if (code == 4)  //code to be executed if the expression is true
				{
					total=quantity*15;   //assigning the total price
					fulltotal+=total;     //assigning the new total price
					resit[i]=  "\n\t\t\tThe elephant in the brain";    //array initialization
					cout <<resit[i];    //output
					i++;   //increment of i
					count=count+quantity;					//increment of count
					cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;	 //output
				}
				else if (code>4)   //code to be executed if the expression is true
					cout <<"\n\t\t\tInvalid book code. Unable to process order.\n";   //output
			break;   //break statement


          //output
           break;   //break statement
          
           case 3 :    // code to be executed if bookchoice is equal to 3
               cout << "\n\t\t\tYou chose Young Adult genre"<<endl;
               cout << "\n\t\t\tYou chose Fiction genre"<<endl;
               cout << "\n\t\t\tList of Book -";
               cout << "\n\t\t\t1- Court Frost and Starlight\t\t[RM13.00]";
               cout << "\n\t\t\t2- Diary of a Bad Boy\t\t\t[RM25.00]";
               cout << "\n\t\t\t3- The Upside of Faling\t\t\t[RM32.00]";
               cout << "\n\t\t\t4- To All The Boys I've Loved Before\t[RM21.00]";
               cout << "\n\n\t\t\tBook Code : ";      //output
               cin >>code;      //user input
               cout << "\n\t\t\tQuantity : ";        //output
               cin >> quantity;     //user input
              
               if (code == 1)  //code to be executed if the expression is true
               {
                   total=quantity*13;  //assigning the total price
                   fulltotal+=total;    //assigning the new total price
                   resit[i]=  "\n\t\t\tCourt Frost and Starlight";   //array initialization
                   cout <<resit[i];     //output
                   i++;       //increment of i
                   count=count+quantity;                    //increment of count
                   cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;     //output
               }
      
               else if (code == 2)   //code to be executed if the expression is true
               {
                   total=quantity*25;  //assigning the total price
                   fulltotal+=total;    //assigning the new total price
                   resit[i]=  "\n\t\t\tDiary of a Bad Boy";   //array initialization
                   cout <<resit[i];     //output
                   i++;       //increment of i
                   count=count+quantity;                   //increment of count
                   cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;     //output
               }
              
               else if (code == 3)  //code to be executed if the expression is true
               {
                   total=quantity*32;  //assigning the total price
                   fulltotal+=total;    //assigning the new total price
                   resit[i]=  "\n\t\t\tThe Upside of Faling";     //array initialization
                   cout <<resit[i];     //output
                   i++;      //increment of i
                   count=count+quantity;                   //increment of count
                   cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
               }
               else if (code == 4)   //code to be executed if the expression is true
               {
                   total=quantity*21;    //assigning the total price
                   fulltotal+=total;      //assigning the new total price
                   resit[i]=  "\n\t\t\tTo All The Boys I've Loved Before";    //array initialization
                   cout <<resit[i];    //output
                   i++;      //increment of i
                   count=count+quantity;                   //increment of count
                   cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;     //output
               }
               else if (code>4)   //code to be executed if the expression is true
                   cout <<"\n\t\t\tInvalid book code. Unable to process order.\n"; //output
           break;    //break statement
      
           case 4 :   // code to be executed if bookchoice is equal to 4
               cout << "\n\t\t\tYou chose Mystery genre"<<endl;
               cout << "\n\t\t\tList of Book -";
               cout << "\n\t\t\t1- The Silent Patient\t\t\t[RM15.00]";
               cout << "\n\t\t\t2- The Good Daughter\t\t\t[RM23.00]";
               cout << "\n\t\t\t3- The Silent Wife\t\t\t[RM18.00]";
               cout << "\n\t\t\t4- Murder for Christmas\t\t\t[RM19.00]";
               cout << "\n\n\t\t\tBook Code : ";       //output
               cin >>code;      //user input
               cout << "\n\t\t\tQuantity : ";          //output
               cin >> quantity;    //user input
              
                   if (code == 1)  //code to be executed if the expression is true
                   {
                       total=quantity*15;  //assigning the total price
                       fulltotal+=total;     //assigning the new total price
                       resit[i]=  "\n\t\t\tThe Silent Patient\t\t\t";   //array initialization
                       cout <<resit[i];     //output
                       i++;   //increment of i
                       count=count+quantity;                   //increment of count   
                       cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
                   }
          
                   else if (code == 2)   //code to be executed if the expression is true
                   {
                       total=quantity*23;   //assigning the total price
                       fulltotal+=total;      //assigning the new total price
                       resit[i]=  "\n\t\t\tThe Good Daughter\t\t\t";  //array initialization
                       cout <<resit[i];  //output
                       i++;    //increment of i
                       count=count+quantity;                   //increment of count   
                       cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
                   }
                  
                   else if (code == 3)  //code to be executed if the expression is true
                   {
                       total=quantity*18;   //assigning the total price
                       fulltotal+=total;     //assigning the new total price
                       resit[i]=  "\n\t\t\tThe Silent Wife\t\t\t";    //array initialization
                       cout <<resit[i]; //output
                       i++;    //increment of i
                       count=count+quantity;                       //increment of count
                       cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
                   }
                   else if (code == 4)   //code to be executed if the expression is true
                   {
                       total=quantity*19;   //assigning the total price
                       fulltotal+=total;     //assigning the new total price
                       resit[i]=  "\n\t\t\tMurder for Christmas";    //array initialization
                       cout <<resit[i]; //output
                       i++;    //increment of i
                       count=count+quantity;   //increment of count                   
                       cout<< "\n\t\t\tTotal : RM" <<setprecision(2)<<fixed<<total;    //output
                   }
                   else if (code>4)   //code to be executed if the expression is true
               cout <<"\n\t\t\tInvalid book code. Unable to process order.\n";     //output
           break;   //break statement
          
           default:
               cout << "Invalid Code";
               cout<< "\n\n\t\t\tDo you want to continue (y/n) : ";    //output
               cin>>ansbook;       //user input
               if (ansbook=='n'||ansbook=='N')
               exit (0);
              
       }
          
           cout<< "\n\n\t\t\tDo you want to buy another book? (y/n) : ";    //output
           cin>>ansbook;       //user input
           system ("CLS"); // clear the screen
          
          
          
          
   }while ( ansbook== 'y' || ansbook== 'Y');  //while loop and expression inside while's parentheses
  
   for (i=0; i<10; i++)  //for loop and expression inside for's parentheses
   {
       cout <<resit[i];   //output
   }
   cout << "\n\n\t\t\tTotal price of the books :"<<setprecision(2)<<fixed<<fulltotal;   //output
  
   return fulltotal; //required because use return-value function
}  //end of function body




float membership(float &fulltotal)   //function definition
{  //start of function body


   char member;   //to declare character variables
   do // do loop to be executed
   {
   cout << "\t\t\tPlease enter your member type "<<endl <<endl;
   cout<<"\t\t\t\t [G] GOLD"<<endl<<endl;
   cout<<"\t\t\t\t [S] SILVER"<<endl<<endl;
   cout<<"\t\t\t\t [B] BRONZE"<<endl<<endl;
   cout<<"\t\t\t\t [N] NON-MEMBER"<<endl<<endl;
   cout<< "\t\t\t CODE: ";                         //output
   cin >> member;      //user input
   cout <<endl;
  
       if (member=='G'|| member=='g')  // code to be executed if member equal to G or g
       {
           if (fulltotal > 500)  // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.20;   //assigning the totalprice2
           }
          
           else if (fulltotal >= 200 && fulltotal <= 500) // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.30;  //assigning the totalprice2
           }
          
           else if (fulltotal >= 0 && fulltotal < 200) // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.50;  //assigning the totalprice2
           }
       break;    //break statement
       }
      
       else if (member=='S'|| member=='s')  // code to be executed if member equeal to S or s
       {
           if (fulltotal > 500)  // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.30;  //assigning the totalprice2
           }
          
           else if (fulltotal >= 200 && fulltotal <= 500)  // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.40;   //assigning the totalprice2
           }
          
           else if (fulltotal >= 0 && fulltotal < 200)   // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.70;   //assigning the totalprice2
           }
       break;    //break statement
       }
      
       else if (member=='B'|| member=='b')  // code to be executed if member equal to B or b
       {
           if (fulltotal > 500)  // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.40;    //assigning the totalprice2
           }
          
           else if (fulltotal >= 200 && fulltotal >= 500) // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.60;     //assigning the totalprice2
           }
          
           else if (fulltotal >= 0 && fulltotal < 200) // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.80;     //assigning the totalprice2
           }
       break;    //break statement
       }
      
       else if (member=='N'|| member=='n')  // code to be executed if the member equal to N or n
       {
           if (fulltotal > 500)   // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.85;     //assigning the totalprice2
           }
          
           else if (fulltotal >= 200 && fulltotal <= 500) // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.90;     //assigning the totalprice2
           }
          
           else if (fulltotal >= 0 && fulltotal < 200)   // code to be executed if the expression is true
           {
               totalprice2 = fulltotal * 0.95;     //assigning the totalprice2
           }
       break;   //break statement
       }
      
       else // code to be executed if member does not equal to any member mentioned
         
           {
               cout<<"\n\t\t\tInvalid member type."<<endl;  //output


           }
      
   } while (member!='G'|| member!='g'||member!='S'|| member!='s'||member!='B'|| member!='b'||member!='N'|| member!='n');  //while loop and expression inside while's parentheses
  
  
  


  
   cout << "\t\t\tTotal price after discount is: " << setprecision(2)<< fixed <<totalprice2;   //output
  
   return totalprice2; //required because use return-value function
}  //end of function body




float delivery (float &totalprice2)  //function definition
{  //start of function body
  
   int charge, choose;   //to declare integer variable
   char ansservice;      //to declare character variables
  
   do // do loop to be executed
   {


   cout << "\t\t\t\t\tWE OFFER TWO SERVICES \t\t"<<endl;
   cout << "\t\t\t\t==================================="<<endl;
   cout << "\t\t\t\t||                               ||"<<endl;
   cout << "\t\t\t\t||   [1]    SELF-PICKUP          ||"<<endl;
   cout << "\t\t\t\t||   [2]     DELIVERY            ||"<<endl;
   cout << "\t\t\t\t||                               ||"<<endl;
   cout << "\t\t\t\t==================================="<<endl;   //output
   cout<<endl<<endl;
  
   cout << "\t\t\t\tPLEASE ENTER YOUR CHOICE :";   //output
   cin  >>choose;       //user input
   system ("CLS");  // clear the screen
  
   if (choose == 1)  // code to be executed if choose is equal to 1
   {
       totalprice3 = totalprice2; //assigning totalprice3
       cout << "\t\t\t\t~ YOU CHOOSE SELF-PICKUP SERVICE ~ "<<endl;
       cout << "\t\t\tProceed to payment";        //output
       break;     //break statement
   }
  
   else if (choose == 2)  // code to be executed if choose is equal to 2
   {
       cout<<endl<<endl<<endl;
       cout << "\t\t\t\t   ~ YOU CHOOSE DELIVERY SERVICE ~"<<endl;    //output
       cout <<" "<<endl;
       do  // do loop to be executed
   {
      
           cout << " \n"<<endl;
       cout << "\t\tCODE\t\t\tDestination\t\tDelivery Charge"<<endl<<endl;
       cout << "\t\t[1]\t\t\tKlang Valley\t\tRM10.00"<<endl<<endl;
       cout << "\t\t[2]\t\t\tNegeri Sembilan\t\tRM20.00"<<endl<<endl;
       cout << "\t\t[3]\t\t\tMelaka\t\t\tRM35.00"<<endl<<endl;
       cout << "\t\t[4]\t\t\tJohor\t\t\tRM40.00"<<endl<<endl;
       cout << "\t\t[5]\t\t\tPerak\t\t\tRM50.00"<<endl<<endl;    //output
      
           cout << "\t\t\t\t*********************************"<<endl;
           cout << ""<<endl<<endl;
           cout << "\t\t\t    PLEASE ENTER THE CODE OF YOUR DESTINATION :";   //output
           cin  >> charge;        //user input
  
              
               if (charge ==1)    // code to be executed if charge is equal to 1
               {
                   arraydelivery[j]="Klang Valley"; //array initialization
                   totalprice3= totalprice2 + 10;   //assigning the totalprice3
                   break;   //break statement
               }
              
               else if (charge ==2)   // code to be executed if charge is equal to 2
               {
                   totalprice3 = totalprice2 + 20; //assigning the totalprice3
                   arraydelivery[1]="Negeri Sembilan";   //array initialization
                   break;   //break statement
               }
              
               else if (charge ==3)   // code to be executed if charge is equal to 3
               {
                   totalprice3 = totalprice2 + 35;  //assigning the totalprice3
                   arraydelivery[j]="Melaka";   //array initialization
                   break;   //break statement
               }
              
               else if (charge ==4)    // code to be executed if charge is equal to 4
               {
                   totalprice3 = totalprice2 + 40;  //assigning the totalprice3
                   arraydelivery[j]="Johor";     //array initialization
                   break;   //break statement
               }
              
               else if (charge ==5)    // code to be executed if charge is equal to 2
               {
                   totalprice3 = totalprice2 + 50;   //assigning the totalprice3
                   arraydelivery[j]="Perak";     //array initialization
                   break;   //break statement
               }
              
               else   // code to be executed if charge is non of the charged mention
               {
                   cout<<"\t\t\tInvalid destination code. Please re-enter.";    //output
               }
       }while (charge != 1 || charge != 2 || charge !=3 || charge != 4|| charge != 5); //while loop and expression inside while's parentheses
       break;   //break statement
   }
  
   else  // code to be executed if choose other than 1 and 2
   {
       cout<<endl;
       cout<<"\n\t\t\t\tInvalid code.\n";       //output
   }
       
                   cout<<"\n\t\t\tEnter 'Y' to reselect our services. ";   //output
                   cin>>ansservice;            //user input
          
      
   } while (ansservice == 'Y' || ansservice == 'y');   //while loop and expression inside while's parentheses
      
      
      
       return totalprice3; //required because use return-value functiom
}  //end of function body




float payment(float &totalprice3)   //function definition
{  //start of function body


   int method,ask,ask2,pin,password,TAC;    //to declare integer variable
   string username;                        //to declare string variables
   float paymentmade ,change;              //to declare float variables


   cout<<"\n\n";
   cout<<"\t\t\tProceeding to checkout....."<<endl;
   cout<<"\t\t\tPress any key to continue.  .  .  ."<<endl;    //output
           getch();  // get any character from user
   system("CLS"); // clear the screen
  
  
   cout<<" \n";
   cout<<"\t\t\t=====================================================\n";
   cout<<"\t\t\t|                        PAYMENT                    |\n";
   cout<<"\t\t\t=====================================================\n";    //output
   cout<<" \n\n";
  
      
   cout<<"\t\t\tPlease choose payment method.\n\n";
   cout<<"\t\t\t1 - CASH \n\t\t\t2 - DEBIT OR CREDIT CARD \n\t\t\t3 - ONLINE BANKING\n\n";
   cout<<"\t\t\tEnter the code : ";       //output
   cin>>method;      //user input
      
        while (method != 1 && method != 2 && method != 3)   //while loop and expression inside while's parentheses
        {
             if (method != 1 && method != 2 && method != 3)  // code to be executed if expression in the parantheses is true
             {
               cout<< "\t\t\tInvalid input.\n\t\t\tPlease re-enter your payment method : ";    //output
               cin>> method;   //user input
               cout<<"\n";
             }
        }
        system("CLS"); // clear the screen
       
           if (method == 1)  // code to be executed if method is equal to 1
           {
               cout<<"\n";
               cout<<"\t\t\tTotal payment \t\t\t RM"<<setprecision(2)<<fixed<<totalprice3<<"\n";
               cout<<"\t\t\tPayment made\t\t\t RM";   //output
               cin>>paymentmade;    //user input
               cout<<"\n";
              
               while (paymentmade<totalprice3)   //while loop and expression inside while's parentheses
               {
                   cout<<"\n\t\t\tInsufficient amount. Please enter the correct amount.\n\n";
                   cout<<"\t\t\tAmount paid\t\t\t RM ";  //output
                   cin>>paymentmade;  //user input
               }
              
               change = paymentmade - totalprice3;  //assigning the change value
              
               cout<<"\t\t\tChange\t\t\t\t RM"<<setprecision(2)<<fixed<<change<<endl<<endl; //output
              
           }
          
           else if (method == 2)  // code to be executed if method is equal to 2
           {
               cout<<"\t\t\tPress 1 for Visa payWave\n\t\t\tPress 2 for PIN\n";   //output
               cin>>ask;    //user input
              
               if (ask == 1)  // code to be executed if ask is equal to 1
               {
                   cout<<"\n";
                   cout<<"\t\t\tPlease place your card at the card reader\n\n\n";
                   cout<<"\t\t\tPayment successful\n\n";    //output
               }
              
               else if (ask == 2)  // code to be executed if ask is equal to 1
               {
                   cout<<"\n\t\t\tPlease enter your pin: ";   //output
                   cin>>pin;   //user input
                   cout<<"\n\n\n";
                   cout<<"\t\t\tPayment successful\n\n";     //output
               }
              
               else  // code to be executed if ask is not equal to 1 and 2
               {
                   cout<<"\t\t\tInvalid input.";      //output
               }
           }
          
           else if (method == 3)  // code to be executed if method is equal to 3
           {
               cout<<"\t\t\t<1> Maybank2U\n\t\t\t<2> CIMB Click\n\t\t\t<3> RHB Now\n\t\t\t<4> OCBC Online\n";
               cout<<"\t\t\tPlease enter code of the bank: ";   //output
               cin>>ask2;    //user input
               cout<<"\n\n";
               cout<<"\t\t\tRedirecting you to FPX. . . \nEnter any key.";   //output
               system("CLS"); // clear the screen
              
               cout<<"\n\t\t\tUsername [alphabet only] : ";  //output
               cin>>username;    //user input
               cout<<"\n\t\t\tPassword [number only] : ";    //output
               cin>>password;     //user input
               cout<<"\n\t\t\tTAC [number only]   : ";   //output
               cin>>TAC;        //user input
               cout<<"\n\n\n";
               cout<<"\t\t\tPayment successful\n\n";   //output
           }
      
       cout<<"\t\t\t#####################################################"<<endl<<endl;
       cout<<"\t\t\tGenerating receipt. . .\n";    //output
            string name;     //to declare string variables
            string member;    //to declare string variables
           
    cout << "\n\t\t\tPlease enter your name: ";         //output (no space)
    cin>>name;  //user input
    cout<<endl;    
   cout << "\n\t\t\tPlease enter your member type : ";  //output
    cin>> member;    //user input
    system("CLS"); // clear the screen
   
           cout<<"\n\n\t\t\t=========================================================================";
           cout<< "\n\t\t\t|                              The Bookstore                             |";
           cout<< "\n\t\t\t|                        CUSTOMER-ISSUED RECEIPT                         |";
           cout<<  "\n\t\t\t=========================================================================";
           cout<< "\n\t\t\t                                                                          ";
           cout<< "\n\t\t\t  CUSTOMER NAME: "<<name;
           cout<< "\n\t\t\t  MEMBER TYPE  : "<<member<<endl;
           cout<< "\n\t\t\t ------------------------------------------------------------------------ ";  //output
          
           for (i=0; i<10; i++)   //for loop and expression inside for's parentheses
               {
                   cout <<resit[i];  //output
               }
           cout << "\n\t\t\tTotal Book : "<<count<<endl;
           cout << "\n\n\t\t\t SUBTOTAL         : RM "<<setprecision(2)<<fixed<<fulltotal;
           cout << "\n\t\t\t DISCOUNT         : RM "<< (totalprice3 - fulltotal);
           cout<< "\n\t\t\t TOTAL            : RM "<<setw(5)<<totalprice3;   //output
           cout<<"\n\t\t\t DESTINATION\t  : "<<arraydelivery[0]; //output
          
          
           if (method == 1)  // code to be executed if method is equal to 1
           {
               cout<< "\n\t\t\t AMOUNT PAID      : RM "<<setw(6)<<paymentmade;
               cout<< "\n\t\t\t BALANCED RECEIVED: RM "<<setw(6)<<change;  //output
              
           }
          
           else if (method==2 || method==3)   // code to be executed if method is equal to 2 or 3
           {
               cout<<"\n\t\t\t AMOUNT PAID      : RM "<<setw(6)<<totalprice3;
               cout<<"\n\t\t\t BALANCED RECEIVED: RM "<<setw(5)<< "0.00";   //output
           }
          
           cout<< "\n\n\n\t\t\t THIS IS A COMPUTER GENERATED RECEIPT WHICH DOES NOT REQUIRE ANY SIGNATURE";
           cout<< "\n\t\t\t=========================================================================";
           cout<< "\n\t\t\t|               THANK YOU FOR CHOOSING The Bookstore!                   |";
           cout<< "\n\t\t\t|                          ENJOY YOUR BOOK                              |";
           cout<<  "\n\t\t\t========================================================================="<<endl<<endl;
       cout<<"\t\t\tPress any key to continue.  .  .  ."<<endl;   //output
       getch(); //get any character from user
       system("CLS"); // clear the screen
      
       return change; //required because use return-value function
}  //end of function body


