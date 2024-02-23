#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    char again;
    do
    {
        srand(time(0));
        cout << "   \n -------------------------------------------------------";
        cout << "   Welcome to Guessing number game \n";
        cout << "   Please select the difficulty level\n";
        cout << "   1: Easy \n";
        cout << "   2: Medium \n";
        cout << "   3: Hard \n";

        int level;
        cin >> level;

        int r;
        int n;
        int count = 0;

        r = rand();
        while (1)
        {
            if (level == 1)
            {

                r %= 50;
                cout << "   The generaed number is between 1 and 50 \n";
            }
            else if (level == 2)
            {
                r %= 100;
                cout << "   The generaed number is between 1 and 100 \n";    

            }

            else if (level == 3)
            {
                r %=100 +100 ;
                cout << "   The generaed number is between 1 and 200 \n";    

            }

            else {
                cout << "   Invalid level";
                break;
                break;
            }
                cin >> n;
                if (n < r)
                {
                    cout << "   the number is too low" << endl;
                    count++;
                }
                else if (n > r)
                {
                    cout << "   the number is too high" << endl;
                    count++;
                }
                if (count < 5 && n == r)
                {
                    cout << "   You Guess the right number" << endl;
                    break;
                }
                else if (count > 5)
                {
                    cout << "   You couldn't guess" << endl;
                    break;
                }

                for (; count <=5 ; count ++){
                    cout << "\t" <<  count << " try \n" ;
                    break;
                }
            }
        if (count > 5)
        cout << "\t" << r << " is the generated number \n";

        cout << "   Game Over! \n";
        cout << "   press Y to start again\n";

        cin >> again;

    } while (again == 89 || again == 121 );

    cout << "   Program terminated";
}