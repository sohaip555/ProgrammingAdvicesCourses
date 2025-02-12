#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player = 1, Computer = 2, Draw = 3 };

struct stGameResult
{
    enWinner Winner;
    string NameWinner;
    int PlayerRecord = 0, ComputerRecord = 0, DrawRecord = 0, Round;
};

struct stRoundInfo
{
    enGameChoice PlayreChoice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string NameWinner;
};

int RandomNumber(int From, int To)
{
    int Result;
    Result = rand() % (To - From + 1) + From;
    return Result;
}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}

int ReadHowManyRounds()
{
    int Round = 0;
    do
    {
        cout << "How many round 1 to 10? ";
        cin >> Round;
    } while (Round < 1 || Round > 10);

    return Round;
}

enGameChoice ReadPlayrChoice()
{
    int PlayrChoice = 0;

    do
    {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissore ?" << endl;
        cin >> PlayrChoice;
    } while (PlayrChoice < 1 || PlayrChoice > 3);
    return (enGameChoice)PlayrChoice;
}

enGameChoice GetComputarChoice()
{
    return (enGameChoice)RandomNumber(1, 3);
}

enWinner WhoWinner(stRoundInfo RounInfo)
{
    if (RounInfo.PlayreChoice == RounInfo.ComputerChoice)
    {
        return enWinner::Draw;
    }

    switch (RounInfo.PlayreChoice)
    {
    case enGameChoice::Paper:
        if (RounInfo.ComputerChoice == enGameChoice::Scissors)
        {
            return enWinner::Computer;
        }
        break;
    case enGameChoice::Scissors:
        if (RounInfo.ComputerChoice == enGameChoice::Stone)
        {
            return enWinner::Computer;
        }
        break;
    case enGameChoice::Stone:
        if (RounInfo.ComputerChoice == enGameChoice::Paper)
        {
            return enWinner::Computer;
        }
        break;
    }

    return enWinner::Player;
}

enWinner WhoWinnerTheGame(int PlayerRecord, int ComputerRecord)
{
    if (PlayerRecord > ComputerRecord)
        return enWinner::Player;
    else if (ComputerRecord > PlayerRecord)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

string NameWinner(int Winner)
{
    string Winners[3] = { "Player", "Computer", "No winner" };
    return Winners[Winner - 1];
}

void PrintResult(stRoundInfo RoundInfo, int GameRound)
{
    cout << "___________________Round [" << GameRound << "]__________________" << endl;
    cout << "Player  choise : " << RoundInfo.PlayreChoice << endl;
    cout << "Computer choice: " << RoundInfo.ComputerChoice << endl;
    cout << "Round winner   : [" << RoundInfo.NameWinner << "]" << endl;
    cout << "______________________________________________" << endl;


}

string Tabs(int NumberOfTabs)
{
    string t = "";
    for (int i = 0; i < NumberOfTabs; i++)
        t = t + "\t";

    return t;
}

void ColoeScreen(enWinner Winner)
{
    if (Winner == enWinner::Player)
        system("color 2F");
    else if (Winner == enWinner::Computer)
        system("color 4F");
    else
        system("color 6F");

}

void GameOverscreem(stGameResult GameResult)
{
    cout << "\t\t\t______________________________________________________________" << endl;
    cout << "\n" << Tabs(5) << "+++ G a m e O v e r" << endl;
    cout << "\t\t\t______________________________________________________________" << endl;
    cout << "\t\t\tGame Round        : " << GameResult.Round << endl;
    cout << "\t\t\tPlayre won timse  : " << GameResult.PlayerRecord << endl;
    cout << "\t\t\tComputer won timse: " << GameResult.ComputerRecord << endl;
    cout << "\t\t\tDraw timse        : " << GameResult.DrawRecord << endl;
    cout << "\t\t\tFinal Winner      : " << GameResult.NameWinner << endl;
    cout << "\t\t\t______________________________________________________________" << endl;

    ColoeScreen(GameResult.Winner);
}

stGameResult FillGameResult(int Round, int PlayerRecord, int ComputerRecord, int DrawRecord)
{
    stGameResult GameResult;
    GameResult.ComputerRecord = ComputerRecord;
    GameResult.PlayerRecord = PlayerRecord;
    GameResult.DrawRecord = DrawRecord;
    GameResult.Winner = WhoWinnerTheGame(PlayerRecord, ComputerRecord);
    GameResult.NameWinner = NameWinner(GameResult.Winner);
    GameResult.Round = Round;

    return GameResult;
}

stGameResult PlayGame()
{
    int Round;

    Round = ReadHowManyRounds();
    int PlayerRecord = 0, ComputerRecord = 0, DrawRecord = 0;

    for (int GameRound = 1; GameRound <= Round; GameRound++)
    {
        stRoundInfo RoundInfo;
        cout << "\n\nRound [" << GameRound << "] begins: " << endl;
        RoundInfo.PlayreChoice = ReadPlayrChoice();
        RoundInfo.ComputerChoice = GetComputarChoice();
        RoundInfo.Winner = WhoWinner(RoundInfo);
        RoundInfo.NameWinner = NameWinner(RoundInfo.Winner);
        PrintResult(RoundInfo, GameRound);
        ColoeScreen(RoundInfo.Winner);


        if (RoundInfo.Winner == enWinner::Player)
            PlayerRecord++;
        else if (RoundInfo.Winner)
            ComputerRecord++;
        else
            DrawRecord++;
    }

    return FillGameResult(Round, PlayerRecord, ComputerRecord, DrawRecord);

}

void StartGame()
{
    char PlayAgian = 'Y';
    stGameResult GameResult;

    do
    {
        ResetScreen();
        GameResult = PlayGame();
        GameOverscreem(GameResult);

        cout << "\t\t\tDo you want to Play again Y/N" << endl;
        cin >> PlayAgian;
    } while (PlayAgian == 'Y' || PlayAgian == 'y');
    system("color 0F");

}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
}

