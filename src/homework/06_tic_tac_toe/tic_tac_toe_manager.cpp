#include "tic_tac_toe_manager.h"

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    string winner = b.get_winner();
    update_winner_count(winner);
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
    for (int i = 0; i < manager.games.size(); i++)
    {
        out << manager.games[i] << '\n';
    }

    cout << "X Wins: " << manager.x_wins << '\n';
    cout << "O Wins: " << manager.o_wins << '\n';
    cout << "Ties: " << manager.ties << '\n';

    return out;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X")
    {
        x_wins += 1;
    }
    else if (winner == "O")
    {
        o_wins += 1;
    }
    else
    {
        ties += 1;
    }
}
