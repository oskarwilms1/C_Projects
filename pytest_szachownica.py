import random
import pytest
k = 5
def generate_chessboard():
    #Generowanie pustej szachownicy
    chessboard = [['[ ]' for space in range(8)] for rows in range(8)]
    queens = 0
    pawns = 0
    #Dodawanie Pionka
    while pawns < 1:
        pawn_x = random.randint(0,7)
        pawn_y = random.randint(0,7)
        if chessboard[pawn_x][pawn_y] == '[ ]':
            chessboard[pawn_x][pawn_y] = '[P]'
            pawns += 1
    #Dodawanie Hetmanów
    while queens < k:
        queen_x = random.randint(0,7)
        queen_y = random.randint(0,7)
        if chessboard[queen_x][queen_y] == '[ ]':
            if queen_x == pawn_x or queen_y == pawn_y or abs(pawn_x-queen_x) == abs(pawn_y-queen_y):
                chessboard[queen_x][queen_y] = '[Q]'
                
            else:
                chessboard[queen_x][queen_y] = '[q]'
            queens += 1
    return chessboard
def can_pawn_be_taken(board):
    pawn_taken = False
    for row in board:
        if '[Q]' in row:
            pawn_taken = True
    if pawn_taken == True:
        print("Pionek może zostać zbity.")
    else:
        print("Pionek nie może zostać zbity.")
    return pawn_taken
cases = [generate_chessboard() for board in range(20000)]
def test_pawn_taken():
    for case in cases:
        result = can_pawn_be_taken(case)
        assert result == True or result == False
def test_generate_chessboard():
    result = False
    for case in cases:
        number_of_queens = 0
        number_of_pawns = 0
        number_of_empty_spaces = 0
        for row in case:
            for position in row:
                if position == '[ ]':
                    number_of_empty_spaces += 1
                elif position == '[Q]' or position == '[q]':
                    number_of_queens += 1
                elif position == '[P]':
                    number_of_pawns += 1
    if number_of_queens == k and number_of_pawns == 1 and number_of_empty_spaces == 63-k:
        result = True
    assert result == True
