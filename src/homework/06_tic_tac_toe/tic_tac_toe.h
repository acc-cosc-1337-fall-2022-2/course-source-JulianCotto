//h
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef TicTacToe_H
#define TicTacToe_H


using
    std::ostream,
    std::istream,
    std::string,
    std::vector;

class TicTacToe
{
public:
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner(){return winner;};

private:
    vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    string player;
    string winner;

    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};

#endif
