#include <iostream>
#include <string>
using namespace std;

class DiceGame
{
    int diceFace;
    int userGuess;
    void rollDice()
    {
        diceFace = (int)(rand()%6) + 1;
    }
    int getUserInput(string prompt)
    {
        int r;
        cout << prompt;
        cin >> r;
        return r;
    }
    void checkUserGuess()
    {
        if (diceFace == userGuess)
        {
            cout << "맞았습니다.";
        }
        else
        {
            cout << "틀렸습니다.";
        }
    }
public:
    void startPlaying()
    {
        userGuess = getUserInput("예상값을 입력하세요: ");
        rollDice();
        checkUserGuess();
    }
};

int main()
{
    DiceGame game;
    game.startPlaying();
    
    return 0;
}
