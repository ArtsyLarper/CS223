#include <iostream>
using namespace std;
#include "MatchingGame.h";
#include <fstream>
#include <string>

void Main()
{

    int option;
    cout<<"What's your name?"<<endl;
    auto name;
    cin>>name;
    cout<<"Hello"<<name<<endl;
    string newCommand;
    string newDefinition;
    while (true)
    {
        cout<<"\n\n\n\n Please select one of the following options \n\n\n\n"<<" 1. Game Rules \n 2. Play Game \n 3. Load Previous Game \n 4. Add Command \n 5. Remove Command \n 6. Exit \n";
        cin>>option;
        if (option==1)
        {

            cout<<"When you start the game select a number of commands to try between 5 & 30"<<endl;
            cout<<"you will then be given a random command and 3 definitions"<<endl;
            cout<<"select the correct definition to gain points"<<endl;
            cout<<"lose points by selecting the wrong definition"<<endl;
            return;

        }
        else if (option==2)
        {
            *play = new MatchingGame;
        }
        else if (option==3)
        {

        }
        else if (option==4)
        {
            cout<<"what is the command you'd like to add?"<<endl;
            cin>>newCommand;
            cout>>"what is the definition?"<<endl;
            cin>>newDefinition;
            bool writeNewCommand = recordCommand("commands.csv", newCommand, newDefinition);
            
        }
        else if (option==5)
        {

        }
        else if (option==6)
        {
            return 0;
        }
        else
        {
            cout<<"this is not a valid option"<<endl;
        }
    }
}