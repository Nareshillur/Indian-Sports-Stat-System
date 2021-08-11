#include <iostream>

#include <conio.h>

#include <string>

#include <fstream>

#include <stdlib.h>

using namespace std;


class player
{

public:

    string name;

    string gender;

    string DoB;

    string nationality;

    string sport;

    int matches_played;

    void print()
    {
        cout<<"Name:"<<name<<endl;

        cout<<"Gender:"<<gender<<endl;

        cout<<"Date of birth:"<<DoB<<endl;

        cout<<"Nationality:"<<nationality<<endl;

        cout<<"Sport:"<<sport<<endl;

        cout<<"Matchs:"<<matches_played<<endl;

    }

};


class batsmen : virtual public player
{

public:

    unsigned int ranked;

    int runs;

    int not_out;

    int high_score;

    int bf;

    unsigned int innings;

    float strike_rate;

    float average;

    int fours;

    int sixes;

    int fifies;

    int hundreads;

     void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Matches:"<<matches_played<<endl;

        cout<<"Runs:"<<runs<<endl;

        cout<<"Innings:"<<innings<<endl;

        cout<<"Average:"<<average<<endl;

        cout<<"Not Out:"<<not_out<<endl;

        cout<<"Ball Faced:"<<bf<<endl;

        cout<<"Strike Rate:"<<strike_rate<<endl;

        cout<<"100s:"<<hundreads<<endl;

        cout<<"50s:"<<fifies<<endl;

        cout<<"High Score:"<<high_score<<endl;

        cout<<"4s:"<<fours<<endl;

        cout<<"6s:"<<sixes<<endl;

    }

    friend void load_batsmen(batsmen*);

};

class bowler : virtual public player
{

public:

    int ranked;

    int innings;

    int runs;

    int b_figure;

    float strike_rate;

    float economy;

    float overs;

    int wickets;

    float average;

    int wickets4;

    int wickets5;

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Matches:"<<matches_played<<endl;

        cout<<"Innings:"<<innings<<endl;

        cout<<"Overs:"<<overs<<endl;

        cout<<"Runs:"<<runs<<endl;

        cout<<"Wickets:"<<wickets<<endl;

        cout<<"Bowling Figure:"<<b_figure<<endl;

        cout<<"Average"<<average<<endl;

        cout<<"Economy"<<economy<<endl;

        cout<<"Strike Rate:"<<strike_rate<<endl;

        cout<<"4 Wickets:"<<wickets4<<endl;

        cout<<"5+ Wickets:"<<wickets5<<endl;

    }

    friend void load_bowlers(bowler*);

};

class keeper : public batsmen
{
    public:

        int dismissal;

        friend void load_wicketkeeper(keeper*);

        void print()

        {
                cout<<"Rank:"<<ranked<<endl;

                cout<<"Name:"<<name<<endl;

                cout<<"Dismissals:"<<dismissal<<endl;

                cout<<"Matches:"<<matches_played<<endl;

        }

};

class c_allrounder: virtual public batsmen , virtual public bowler
{

public:

        friend void load_c_all_rounder(c_allrounder*);

        void print()
        {
            cout<<"Rank:"<<batsmen::ranked<<endl;

            cout<<"Name"<<batsmen::name<<endl;

            cout<<"Matches:"<<batsmen::matches_played<<endl;

            cout<<"Runs:"<<batsmen::runs<<endl;

            cout<<"Batting Average:"<<batsmen::average<<endl;

            cout<<"Batting Average:"<<batsmen::strike_rate<<endl;

            cout<<"Wickets:"<<bowler::wickets<<endl;

            cout<<"Economy:"<<bowler::economy<<endl;

            cout<<"Bowling:"<<bowler::average<<endl;


        }
};

class rider : virtual public player
{

public:

    int ranked;

    int rides;

    int points;

    string current_team;

    friend void load_riders(rider*);

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Rides:"<<rides<<endl;

        cout<<"Points"<<points<<endl;

        cout<<"Matches:"<<matches_played<<endl;

    }

};

class defender : virtual public player
{
public:

    int ranked;

    int tackles;

    int points;

    string current_team;

    friend void load_defenders(defender*);

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Tackles:"<<tackles<<endl;

        cout<<"Points:"<<points<<endl;

        cout<<"Team:"<<current_team<<endl;
    }

};

class k_allrounder :virtual public player
{
public:

    int ranked;

    string current_team;

    int points;

    friend void load_point_scorer(k_allrounder*);

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Team:"<<current_team<<endl;

        cout<<"Matches:"<<matches_played<<endl;

        cout<<"Total Points:"<<points<<endl;

    }
};

class team
{
public:

    unsigned int ranked;

    string name;

    int wins;

    int loses;

    int ties;

    int matches;

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Total Matches:"<<matches<<endl;

        cout<<"Wins:"<<wins<<endl;

        cout<<"Loses:"<<loses<<endl;

        cout<<"Ties:"<<ties<<endl;

    }

};

class team_isl: public team
{
public:

    int goals_for;

    int goals_against;

    string goal_diff;

    int points;

    int best;

    friend void load_isl_teams(team_isl*);

    void print()
    {
        team::print();

        cout<<"Goals For:"<<goals_for<<endl;

        cout<<"Goals Against:"<<goals_against<<endl;

        cout<<"Goals Difference:"<<goal_diff<<endl;

        cout<<"Best Position:"<<best<<endl;
    }

};

class team_kabaddi: public team
{
public:
        float per_win;

        float per_loss;

        float per_tie;

        friend void load_kabb_teams(team_kabaddi*);

        void print()
        {
            team::print();

            cout<<"Win%:"<<per_win<<endl;

            cout<<"Lose%:"<<per_loss<<endl;

            cout<<"Tie%"<<per_tie<<endl;
        }
};

class team_ipl: public team
{
public:

        float win_p;

        int titles;

        friend void load_ipl_teams(team_ipl*);

        void print()
        {

            team::print();

            cout<<"Win%:"<<win_p<<endl;

            cout<<"Title Won:"<<titles<<endl;
        }


};

class sport
{
public:

    string name;

    string popularity;

    void print()
    {
        cout<<"Name:"<<name<<endl;

        cout<<"Viewers:"<<popularity<<endl;
    }

};

class footballer_app: public player
{
public:
    int ranked;

    int apperance;

    friend void load_apperance(footballer_app);

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Appearance:"<<apperance<<endl;
    }
};

class footballer : public player
{
public:

    int ranked;

    int goals;

    float gpg;

    int penalty;

    friend void load_footballers(footballer*);

    void print()
    {
        cout<<"Rank:"<<ranked<<endl;

        cout<<"Name:"<<name<<endl;

        cout<<"Goals:"<<goals<<endl;

        cout<<"Matches:"<<matches_played<<endl;

        cout<<"Goals per Game:"<<gpg<<endl;

        cout<<"Penalties:"<<penalty<<endl;

    }

};

int main()
{

    void load_batsmen(batsmen*);

    void load_bowlers(bowler*);

    void load_c_allrounder(c_allrounder*);

    void load_wicketkeeper(keeper*);

    void load_ipl_teams(team_ipl*);

    void load_point_scorer(k_allrounder*);

    void load_riders(rider*);

    void load_defenders(defender*);

    void load_kabb_teams(team_kabaddi*);

    void load_apperance(footballer_app*);

    void load_footballers(footballer*);

    void load_isl_teams(team_isl*);

    int searchit(string,string);

    void search_cric(batsmen*,bowler*,keeper*,c_allrounder*);

    batsmen batsman[100];

    bowler bowlers[100];

    c_allrounder all_cric[52];

    keeper wicketkeeper[20];

    team_ipl iplteams[13];

    k_allrounder all_kab[5];

    rider riders[5];

    defender defenders[5];

    team_kabaddi kplteams[12];

    footballer_app apperance[10];

    footballer footballers[11];

    team_isl islteams[11];

    ///Sport

    sport cricket;

    cricket.name="Indian Premier League.";

    cricket.popularity="2.2 Billion.";

    sport kabaddi;

    kabaddi.name="Pro Kabaddi League";

    kabaddi.popularity="1.6 Billion.";

    sport football;

    football.name="Indian Super League";

    football.popularity="429 Million.";

    ///Sport End

    int choice_main;

    int choice;

    bool flag=1;

    cout<<"Loading necessary files."<<endl;

    load_batsmen(batsman);

    load_bowlers(bowlers);

    load_c_allrounder(all_cric);

    load_wicketkeeper(wicketkeeper);

    load_ipl_teams(iplteams);

    load_riders(riders);

    load_defenders(defenders);

    load_point_scorer(all_kab);

    load_kabb_teams(kplteams);

    load_apperance(apperance);

    load_footballers(footballers);

    load_isl_teams(islteams);

    cout<<"Press any key to continue.";

    getch();

    while(1)
    {

        system("cls");

        system("color f1");

        cout<<"Welcome to Indian Sports Stat System"<<endl;

        cout<<"Choose your Sport"<<endl;

        cout<<"1.Cricket."<<endl;

        cout<<"2.Kabaddi."<<endl;

        cout<<"3.Football."<<endl;

        cout<<"4.Exit."<<endl;

        while(cout<<"Enter your choice:"&& !(cin>>choice_main))
        {
            cin.clear();

            cin.ignore(INT_MAX,'\n');

            cout<<"Invalid Input\n";

        }


        switch(choice_main)
        {

        case 1:

                flag=1;

                while(flag)
                {

                    system("cls");

                    cout<<"Which stats do you want to view ? "<<endl;

                    cout<<"1.Top Batsmen."<<endl;

                    cout<<"2.Top Bowlers."<<endl;

                    cout<<"3.Top Wicketkeepers."<<endl;

                    cout<<"4.Top All Rounders."<<endl;

                    cout<<"5.Top Teams."<<endl;

                    cout<<"6.View Sport Popularity"<<endl;

                    cout<<"7.Search a player."<<endl;

                    cout<<"8.Back."<<endl;

                    while(cout<<"Enter your choice:"&& !(cin>>choice))
                    {
                        cin.clear();

                        cin.ignore(INT_MAX,'\n');

                        cout<<"Invalid Input\n";

                    }

                    switch(choice)
                    {
                     case 1:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 100 ; i++)
                            {
                                batsman[i].print();

                                cout<<"......................................................."<<endl;

                                if(i==9)
                                {
                                    bool temp=1;

                                    while(cout<<"To see more details, input 1 else 0:"&& !(cin>>temp))
                                    {
                                        cin.clear();

                                        cin.ignore(INT_MAX,'\n');

                                        cout<<"Invalid Input\n";

                                    }

                                    if(temp==1)

                                        continue;
                                    else

                                        break;
                                }

                            }

                            getch();

                        break;

                     case 2:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 100 ; i++)
                            {
                                bowlers[i].print();

                                cout<<"......................................................."<<endl;

                                if(i==9)
                                {
                                    bool temp=1;

                                    while(cout<<"To see more details, input 1 else 0:"&& !(cin>>temp))
                                    {
                                        cin.clear();

                                        cin.ignore(INT_MAX,'\n');

                                        cout<<"Invalid Input\n";

                                    }

                                    if(temp==1)

                                        continue;
                                    else

                                        break;
                                }

                            }

                            getch();

                        break;

                     case 3:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 20 ; i++)
                            {
                                wicketkeeper[i].print();

                                cout<<"......................................................."<<endl;

                                if(i==9)
                                {
                                    bool temp=1;

                                    while(cout<<"To see more details, input 1 else 0:"&& !(cin>>temp))
                                    {
                                        cin.clear();

                                        cin.ignore(INT_MAX,'\n');

                                        cout<<"Invalid Input\n";
                                    }
                                    if(temp==1)

                                        continue;
                                    else

                                        break;
                                }

                            }

                            getch();

                        break;

                     case 4:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 52 ; i++)
                            {
                                all_cric[i].print();

                                cout<<"......................................................."<<endl;

                                if(i==9)
                                {
                                    bool temp=1;

                                    while(cout<<"To see more details, input 1 else 0:"&& !(cin>>temp))
                                    {
                                        cin.clear();

                                        cin.ignore(INT_MAX,'\n');

                                        cout<<"Invalid Input\n";

                                    }
                                    if(temp==1)

                                        continue;
                                    else

                                        break;
                                }

                            }

                            getch();

                        break;

                    case 5:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 13 ; i++)
                            {
                                iplteams[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                     case 6:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            cricket.print();

                            cout<<"......................................................."<<endl;

                            getch();

                            break;

                     case 7:
                                search_cric(batsman,bowlers,wicketkeeper,all_cric);

                                getch();

                        break;


                     case 8:

                        flag=0;

                        break;

                     default:

                        cout<<"Invalid Input.\nPress any key to continue..."<<endl;

                        getch();

                        break;

                    }
                }
            break;

        case 2:

                flag=1;

                while(flag)
                {
                    system("cls");

                    cout<<"Which stats do you want to view ? "<<endl;

                    cout<<"1.Top Point Scorer."<<endl;

                    cout<<"2.Top Raider."<<endl;

                    cout<<"3.Top Defenders."<<endl;

                    cout<<"4.Top teams."<<endl;

                    cout<<"5.View Popularity."<<endl;

                    cout<<"6.Back."<<endl;

                    while(cout<<"Enter your choice:"&& !(cin>>choice))
                    {
                        cin.clear();

                        cin.ignore(INT_MAX,'\n');

                        cout<<"Invalid Input\n";

                    }

                    switch(choice)
                    {

                    case 1:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 5 ; i++)
                            {
                                all_kab[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 2:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 5 ; i++)
                            {
                                riders[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 3:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 5 ; i++)
                            {
                                defenders[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 4:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 12 ; i++)
                            {
                                kplteams[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 5:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            kabaddi.print();

                            cout<<"......................................................."<<endl;

                            getch();

                        break;

                    case 6:

                            flag=0;

                        break;

                    default:
                            cout<<"Invalid Input."<<endl;
                        break;

                    }

                }

            break;

        case 3:

                flag=1;

                while(flag)
                {
                    system("cls");

                    cout<<"Which stats do you want to view ? "<<endl;

                    cout<<"1.Top Goal Scorers"<<endl;

                    cout<<"2.Top teams."<<endl;

                    cout<<"3.Most Appearance."<<endl;

                    cout<<"4.View Popularity."<<endl;

                    cout<<"5.Back"<<endl;

                    while(cout<<"Enter your choice:"&& !(cin>>choice))
                    {
                        cin.clear();

                        cin.ignore(INT_MAX,'\n');

                        cout<<"Invalid Input\n";

                    }

                    switch(choice)
                    {

                    case 1:
                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 11 ; i++)
                            {
                                footballers[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 2:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 11 ; i++)
                            {
                                islteams[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 3:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            for(int i=0 ; i < 10 ; i++)
                            {
                                apperance[i].print();

                                cout<<"......................................................."<<endl;

                            }

                            getch();

                        break;

                    case 4:

                            system("cls");

                            cout<<"......................................................."<<endl;

                            football.print();

                            cout<<"......................................................."<<endl;

                            getch();

                        break;

                    case 5:

                            flag=0;

                        break;

                    default:

                            cout<<"Invalid Input"<<endl;

                        break;

                    }

                }

            break;


        case 4:

                return 0;

        default:

                cout<<"Invalid Input.\nPress any key to continue..."<<endl;

                getch();

            break;
        }
    }
    getch();
}

void load_batsmen(batsmen *B)
{
    ifstream fin;
    fin.open("Top Batsmen.txt");
    for(int i=0;i<100;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].matches_played;

        fin>>B[i].innings;

        fin>>B[i].not_out;

        fin>>B[i].runs;

        fin>>B[i].high_score;

        fin>>B[i].average;

        fin>>B[i].bf;

        fin>>B[i].strike_rate;

        fin>>B[i].hundreads;

        fin>>B[i].fifies;

        fin>>B[i].fours;

        fin>>B[i].sixes;

    }
    fin.close();

}

void load_bowlers(bowler *B)
{

    ifstream fin;
    fin.open("Top Bowlers.txt");
    for(int i=0;i<100;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].matches_played;

        fin>>B[i].innings;

        fin>>B[i].overs;

        fin>>B[i].runs;

        fin>>B[i].wickets;

        fin>>B[i].b_figure;

        fin>>B[i].average;

        fin>>B[i].economy;

        fin>>B[i].strike_rate;

        fin>>B[i].wickets4;

        fin>>B[i].wickets5;

    }

    fin.close();

}

void load_c_allrounder(c_allrounder *B)
{
    ifstream fin;
    fin.open("All Rounder C.txt");
    for(int i=0;i<52;i++)
    {
        fin>>B[i].batsmen::ranked;

        fin>>B[i].batsmen::name;

        fin>>B[i].batsmen::matches_played;

        fin>>B[i].batsmen::runs;

        fin>>B[i].batsmen::average;

        fin>>B[i].batsmen::strike_rate;

        fin>>B[i].bowler::wickets;

        fin>>B[i].bowler::economy;

        fin>>B[i].bowler::average;

    }

    fin.close();
}

void load_wicketkeeper(keeper *B)
{
    ifstream fin;
    fin.open("Top Wicketkeepers.txt");
    for(int i=0 ;i<20;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].dismissal;

        fin>>B[i].matches_played;

    }

    fin.close();
}

void load_ipl_teams(team_ipl *B)
{
    ifstream fin;
    fin.open("IPL Teams.txt");
    for(int i=0 ;i<13;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].matches;

        fin>>B[i].wins;

        fin>>B[i].loses;

        fin>>B[i].ties;

        fin>>B[i].win_p;

        fin>>B[i].titles;

    }

    fin.close();
}

void load_point_scorer(k_allrounder *B)
{
    ifstream fin;
    fin.open("Top Scorer.txt");
    for(int i=0 ;i<5;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].current_team;

        fin>>B[i].matches_played;

        fin>>B[i].points;

    }

    fin.close();
}

void load_riders(rider *B)
{
    ifstream fin;
    fin.open("Top Raiders.txt");
    for(int i=0 ;i<5;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].current_team;

        fin>>B[i].matches_played;

        fin>>B[i].points;

        fin>>B[i].rides;

    }

    fin.close();
}

void load_defenders(defender *B)
{
    ifstream fin;
    fin.open("Top Defenders.txt");
    for(int i=0 ;i<5;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].current_team;

        fin>>B[i].matches_played;

        fin>>B[i].points;

        fin>>B[i].tackles;

    }

    fin.close();
}

void load_kabb_teams(team_kabaddi *B)
{
    ifstream fin;
    fin.open("K Point table.txt");
    for(int i=0 ;i<12;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].matches;

        fin>>B[i].wins;

        fin>>B[i].loses;

        fin>>B[i].ties;

        fin>>B[i].per_win;

        fin>>B[i].per_loss;

        fin>>B[i].per_tie;

    }

    fin.close();

}

void load_apperance(footballer_app *B)
{
    ifstream fin;
    fin.open("Top Apperance.txt");
    for(int i=0 ;i<10;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].apperance;

    }

    fin.close();

}

void load_footballers(footballer *B)
{
    ifstream fin;
    fin.open("Top Footballers.txt");
    for(int i=0 ;i<11;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].goals;

        fin>>B[i].matches_played;

        fin>>B[i].gpg;

        fin>>B[i].penalty;

    }

    fin.close();

}

void load_isl_teams(team_isl *B)
{
    ifstream fin;
    fin.open("Top ISL.txt");
    for(int i=0 ;i<20;i++)
    {
        fin>>B[i].ranked;

        fin>>B[i].name;

        fin>>B[i].matches;

        fin>>B[i].wins;

        fin>>B[i].ties;

        fin>>B[i].loses;

        fin>>B[i].goals_for;

        fin>>B[i].goals_against;

        fin>>B[i].goal_diff;

        fin>>B[i].points;

        fin>>B[i].best;

    }

    fin.close();

}

int searchit(string pat,string txt)
{
    int M = pat.length();

    int N = txt.length();

    int j;

    for (int i = 0; i <= N - M; i++)
    {

        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
            break;
    }
    if(j == M)
        return 1;
    else
        return 0;
}
void search_cric(batsmen *A, bowler *B, keeper *C,c_allrounder *D)
{
    int countit;

    string str;

    cout<<"Enter keyword:";

    cin>>str;

    cout<<"......................................................."<<endl;

    cout<<"Batsmen Results"<<endl;

    countit=0;

    for(int i=0;i<100;i++)
    {
        if(searchit(str,A[i].name))
        {
            cout<<"......................................................."<<endl;

            A[i].print();

            countit++;

            cout<<"......................................................."<<endl;
        }
    }
    if(countit == 0)
    {

        cout<<"Not Found"<<endl;

        cout<<"......................................................."<<endl;

    }

    cout<<"Bowler Result"<<endl;

    countit=0;

    for(int i=0;i<100;i++)
    {
        if(searchit(str,B[i].name))
        {
            cout<<"......................................................."<<endl;

            B[i].print();

            countit++;

            cout<<"......................................................."<<endl;
        }
    }
    if(countit == 0)
    {

        cout<<"Not Found"<<endl;

        cout<<"......................................................."<<endl;

    }
    cout<<"Keeper Result"<<endl;

    countit=0;

    for(int i=0;i<20;i++)
    {
        if(searchit(str,C[i].name))
        {
            cout<<"......................................................."<<endl;

            C[i].print();

            countit++;

            cout<<"......................................................."<<endl;
        }
    }
    if(countit == 0)
    {

        cout<<"Not Found"<<endl;

        cout<<"......................................................."<<endl;

    }

    cout<<"All Rounder Result"<<endl;

    countit=0;

    for(int i=0;i<20;i++)
    {
        if(searchit(str,D[i].name))
        {
            cout<<"......................................................."<<endl;

            D[i].print();

            countit++;

            cout<<"......................................................."<<endl;
        }
    }
    if(countit == 0)
    {

        cout<<"Not Found"<<endl;

        cout<<"......................................................."<<endl;

    }
}
