#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;

enum enQuestionsLevel{ Easy = 1, Mad = 2, Hard = 3, Mixl = 4};

enum enOperationType{ Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5};

struct stQuestions
{
    short Number1 = 0;
    short Number2 = 0;
    enQuestionsLevel QuestionsLevel;
    enOperationType OperationType;
    short CorrectAnswer = 0;
    short PlayAswer = 0;
    bool AnswerResult;

};

struct stQuizz
{

    enQuestionsLevel QuestionsLevel;
    enOperationType OperationType;
    short NumberOfQuestions = 0;
    short NumberOfRightAnswers = 0;
    short NumberOfWrongAnnswers = 0;
    stQuestions QuestionsList[100];

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

int ReadHowManyQuestions()
{
    int Round = 0;

    cout << "\nHow many Questions you want to aswer? " ;
    cin >> Round;

    return Round;
}

enQuestionsLevel ReadQuestionsLevel()
{
    int QuestionsLevel = 0;

    do
    {
    cout << "\nEnter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix? " ;
    cin >> QuestionsLevel;

    } while (QuestionsLevel < 1 || QuestionsLevel > 5);

    return (enQuestionsLevel)QuestionsLevel;    
}

enOperationType ReadOperationTayp()
{
    int OperationTayp = 0;

    do
    {
    cout << "\nEnter Opretaion Tayp [1] Add, [2] Sup, [3] Mul, [4] Div, [5] Mix? " ;
    cin >> OperationTayp;
    } while (OperationTayp < 1 || OperationTayp > 5);

    return (enOperationType)OperationTayp;    

}

bool IsRight(int Answer, int RightAnswr)
{
    return Answer == RightAnswr;
}

int SymbolCalculator(int Number1, int Number2, enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add :
        return Number1 + Number2;
    case enOperationType::Sub :
        return Number1 - Number2;
    case enOperationType::Mul :
        return Number1 * Number2;
    case enOperationType::Div :
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

stQuestions QenerateQuestion(enQuestionsLevel QuestionsLevel, enOperationType OperationType)
{
    stQuestions Questions;
    int Number1 = 0, Number2 = 0;

    if (QuestionsLevel == enQuestionsLevel::Mixl)
    {
        QuestionsLevel = (enQuestionsLevel) RandomNumber(1, 3);
    }
    
    if (OperationType == enOperationType::Mix)
    {
        OperationType = (enOperationType) RandomNumber(1, 4);
    }
    
    switch (QuestionsLevel)
    {
    case enQuestionsLevel::Easy :
        Number1 = RandomNumber(1,10);
        Number2 = RandomNumber(1,10);
        Questions.CorrectAnswer = SymbolCalculator(Number1, Number2, OperationType);
        Questions.QuestionsLevel = QuestionsLevel;
        break;
    case enQuestionsLevel::Mad :
        Number1 = RandomNumber(1,50);
        Number2 = RandomNumber(1,50);
        Questions.CorrectAnswer = SymbolCalculator(Number1, Number2, OperationType);
        Questions.QuestionsLevel = QuestionsLevel;
        break;
    case enQuestionsLevel::Hard :
        Number1 = RandomNumber(1,100);
        Number2 = RandomNumber(1,100);
        Questions.CorrectAnswer = SymbolCalculator(Number1, Number2, OperationType);
        Questions.QuestionsLevel = QuestionsLevel;
        break;
    }
    Questions.Number1 = Number1;
    Questions.Number2 = Number2;
    Questions.OperationType = OperationType;

    return Questions;

}

void GenerateQuestions(stQuizz &Quizz)
{

    for (int Question = 0; Question < Quizz.NumberOfQuestions; Question++)
    {
        Quizz.QuestionsList[Question] = QenerateQuestion(Quizz.QuestionsLevel, Quizz.OperationType);
    }
    
}

string GetOpTaypSymbol(enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add :
        return "+";
    case enOperationType::Sub :
        return "-";
    case enOperationType::Mul :
        return "*";
    case enOperationType::Div :
        return "/";
    default:
        return "+";
    }
}

string GetNameOpTayp(enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add :
        return "Add";
    case enOperationType::Sub :
        return "Sub";
    case enOperationType::Mul :
        return "Mul";
    case enOperationType::Div :
        return "Div";
    default:
        return "Add";
    }
}

string GetNameOpLevel(enQuestionsLevel QuestionsLevel)
{
    switch (QuestionsLevel)
    {
    case enQuestionsLevel::Easy :
        return "Easy";
    case enQuestionsLevel::Mad :
        return "Med";
    case enQuestionsLevel::Hard :
        return "Hard";
    case enQuestionsLevel::Mixl :
        return "Mix";
    default:
        return "Easy";
    }
}

void PrintQuestion(stQuizz Quizz, int NumberOfQuestion)
{
    cout << "\n";
    cout << "Question [" << NumberOfQuestion + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
    cout << "\n" << Quizz.QuestionsList[NumberOfQuestion].Number1;
    cout << "\n" << Quizz.QuestionsList[NumberOfQuestion].Number2;
    cout << GetOpTaypSymbol(Quizz.QuestionsList[NumberOfQuestion].OperationType);
    cout << "\n________________\n";
}

int ReadeAnswer()
{
    int Answer;
    cin >> Answer;
    return Answer;
}

void CorrectTheQuestionAnswer(stQuizz &Quizz, int NumberOfQuestion)
{
    if (Quizz.QuestionsList[NumberOfQuestion].PlayAswer == Quizz.QuestionsList[NumberOfQuestion].CorrectAnswer)
    {
        Quizz.QuestionsList[NumberOfQuestion].AnswerResult = true;
        Quizz.NumberOfRightAnswers++;
        cout << "\nRight ansert :-)\n";
        system("color 2F");
    }
    else
    {
        Quizz.QuestionsList[NumberOfQuestion].AnswerResult = false;
        Quizz.NumberOfWrongAnnswers++;
        cout << "Wrong ansert :-(\n";
        cout << "The Right answer is " << Quizz.QuestionsList[NumberOfQuestion].CorrectAnswer << endl;
        system("color 4F");

    }
    
}

void AskAndCorrectQuestion(stQuizz &Quizz)
{
    for (int QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        PrintQuestion(Quizz, QuestionNumber);
        Quizz.QuestionsList[QuestionNumber].PlayAswer = ReadeAnswer();
        CorrectTheQuestionAnswer(Quizz, QuestionNumber);
    }
}

void ShowGameOver(stQuizz Quizz)
{
    if (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnnswers)
    {
        cout << "______________________________________________________________" << endl;
        cout << "\n Final Result is PASS" << endl;
        cout << "______________________________________________________________" << endl;
        system("color 2F");
    }
    else
    {
        cout << "______________________________________________________________" << endl;
        cout << "\n Final Result is Fail" << endl;
        cout << "______________________________________________________________" << endl;
        system("color 4F");
    }
    
}

void PrintGameResult(stQuizz Quizz)
{
    cout << "Number of Question     : " << Quizz.NumberOfQuestions << endl;
    cout << "Question level         : " << GetNameOpLevel(Quizz.QuestionsLevel) << endl;
    cout << "OpTayp                 : " << GetNameOpTayp(Quizz.OperationType) << endl;
    cout << "Number of right answer : " << Quizz.NumberOfRightAnswers << endl;
    cout << "Number of wrong aswer  : " << Quizz.NumberOfWrongAnnswers << endl;
    cout << "______________________________________________________________" << endl;

}

void PlayMathGame()
{
    stQuizz Quizz;
    Quizz.NumberOfQuestions = ReadHowManyQuestions();
    Quizz.QuestionsLevel = ReadQuestionsLevel();
    Quizz.OperationType = ReadOperationTayp();

    GenerateQuestions(Quizz);
    AskAndCorrectQuestion(Quizz);
    ShowGameOver(Quizz);
    PrintGameResult(Quizz);
}

void StartGame()
{
    char PlayAgian = 'Y';

    do
    {
        ResetScreen();
        PlayMathGame();

        cout << "Do you want to Play again Y/N" << endl;
        cin >> PlayAgian;
    } while (PlayAgian == 'Y' || PlayAgian == 'y');
    system("color 0F");
    
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();


}