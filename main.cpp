#include<iostream>
#include<cctype>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<fstream>
using namespace std;

class student
{ private:
	string studentName;
	string fatherName;
	string Class;
	string studentAge;
	string studentEmail;
	string contactNo;
	public:


		void registration()
		{
            int a=0;
           cout<<"Enter Your  Name: "<<endl;
           getline(cin  >> ws,studentName);
           studentName.erase(remove(studentName.begin(), studentName.end(), ' '), studentName.end());
		    while ( a==0) {
              
                for (int i = 0; i <studentName.length(); i++) {
               
                    if(isalpha(studentName[i])) {
                        a=1;
                    }
                        else { cout << "Enter a valid name: " <<endl; getline(cin  >> ws,studentName);
                               studentName.erase(remove(studentName.begin(), studentName.end(), ' '), studentName.end());
                        }
                }
            }


            int b=0;
            cout<<"Enter Your Father's name: "<<endl;
            getline(cin  >> ws,fatherName);
            fatherName.erase(remove(fatherName.begin(), fatherName.end(), ' '), fatherName.end());
            while ( b==0) {
               
                for (int i = 0; i <fatherName.length(); i++) {
                   
                    if(isalpha(fatherName[i]))

                    {
                        b=1;
                    }
                        else { cout << "Enter a valid name: " <<endl; getline(cin  >> ws,fatherName);
                                fatherName.erase(remove(fatherName.begin(), fatherName.end(), ' '), fatherName.end());
                        }
                }
            }
            int c=0;
            cout<<"Enter your age: "<<endl;
            cin  >> studentAge;
            while ( c==0) {
               
                for (int i = 0; i <studentAge.length(); i++) {
                    if(isdigit(studentAge[i])) {
                        c=1;
                    }
                        else { cout << "Enter a valid input: " <<endl;   cin  >> studentAge;
                        }
                }
            }
            int d=0;
            cout<<"Enter your class: "<<endl;
            cin>>Class;
            while ( d==0) {
                
                for (int i = 0; i <Class.length(); i++) {
                    if(isdigit(Class[i])) {
                        d=1;
                    }
                        else { cout << "Enter a valid input: " <<endl; cin >> Class;
                        }
                }
            }

               cout<<"Enter your gmail ID:"<<endl;
               cin >>  studentEmail;
               
			   cout<<"Enter your contactNo: "<<endl;
               cin>>contactNo;
               int e=0;
               while(e==0)
               {
                   if(contactNo.length()==11)
                       break;
                       else
                       {cout<<"Enter a valid input: "<<endl;  cin>>contactNo;
					   }
			   }
			   
           }


    	void print(){
		cout<<"Student's name:  "<<studentName<<endl;
    	cout<<"Father's name:   "<<fatherName<<endl;
      	cout<<"Class:           "<<Class<<endl;
    	}
};


class admin
{
    private:
        string adminID, adminPwd, adminName;
    public:
        void login()
        {cout<<"Enter you ID: "; cin>>adminID;
        cout<<"Enter you password: " ;cin>>adminPwd;
        if (adminPwd=="123" ) {
		  cout<<"Your password is correct."<<endl;
		  system("pause");
		  system ("CLS");
		}
		else {
		  cout<<"Incorrect password, access denied!";
		  system("pause");
		  system ("CLS");
		}
        }
        void viewRules()
        {
            cout<< "1- Smoking, Alcohol & Narcotic consumption is strictly prohibited in and around the Hostel premises."<<endl;
            cout<< "2- Strict adherence to the prescribed dress code is required. Decency in dressing & demeanor is a must."<<endl;
            cout<< "3- Loitering in the Hostel campus during the class hours will not be appreciated."<<endl;
            cout<< "4- The Management & Staff will not be responsible for personal belongings."<<endl;
            cout<< "5- Late comers will be penalized."<<endl;
            cout<< "6- Students must keep the Campus & Rooms clean. Defacing walls, equipment, furniture etc., is strictly prohibited."<<endl;
            cout<< "7- Birthday/Other Celebrations are strictly prohibited in Hostel."<<endl;

           cout<< "8- Students must turn off all the electrical equipments & lights before leaving their rooms."<<endl;
            cout<< "9- Students are not allowed to organize any group activities in their room."<<endl;
            cout<< "10- Tipping of Wardens, Security Guards, Cleaning staff etc., is not permitted."<<endl;
        }
};

class room {
private:
    int roomType;
public:
	double roomPay;
public:

  	void chooseRoom() {
      cout << "\nPlease press a number to choose your room: ";
      cout << "\n1.Single\n2.Shared\n";
      cin >> roomType;

        switch(roomType){
          case 1:
            roomPay=1000;
            break;
          case 2:
            roomPay=400;
            break;
          default:
            cout << "You did not enter a valid choice";
        }
    }
};

class services {
    private:
    bool breakfast, dinner, tv, laundary, gym, microwave, fridge;
    public: 
  		double servPay;
  		int ans;
  		char quit='n';
    public:
                 void calculateServicePay() {
         	for (char quit ='n'; quit='y';) {
                cout << "\n\nPlease press a number to choose services from below: "<< endl;
                cout << "1.Breakfast\n2.Dinner\n3.TV\n4.Laundary\n5.Gym\n6.Microwave\n7.Fridge\n";
                cin >> ans;
                if (ans>7) {
                    cout << "Enter a valid between 1-7"<< endl;
                    servPay-=50;
                }
                servPay+=50;

                cout << "Do you want to choose more services (y/n)? " ; cin >> quit;
                if (quit=='n')
                	{break;}
            }
            cout << "\nYour total service pay is: " << servPay << " rupees"<< endl;
        }
};
class payment{
	private:
	student s;
	services s1;
	room r1;
	double x, y,amount;
	public:
		void generateVoucher(){
		        s.registration();
		        s1.calculateServicePay();
		        r1.chooseRoom();
		        x=s1.servPay;
		        y=r1.roomPay;
		        amount = x+y;
				amount+=5000;

			cout<<"\n\n\n\t\t\t\tFee Voucher"<<endl;
			cout<<"Pakistan Islamic bank Ltd" <<endl;
            cout<<"Ac # (099)04226001"<<endl;
            cout<<"Students Hostel"<<endl;
            cout<<"Issue date\t\t"<<"Due date"<<endl;
            cout<<"6/7/2022. \t\t"<<"10/7/2022."<<endl<<endl;
            s.print();

        //generate column
        cout<<"Fee description:\t"<<"Amount:"<<endl;
        cout<<"Registration Fee\t"<<"5000"<<endl;
        cout<<"Monthly Fee\t\t"<<x+y<<endl;
  	    cout<<"Amount to be paid\t"<<amount<<endl;
        
          cout<<"-Fee is payable advance in every month"<<endl;
          cout<<"-Fee once paid is non-transferable and non-refundable"<<endl;
          cout<<"-Fee will not be accepted in installments"<<endl;
          cout<<"-Fee will not be accepted without fee voucher"<<endl;
          cout<<"-For further details contact: 03453107993"<<endl;
          cout<<"-Fee voucher can be deposited into Pakistan Islamic Bank Ltd."<<endl;
        }
};


int main()
{
	system("Color E2");
	services s1;
	student s;
	payment p;
	admin a1;
    int key;
    char ch;
    cout << "\n\t\t\t\t\t\tHOSTEL MANAGEMENT SYSTEM\n "<< endl;
    do
    {
        cout << "\nAre you admin or a student?\n 1.Admin\n 2.Student\n "<< endl;
        cout << " Enter your choice : "   ;
        cin >> key;
        switch (key)
        {
        case 1:
        {
        	cout << "\n\tWelcome Admin!\n "<< endl;
            a1.login();
            break;
        }
        case 2:
        {
        	int key;
    		char ch;
   			do
		    {
		        cout << "\nWhat do you want to do?\n 1.View Rules & Regulations\n 2.Register "<< endl;
		        cout << "\nEnter your choice : "   ;
		        cin >> key;
		        switch (key)
		        {
		        case 1:
		        {
                    a1.viewRules();
		            break;
		        }
		        case 2:
		        {
		            p.generateVoucher();
		            break;
		        }
		        default:
		            cout << "\nInvalid choice ";
		        }
		        cout << "\nDo you want to continue as student? (y / n) ";
		        cin >> ch;
			    } while (ch =='y');
                system ("CLS");
	            break;
        }

        default:
            cout << "\nInvalid choice ";
        }
        cout << "\nDo you want to continue?(y / n) ";
        cin >> ch;
    } while (ch =='y');
    system ("CLS");

	exit(0);}
