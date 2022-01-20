#include <iostream>

using namespace std;

struct Decision {

        string answer1;
        string answer2;
        string answer3;
        string answer4;
        string answer5;
        bool Switch;
        bool software;
        bool hardware;
        bool stability;
        bool trajectory;
        bool output;

        void init(){
                cout << "Welcome to my decision maker app!\n";
                cout << "Wanna know if you are able to launch a rocket today?"; cout << "1: YES; 2: NO";
                getline(cin,answer1);
                while(answer1 != "1" && answer1 != "2")
                {
                        cout << "Wanna know if you are able to launch a rocket today?\n"; cout << "1: YES; 2: NO";
                        getline(cin,answer1);
                }
                if(answer1=="1") {
                        cout << "Great! Let's start!";
                        Switch=true;
                }
                else{
                        cout << "Bye!";
                        Switch=false;
                }

        }

        void responseCollection(){
                if (Switch==false) {
                        return;
                }

//======================================
//====          question 1          ====
//======================================
                cout << "Have you finished your flight software? Rate from 1 to 10 of your confidence in it\n";
                getline(cin,answer2);
                while(answer2 != "1" && answer2 !="2" && answer2 !="3" && answer2 !="4" && answer2 !="5" && answer2 !="6" && answer2 !="7" && answer2 !="8" && answer2 !="9" && answer2 !="10") {
                        cout << "Have you finished your flight software? Rate from 1 to 10 of your confidence in it\n";
                        getline(cin,answer2);
                }
//======================================
//====          question 2          ====
//======================================
                cout << "Is the hardware on the rocket done?\n"; cout << "1: YES; 2: NO";
                cin>> answer3;
                while(answer3 != "1" && answer3 != "2") {
                        cout << "Is the hardware on the rocket done?\n"; cout << "1: YES; 2: NO";
                        cin>>answer3;
                }
//======================================
//====          question 3          ====
//======================================
                cout << "Is the Center of Gravity (CG) 1.5 diameter ahead of Center of Pressure (CP)?\n"; cout << "1: YES; 2: NO";
                cin>> answer4;
                while(answer4 != "1" && answer4 != "2") {
                        cout << "Is the Center of Mass (CP) 1.5 diameter ahead of Center of Pressure?\n"; cout << "1: YES; 2: NO";
                        cin>>answer4;
                }

//======================================
//====          question 4          ====
//======================================
                cout << "Have you tried the trajectories simulation?\n"; cout << "1: YES; 2: NO";
                cin>> answer5;
                while(answer5 != "1" && answer5 != "2") {
                        cout << "Have you tried the trajectories simulation?n"; cout << "1: YES; 2: NO";
                        cin>>answer5;
                }
        }
        void result(){
                if (Switch==false) {
                        return;
                }
                cout << "======================================================================= \n";
                cout << "Here is the result: \n";
                if (answer2 == "1"||answer2 == "2") {
                        cout << "Not confident with the software\n";
                        software=false;
                }
                else if(answer2 == "3"||answer2 == "4") {
                        cout << "Kinda confident with the software\n";
                        software=false;
                }
                else if (answer2 == "5"||answer2 == "6"||answer2 == "7"||answer2 == "8") {
                        cout << "Confident with the software\n";
                        software=true;
                }
                else{
                        cout << "Very confident with the software\n";
                        software=true;
                }

                if (answer3 == "1") {
                        cout << "Hardware is ready to go\n";
                        hardware=true;
                }
                else{
                        cout << "Hardware is not ready\n";
                        hardware=false;
                }

                if (answer4 == "1") {
                        cout << "Rocket is stable during flight\n";
                        stability=true;
                }
                else{
                        cout << "Rocket is not stable during flight\n";
                        stability=false;
                }

                if (answer5 == "1") {
                        cout << "Rocket has a good trajectory\n";
                        trajectory=true;
                }
                else{
                        cout << "Rocket does not have a good trajectory\n";
                        trajectory=false;
                }

                output=software && hardware && stability && trajectory;

                if (output == true) {
                        cout << "==================================\n";
                        cout << "==== Rocket is go for launch! ====\n";
                        cout << "==================================\n";
                }
                else{
                        cout << "=============================================================================\n";
                        cout << "==== Rocket is not go for launch... fix the problem and try another day! ====\n";
                        cout << "=============================================================================\n";
                }
        }
};

struct Decision decisionMaker;

int main()
{
        decisionMaker.init();
        decisionMaker.responseCollection();
        decisionMaker.result();
        return 0;
}
