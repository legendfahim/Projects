#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {

        cout << "-------------Rock-paper-scissors------------" << endl
             << "Enter R/r(Rock) or P/p(Paper) or S/s(Scissors)" << endl
             << endl;
        cout << "How many points you want to play?   (Minimum point is 5)" << endl;
        int point;
        while (1)
        {
            cout << "Point :";
            cin >> point;
            if (point < 5)
            {
                cout << "You can only play a match with point 5 or more." << endl
                     << endl;
            }

            else
            {
                cout << "Match started with point " << point << endl;
                break;
            }
        }

        int player1 = 0, player2 = 0;
        cout << endl
             << "Player 1 = " << player1 << " & Player 2 = " << player2 << endl
             << "Let's Play!!" << endl;
        while (point--)
        {
            string p1, p2;
            while (1)
            {
                cout << "Player 1: ";
                cin >> p1;
                // checkpoint

                if (p1 == "R" || p1 == "P" || p1 == "S" || p1 == "r" || p1 == "p" || p1 == "s")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Value. You can only use |R or r| |P or p| |S or s|." << endl;
                }
            }
            while (1)
            {
                cout << "Player 2: ";
                cin >> p2;
                // checkpoint

                if (p1 == "R" || p1 == "P" || p1 == "S" || p1 == "r" || p1 == "p" || p1 == "s")
                {
                    break;
                }
                else
                {
                    cout << "Wrong Value. You can only use |R or r| |P or p| |S or s|." << endl;
                }
            }
            // Check values and give points
            //  player 2 win
            if ((p1 == "R" || p1 == "r") && (p2 == "P" || p2 == "p"))
            {
                cout << "1 point of Player 2;" << endl;
                player2++;
            }
            else if ((p1 == "P" || p1 == "p") && (p2 == "S" || p2 == "s"))
            {
                cout << "1 point of Player 2;" << endl;
                player2++;
            }
            else if ((p1 == "S" || p1 == "s") && (p2 == "R" || p2 == "r"))
            {
                cout << "1 point of Player 2;" << endl;
                player2++;
            }

            else if (p1 == p2)
            {
                cout << "<<<---Draw--->>>" << endl;
            }
            else
            {
                cout << "1 point of Player 1;" << endl;
                player1++;
            }
        }
        // Print result of the game
        cout << endl
             << "<_________________________Result Board_________________________>" << endl
             << endl;
        cout << "                Player 1 = " << player1 << " & Player 2 = " << player2 << endl
             << endl;
        if (player1 > player2)
        {
            cout << "                WOW!!  Player 1 WIN the Game." << endl;
        }
        else if (player2 > player1)
        {
            cout << "                WOW!!  Player 2 WIN the Game." << endl;
        }
        else
        {
            cout << "                OPS!!  Draw the Game~" << endl;
        }
        cout << endl
             << "<_____________________________________________________>" << endl;
        cout << endl
             << "         ~~~~~~~Brothers, Let's play again!!" << endl
             << endl;
    }
}