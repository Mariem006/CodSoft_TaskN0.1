#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <sstream>

using namespace std;

void ValidateAndCheckRange(int &user_num)
{
    while (true) {
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error! Make sure your input is valid." << endl << "Enter a number again." << endl;
            cin >> user_num;
        } else if (user_num < 1 || user_num > 100) {
            cout << "Remember it is between 1 and 100..." << endl << "Enter the number again." << endl;
            cin >> user_num;
        } else {
            break;
        }
    }
}
int main()
{
    int stored_num, user_num;
    srand(time(0));
    stored_num= rand()%100+1;

   cout<<"Hello! Let's play..."<<endl;
   cout<<"Guess the number between 1 and 100."<<endl;
   cin>>user_num;
   ValidateAndCheckRange(user_num);


   while(user_num!=stored_num){
        if(user_num<stored_num){
            cout<<"Your number is too low."<<endl<<"Try again!"<<endl;
            cin>>user_num;
           ValidateAndCheckRange(user_num);
        }

        if(user_num>stored_num){
            cout<<"Your number is too high."<<endl<<"Try again!"<<endl;
            cin>>user_num;
            ValidateAndCheckRange(user_num);
        }
   }
   if(user_num==stored_num)
        cout<<"Congratulations! Your guess is correct."<<endl;

   return 0;
}
