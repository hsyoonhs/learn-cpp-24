#include <iostream>
#include <string>
using namespace std;

class Fortune
{
public:
	string prob = "answer"; // 정답 기본값
	int triesLimit = 6; // 시도 수 기본값

	void play()
	{
		int length = prob.length();
		int tries = 0;
		string answer(length, '-');

		cout << "현재 상태: " << answer << endl;

		while(tries < triesLimit && answer != prob)
		{
			char c;
			cout << "글자를 추측하시오: ";
			cin >> c;
			if(answer.find(c) != string::npos)
			{
				cout << endl << "전과 동일한 글자입니다. " << endl;
				continue;
			}
			int pos = prob.find(c);
			if(pos == string::npos)
			{
				cout << endl << "추측한 글자가 없습니다." << endl;
				tries++;
				continue;
			}
			else
			{
				answer[pos] = c;
				pos = prob.find(c, pos+1);
				while(pos != string::npos)
				{
					answer[pos] = c;
					pos = prob.find(c, pos+1);
				}
			}
			cout << endl << "현재 상태: " << answer << endl;
			if(answer == prob) {
				cout << "맞았습니다." << endl;
				break;
			}
		}

		if(tries >= triesLimit)
		{
			cout << "틀렸습니다. 정답은 " << prob << "입니다." << endl;
		}
	}
};

int main()
{
	Fortune game;
	// game.prob = "coffee"; // 정답 임의 지정 가능
	// game.triesLimit = 3; // 시도 수 임의 지정 가능
	game.play();

	return 0;
}
