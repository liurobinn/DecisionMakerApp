#include <iostream>

using namespace std;

struct Decision { //overall structure for the app, so the function can be called in the int main()

        string answer1; //The answer for the "switch" question
        string answer2; //The answer for question 1
        string answer3; //The answer for question 2
        string answer4; //The answer for question 3
        string answer5; //The answer for question 4
        bool Switch; // the main "switch"
        bool software; // output 1
        bool hardware; // output 2
        bool stability; // output 3
        bool trajectory; // output 4
        bool output; // final output

        void init(){ //initialize the app
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

        void responseCollection(){ //collect the response from the users
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
        void result(){ //output result
                if (Switch==false) {
                        return;
                }
                cout << "======================================================================= \n";
                cout << "Here is the result: \n";
                if (answer2 == "1"||answer2 == "2") {//evaluate results
                        cout << "Not confident with the software\n";
                        software=false;
                }
                else if(answer2 == "3"||answer2 == "4") {//evaluate results
                        cout << "Kinda confident with the software\n";
                        software=false;
                }
                else if (answer2 == "5"||answer2 == "6"||answer2 == "7"||answer2 == "8") {//evaluate results
                        cout << "Confident with the software\n";
                        software=true;
                }
                else{//evaluate results
                        cout << "Very confident with the software\n";
                        software=true;
                }

                if (answer3 == "1") {//evaluate results
                        cout << "Hardware is ready to go\n";
                        hardware=true;
                }
                else{//evaluate results
                        cout << "Hardware is not ready\n";
                        hardware=false;
                }

                if (answer4 == "1") {//evaluate results
                        cout << "Rocket is stable during flight\n";
                        stability=true;
                }
                else{//evaluate results
                        cout << "Rocket is not stable during flight\n";
                        stability=false;
                }

                if (answer5 == "1") {//evaluate results
                        cout << "Rocket has a good trajectory\n";
                        trajectory=true;
                }
                else{//evaluate results
                        cout << "Rocket does not have a good trajectory\n";
                        trajectory=false;
                }

                output=software && hardware && stability && trajectory; //equation for calculating results

                if (output == true) {//output results
                        cout << "==================================\n";
                        cout << "==== Rocket is go for launch! ====\n";
                        cout << "==================================\n";
                }
                else{//output results
                        cout << "=============================================================================\n";
                        cout << "==== Rocket is not go for launch... fix the problem and try another day! ====\n";
                        cout << "=============================================================================\n";
                }
        }
};

struct Decision decisionMaker;//give the structure a name

int main()
{
        decisionMaker.init(); //call the function in the main program function
        decisionMaker.responseCollection();//call the function in the main program function
        decisionMaker.result();//call the function in the main program function
        return 0;
}
