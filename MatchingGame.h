#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

//first I need a structure to hold the game in
class MatchingGame 
{
    Score points;
    MatchingGame();
    ~MatchingGame();
    flashCards* start;
    flashCards** positionMap;
    void Play(int times);
    flashCards deck;
}

MatchingGame::MatchingGame(void)
{
    points.correctAnswers=0;
    points.incorrectAnswers=0;
    points.netScore=0;
    string line;
    int i;
    i=0;
    int times;
    positionMap[30]; //I know this isn't quite right but I'm putting this here as a placeholder

    ifstream myFileStream("commands.csv");
    if (!myFileStream.is_open())
    {
        cout<<"File failed to open"<<endl;
        return 0;
    }
    while (getline(myFileStream, line))
    {
        stringstream ss(line);
        flashCards* position = start;
        position = new flashCards;
        while (i<30)
        {
        positionMap[i]=position;
        getline(ss, position->command, ',');
        getline(ss, position->definition, ',');
        position->next=new flashCards;
        position=position->next;
        i++;
        }
    }
    myFileStream.close();
    cout<<"how many cards would you like to play?"<<endl;
    while (times!>=5 || times!<=30)
    {
        cin>>times;
        if (times<5 || times>30)
        {
            cout<<"please enter a number between 5 and 30";
            return;
        }
    )
    Play(times);
    return;
}
//the structure should display the rules

//the structure should have somewhere to hold your score
class Score
{
    private:
    int correctAnswers;
    int incorrectAnswers;
    int netScore;
    void increaseCorrect();
    void increaseIncorrect();
    Score ();
    ~Score();

    public:
    void getScore();
    void incrementScore();
    void decrementScore();

}
//there should be a way to increase your score

//there should be a way to decrease your score

//
Score::Score(void)
{
    correctAnswers=0;
    incorrectAnswers=0;
    netScore=0;
}

MatchingGame::incrementScore()
{
    void increaseCorrect();
    return;
}

MatchingGame::increaseCorrect()
{
    this->Score.correctAnswers ++;
    this->Score.netScore ++;
    return;
}

MatchingGame::decrementScore()
{
    void increaseIncorrect();
    return;
}

MatchingGame::increaseIncorrect()
{
    this->Score.incorrectAnswers ++;
    this->Score.netScore --;
    return;
}

class flashCards
{
    string command;
    string definition;
    flashCards* next;
}

MatchingGame::Play(int times)
{
    int t=0;
    int n, o;
    flashCards cards[3]= {a*,b*,c*}
    flashCards*card;
    while(t<times)
    {
        n= rand()%30;
        card=positionMap[n];
        o= rand()%3;
        cards[o]=card;
        n= rand()%30;
        card=positionMap[n];
        o= (o+1)%3;
        cards[o]=card;
        n= rand()%30;
        card=positionMap[n];
        o= (o+1)%3;
        cards[o]=card;
        cout<<cards[o]->command<<endl;
        n=rand()%3;
        cout<<cards[n]->definition<<endl;
        n=(n+1)%3;
        cout<<cards[n]->definition<<endl;
        n=(n+1)%3;
        cout<<cards[n]->definition<<endl;
        cout<<"choose your definition"<<endl;
        cin>>n;
        if (n==o)
        {
            cout<<"Correct! Congratulations!"<<endl;
            points->incrementScore();
        }
        if (n!=o)
        {
            cout<<"Nope, sorry. Incorrect.";
            points->decrementScore();
        }
    }
    cout<<"You had"<<points->correctAnswers<<"correct answers"<<endl;
    cout<<"You had"<<points->incorrectAnswers<<"incorrect answers"<<endl;
    cout<<"You had a final score of"<<points->netScore<<"points"<<endl;
    return;
}

bool recordCommand(std::string commands.csv,std::string command, std::string definition)
{
    std::ofstream file;
    file.open(commands.csv, std::ios_base::app);
    file<<command<<definition<<std::endl;
    return true;
}