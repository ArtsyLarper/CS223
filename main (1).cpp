#include <map>
#include "TwitterData.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    // Schema: UserName,Last,First,Email,NumTweets,MostViewedCategory
    string raw_data[5][6] = { {"rangerPower","Smit","Rick","smitRick@gmail.com","1117","power lifting"},
                             {"kittyKat72","Smith","Kathryn","kat@gmail.com","56","health"},
                             {"lexi5","Anderson","Alexis","lexi5@gmail.com","900","education"},
                             {"savage1","Savage","Ken","ksavage@gmail.com","17","president"},
                             {"smithMan","Smith","Rick","rick@hotmail.com","77","olympics"} };
    TwitterData* twitter_data = new TwitterData[5];
    for (int i = 0; i < 5; ++i) {
        twitter_data[i].setUserName(raw_data[i][0]);
        twitter_data[i].setActualName(raw_data[i][2] + " " + raw_data[i][1]);
        twitter_data[i].setEmail(raw_data[i][3]);
        twitter_data[i].setNumTweets(stoi(raw_data[i][4]));
        twitter_data[i].setCategory(raw_data[i][5]);
    }

    //insert into map using username as key
    map<string, class TwitterData> m;
    m["rangerPower"] = twitter_data[0];
    m["kittyKat72"] = twitter_data[1];
    m["lexi5"] = twitter_data[2];
    m["savage1"] = twitter_data[3];
    m["smithMan"] = twitter_data[4];

    cout << "##################PART1 username is key####################" << endl;
    //itterate through each element printing each key and the values attached to it
    cout << "________PRINT ALL KEY-VALUE PAIRS________" << endl;
    for (auto const& d : m)
    {
        cout << "username_KEY: " << d.second.getUserName();
        cout << "      data_VALUE: " << d.second.getActualName() << ", " << d.second.getEmail() << ", " << d.second.getNumTweets() << ", " << d.second.getCategory() << endl;
    }

    //itterate till key found, then print
    cout << endl << "_______FIND AND PRINT SAVAGE1______" << endl;
    auto it = m.find("savage1");
    if (it != m.end())
        cout << "found! KEY: " << it->first << "   VALUE: " << it->second.getActualName() << ", " << it->second.getEmail() << ", " << it->second.getNumTweets() << ", " << it->second.getCategory() << endl;

    cout << endl << "______delete savage1______" << endl;
    it = m.find("savage1");
    m.erase(it);
    cout << "        deleted" << "\n\n";


    cout << "________PRINT ALL KEY-VALUE PAIRS________" << endl;
    for (auto const& d : m)
    {
        cout << "username_KEY: " << d.second.getUserName();
        cout << "      data_VALUE: " << d.second.getActualName() << ", " << d.second.getEmail() << ", " << d.second.getNumTweets() << ", " << d.second.getCategory() << endl;
    }

    cout << "\n\n" << "####################PART2 email is key######################" << "\n\n";
    //part2 map2
    //insert into map using email as key 
    map<string, class TwitterData> m2;
    m2["smitRick@gmail.com"] = twitter_data[0];
    m2["kat@gmail.com"] = twitter_data[1];
    m2["lexi5@gmail.com"] = twitter_data[2];
    m2["ksavage@gmail.com"] = twitter_data[3];
    m2["rick@hotmail.com"] = twitter_data[4];

    //print out all key value pairs
    cout << "________PRINT ALL KEY-VALUE PAIRS P2________" << endl;
    for (auto const& d : m2)
    {
        cout << "username_KEY: " << d.second.getEmail();
        cout << "      data_VALUE: "<< d.second.getUserName() << ", " << d.second.getActualName() << ", " << d.second.getNumTweets() << ", " << d.second.getCategory() << endl;
    }


    cout << endl << "_______FIND AND PRINT kat@gmail.com______" << endl;
    auto it2 = m2.find("kat@gmail.com");
    if (it2 != m2.end())
        cout << "found! KEY: " << it2->first << "   VALUE: " << it2->second.getUserName() << ", " << it2->second.getActualName() << ", " << it2->second.getNumTweets() << ", " << it2->second.getCategory() << endl;

    cout << endl << "______delete kat@gmail.com______" << endl;
    it = m2.find("kat@gmail.com");
    m2.erase(it);
    cout << "        deleted" << "\n\n";

    cout << "________PRINT ALL KEY-VALUE PAIRS P2________" << endl;
    for (auto const& d : m2)
    {
        cout << "username_KEY: " << d.second.getEmail();
        cout << "      data_VALUE: " << d.second.getUserName() << ", " << d.second.getActualName() << ", " << d.second.getNumTweets() << ", " << d.second.getCategory() << endl;
    }









    return 0;
}