// This program is a simple Fibonacci Nim game
// The one who takes the last coin wins

#include <iostream>
#include <experimental/random>
using namespace std;

int main()
{
    cout << "Welcome to Fibonacci Nim Game" << endl;
    cout<< "The rule in this game is:the number of coins removed can be any number that is at most twice the previous move"<< endl;
    int coins = experimental::randint(20, 50);
    cout << "Number of coins = " << coins << endl;

    // Taking input from players
    int player_1;
    cout<<"First player enter your coins: "<<endl;
    cin>>player_1;

    if (player_1 >= coins){
        cout << "First player enter your coins again: " << endl;
        cin >> player_1;
    }
    coins-=player_1;
    cout<<"Remining coins = "<<coins<<endl;

    while (coins >=1) {
        int player_2;
        cout << "Second player enter your coins: " << endl;
        cin >> player_2;
        if ((player_2 >= coins)||(player_2 > player_1 * 2)) {
            if (coins==1) {
                cout << "Second player won" << endl;
                break;
            }
            cout << "Second player enter your coins again: ";
            cin>>player_2;
        }

        coins-=player_2;
        cout<<"Remining coins = "<<coins<<endl;

        int player_1;
        if (coins == 1){
            cout<<"First player enter your coins:"<<endl;
            cin>>player_1;
            if (player_1 == 1)
                cout<<"First player won"<<endl;
            break;
        }

        cout<<"First player enter your coins: "<<endl;
        cin>>player_1;

        if ((player_1 >= coins)||(player_1 > player_2 * 2 )) {
            cout << "First player enter your coins again: " << endl;
            cin >> player_1;
        }
        coins-=player_1;
        cout<<"Remining coins = "<<coins<<endl;

        while (coins <= 1) {
            int player_2;
            cout << "Second player enter your coins: " << endl;
            cin >> player_2;
            if (player_2 == 1) {
                cout << "Second player won" << endl;
                return (0);


            }
        }

    }
}