#include <iostream>

using namespace std;

string possiblities[]= {"Rock", "Paper", "Scissors"}; // array for the possible outcomes

//Delcaring a structure:
struct rps {
        string answer1; //The answer for the "switch" question
        string answer2; //The answer for question 1
        int outcome1; // storing variable for the outcome of rand()
        int outcome2;// storing variable for the outcome of rand()
        int rock= 0; // Giving "rock" a position in the array
        int paper= 1; // Giving "paper" a position in the array
        int scissors= 2; // Giving "scissors" a position in the array
        int iSecret; //the outcome of rand()
        bool Switch; // the main "switch"
        //initialize function:
        void init(){
                cout<< "Welcome to my rock paper scissors app!\n";
                cout<< "Are you ready for some intense RPS content?(Y/N)";
                getline(cin,answer1); // storing the user string input into answer1;
                //fault tolerence mechanism:
                while(answer1 != "Y" && answer1 != "N")
                {
                        cout<< "Are you ready for some intense RPS content?(Y/N)";
                        getline(cin,answer1);
                }
                if(answer1=="Y") {
                        cout << "Great! Let's start!\n";
                        Switch=true;
                }
                else{
                        cout << "Bye!\n";
                        Switch=false;
                }

        }
        // body function:
        void result(){
                // "switch" mechanism:
                if (Switch==false) {
                        return;
                }

                srand (time(NULL)); // initialize random seed
                iSecret = rand() % 3; // generate secret number between 1 and 3 */
                outcome1= iSecret; //storing the outcome of rand() into the variable
                iSecret = rand() % 3; // generate secret number between 1 and 3 */
                outcome2= iSecret; //storing the outcome of rand() into the variable

                //Dev "inspection window":
                //uncomment the follwing two lines if you want to see the raw outcomes
                /*
                cout << outcome1 << "\n";
                cout << outcome2 << "\n";
                */

                // first possiblity:
                if(outcome1== 0 && outcome2== 0) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Ties!";
                }
                // second possiblity:
                if(outcome1== 1 && outcome2== 1) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Ties!";
                }
                // third possiblity:
                if(outcome1== 2 && outcome2== 2) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Ties!";
                }
                // fourth possiblity:
                if(outcome1== 0 && outcome2== 1) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Paper wins!";

                }
                // fourth possiblity (the other way):
                if(outcome1== 1 && outcome2== 0) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Paper wins!";
                }
                // fifth possiblity:
                if(outcome1== 1 && outcome2== 2) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Scissors win!";
                }
                // fifth possiblity (the other way):
                if(outcome1== 2 && outcome2== 1) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Scissors win!";
                }
                // sixth possiblity:
                if(outcome1== 2 && outcome2== 0) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Rock wins!";
                }
                // sixth possiblity (the other way):
                if(outcome1== 0 && outcome2== 2) {
                        cout << possiblities[outcome1];
                        cout << " and ";
                        cout << possiblities[outcome2] << "\n";
                        cout << "Rock wins!";
                }
        }

};

struct rps RPS;

int main()
{
        RPS.init(); // call the init() function in the main() function
        RPS.result(); // call the result() function in the main() function
        return 0;
}
