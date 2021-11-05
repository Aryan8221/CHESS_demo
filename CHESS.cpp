#include <iostream>
#include <string>
#include <map>

using namespace std;

void start_game(string a,string b,string c,string d,string e,string f,
                string g,string h,string i,string j,string k,string l,
                string m,string n,string o,string p,string q,string r){
    cout << a;cout << a;cout << b;cout << c;cout << d;cout << e;
    cout << f;cout << g;cout << h;cout << i;cout << j;cout << k;
    cout << l;cout << m;cout << n;cout << o;cout << p;cout << q;
    cout << r;
}
void reverse_mode(string a,string b,string c,string d,string e,string f,
                  string g,string h,string i,string j,string k,string l,
                  string m,string n,string o,string p,string q,string r){
                reverse(r.begin(), r.end());reverse(q.begin(), q.end());reverse(p.begin(), p.end());
                reverse(o.begin(), o.end());reverse(n.begin(), n.end());reverse(m.begin(), m.end());
                reverse(l.begin(), l.end());reverse(k.begin(), k.end());reverse(j.begin(), j.end());
                reverse(i.begin(), i.end());reverse(h.begin(), h.end());reverse(g.begin(), g.end());
                reverse(f.begin(), f.end());reverse(e.begin(), e.end());reverse(d.begin(), d.end());
                reverse(c.begin(), c.end());reverse(b.begin(), b.end());reverse(a.begin(), a.end());
                start_game(a, b, c, d, e, f, g, h, i, j, k, l,
               m, n, o, p, q, r);

}
void pawn_move(string COLOR, map<string, char*> fixing_memory, map<string, char> fixing_names, string from_block, string to_block,
               char a, char p, char n, char r, char b, char q, int i, int j , string b_1, string b_2, string b_3,
               string b_4, string b_5, string b_6, string b_7, string b_8, char king, bool* check_the_king_memory){

    char check_block_presenter = from_block[0]; // char(97) = a
    int ascii = check_block_presenter;
    string char_to_string(1, ascii);
    string char_to_string_after(1, ascii + 1);
    string char_to_string_before(1, ascii - 1);
    int from_block_int = (from_block[1]) - 48;

    if (fixing_names[from_block] == a) {
        if (*check_the_king_memory == true){
            cout << "you're in check.. move your king ! \n";
        }
        else {
            if (from_block == b_1 or from_block == b_2 or from_block == b_3 or from_block == b_4 or
                from_block == b_5 or from_block == b_6 or from_block == b_7 or from_block == b_8) {
                if (to_block == char_to_string + to_string(from_block_int - i)) {
                    if (fixing_names[char_to_string + to_string(from_block_int - i)] == ' ') {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else {
                        cout << "illegal move!! 1 \n";
                    }
                } else if (to_block == char_to_string + to_string(from_block_int - j)) {
                    if (fixing_names[char_to_string + to_string(from_block_int - i)] == ' '
                        and fixing_names[char_to_string + to_string(from_block_int - j)] == ' ') {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else {
                        cout << "illegal move!! 2\n";
                    }
                } else {
                    if (to_block == char_to_string_before + to_string(from_block_int - i)) { // a6
                        if (fixing_names[char_to_string_before + to_string(from_block_int - i)] != ' ') {
                            if (fixing_names[char_to_string_before + to_string(from_block_int - i)] == p or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == n or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == r or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == b or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == q) {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            } else {
                                cout << "illegal move!! 6\n";
                            }
                        }
                    }
                    if (to_block == char_to_string_after + to_string(from_block_int - i)) { //c6
                        if (fixing_names[char_to_string_after + to_string(from_block_int - i)] == p or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == n or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == r or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == b or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == q) {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        } else {
                            cout << "illegal move!! 7\n";
                        }
                    }
                }
            } else if (from_block != b_1 or from_block != b_2 or from_block != b_3 or from_block != b_4 or
                       from_block != b_5 or from_block != b_6 or from_block != b_7 or from_block != b_8) {
                if (to_block == char_to_string + to_string(from_block_int - i)) {
                    if (fixing_names[char_to_string + to_string(from_block_int - i)] == ' ') {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else {
                        cout << "illegal move!! 4\n";
                    }
                } else {
//                           cout << "illegal move!! 5\n";
                    if (to_block == char_to_string_before + to_string(from_block_int - i)) { // a6
                        if (fixing_names[char_to_string_before + to_string(from_block_int - i)] != ' ') {
                            if (fixing_names[char_to_string_before + to_string(from_block_int - i)] == p or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == n or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == r or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == b or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == q or
                                fixing_names[char_to_string_before + to_string(from_block_int - i)] == king) {
                                if (fixing_names[char_to_string_before + to_string(from_block_int - i)] == king) {
                                    *check_the_king_memory = true;
                                    cout << COLOR << " king CHECK !! \n";
                                } else {
                                    *fixing_memory[to_block] = *fixing_memory[from_block];
                                    *fixing_memory[from_block] = ' ';
                                }
                            } else {
                                cout << "illegal move!! 6\n";
                            }
                        }
                    }
                    if (to_block == char_to_string_after + to_string(from_block_int - i)) { //c6
                        if (fixing_names[char_to_string_after + to_string(from_block_int - i)] == p or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == n or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == r or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == b or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == q or
                            fixing_names[char_to_string_after + to_string(from_block_int - i)] == king) {
                            if (fixing_names[char_to_string_after + to_string(from_block_int - i)] == king) {
                                *check_the_king_memory = true;
                                cout << COLOR << " king CHECK !! \n";
                            } else {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            }
                        } else {
                            cout << "illegal move!! 7\n";
                        }
                    }
                }
            }
//        else{
//            cout << "illegal move!! 8\n";
//        }
        }
    }
}
void rook_move(string COLOR,map<string, char*> fixing_memory, map<string, char> fixing_names, string from_block, string to_block,
                     char character,char a, char b, char c, char d, char e, char king , bool* check_the_king_memory, bool* legal_memory){

    if (fixing_names[from_block] == character){
        if (*check_the_king_memory == true){
            cout << "you're in check.. move your king ! \n";
        }
        else {
            char a_1 = from_block[0];
            int ascii_char_from_block = a_1; //100
            string from_block_string(1, a_1);// from_block = d5 ----> from_block_string = "d"
            int from_block_int = (from_block[1]) - 48; // ascii 1 = 49

            char a_2 = to_block[0];
            int ascii_char_to_block = a_2; // 97
            string to_block_string(1, a_2);
            int to_block_int = (to_block[1]) - 48;

//        bool check_the_king = false;

            if (from_block_int == to_block_int) {
                bool check = false;
                bool opponent_piece_is_under_attack = false;
                bool a_piece_is_between_me_and_my_opponent = false;

                if (ascii_char_from_block < ascii_char_to_block) {
                    int frame = ascii_char_to_block - ascii_char_from_block;
                    for (int i = 0; i < frame; i++) {
                        string asc(1, (char) ascii_char_to_block);
                        if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                            check = true;
                            ascii_char_to_block--;
                        } else {
                            check = false;
                            if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                fixing_names[to_block] == c or
                                fixing_names[to_block] == d or fixing_names[to_block] == e or
                                fixing_names[to_block] == king) {
                                opponent_piece_is_under_attack = true;
                            }
                            ascii_char_to_block--;
                            break;
                        }
                    }
                    frame = ascii_char_to_block - ascii_char_from_block;
                    for (int i = 0; i < frame; i++) {
                        string asc(1, (char) ascii_char_to_block);
                        if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                            a_piece_is_between_me_and_my_opponent = false;
                            ascii_char_to_block--;
                        } else {
                            a_piece_is_between_me_and_my_opponent = true;
                            break;
                        }
                    }
                    if (check == true) {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == false) {
                        if (fixing_names[to_block] == king) {
                            *check_the_king_memory = true;
                            cout << COLOR << " king CHECK !! \n";
                        } else {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        }
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == true) {
                        cout << "illegal move! \n";
                    } else {
                        cout << "illegal move! \n";
                    }
                } else if (ascii_char_to_block < ascii_char_from_block) {
                    int frame = ascii_char_from_block - ascii_char_to_block;
                    for (int i = 0; i < frame; i++) {
                        string ass(1, (char) ascii_char_to_block);
                        if (fixing_names[ass + to_string(to_block_int)] == ' ') {
                            check = true;
                            ascii_char_to_block++;
                        } else {
                            check = false;
                            if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                fixing_names[to_block] == c or
                                fixing_names[to_block] == d or fixing_names[to_block] == e or
                                fixing_names[to_block] == king) {
                                opponent_piece_is_under_attack = true;
                            }
                            ascii_char_to_block++;
                            break;
                        }
                    }
                    frame = ascii_char_from_block - ascii_char_to_block;
                    for (int i = 0; i < frame; i++) {
                        string ass(1, (char) ascii_char_to_block);
                        if (fixing_names[ass + to_string(to_block_int)] == ' ') {
                            a_piece_is_between_me_and_my_opponent = false;
                            ascii_char_to_block++;
                        } else {
                            a_piece_is_between_me_and_my_opponent = true;
                            break;
                        }
                    }
                    if (check == true) {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == false) {
                        if (fixing_names[to_block] == king) {
                            *check_the_king_memory = true;
                            cout << COLOR << " king CHECK !! \n";
                        } else {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        }
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == true) {
                        cout << "illegal move! \n";
                    } else {
                        cout << "illegal move! \n";
                    }
                }
            }
            else if (from_block_string == to_block_string) {
                bool check = false;
                bool opponent_piece_is_under_attack = false;
                bool a_piece_is_between_me_and_my_opponent = false;

                if (from_block_int < to_block_int) {
                    int frame = to_block_int - from_block_int;
                    for (int i = 0; i < frame; i++) {
                        if (fixing_names[to_block_string + to_string(to_block_int)] == ' ') {
                            check = true;
                            to_block_int--;
                        } else {
                            check = false;
                            if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                fixing_names[to_block] == c or
                                fixing_names[to_block] == d or fixing_names[to_block] == e or
                                fixing_names[to_block] == king) {
                                opponent_piece_is_under_attack = true;
                            }
                            to_block_int--;
                            break;
                        }
                    }
                    frame = to_block_int - from_block_int;
                    for (int i = 0; i < frame; i++) {
                        if (fixing_names[to_block_string + to_string(to_block_int)] == ' ') {
                            a_piece_is_between_me_and_my_opponent = false;
                            to_block_int--;
                        } else {
                            a_piece_is_between_me_and_my_opponent = true;
                            break;
                        }
                    }
                    if (check == true) {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == false) {
                        if (fixing_names[to_block] == king) {
                            *check_the_king_memory = true;
                            cout << COLOR << " king CHECK !! \n";
                        } else {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        }
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == true) {
                        cout << "illegal move! \n";
                    } else {
                        cout << "illegal move! \n";
                    }
                } else if (from_block_int > to_block_int) {
                    int frame = from_block_int - to_block_int;
                    for (int i = 0; i < frame; i++) {
                        if (fixing_names[to_block_string + to_string(to_block_int)] == ' ') {
                            check = true;
                            to_block_int++;
                        } else {
                            check = false;
                            if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                fixing_names[to_block] == c or
                                fixing_names[to_block] == d or fixing_names[to_block] == e or
                                fixing_names[to_block] == king) {
                                opponent_piece_is_under_attack = true;
                            }
                            to_block_int++;
                            break;
                        }
                    }
                    frame = from_block_int - to_block_int;
                    for (int i = 0; i < frame; i++) {
                        if (fixing_names[to_block_string + to_string(to_block_int)] == ' ') {
                            a_piece_is_between_me_and_my_opponent = false;
                            to_block_int++;
                        } else {
                            a_piece_is_between_me_and_my_opponent = true;
                            break;
                        }
                    }
                    if (check == true) {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == false) {
                        if (fixing_names[to_block] == king) {
                            *check_the_king_memory = true;
                            cout << COLOR << " king CHECK !! \n";
                        } else {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        }
                    } else if (check == false and opponent_piece_is_under_attack == true and
                               a_piece_is_between_me_and_my_opponent == true) {
                        if (fixing_names[to_block] != king) {
                            cout << "illegal move! \n";
                        }
                    } else {
                        cout << "illegal move! \n";
                    }
                }
            }
            else {
                if (fixing_names[to_block] != king) {
                    cout << "illegal move! \n";
                }
                *legal_memory = false;
            }
        }
    }
}
void knight_move (string COLOR, map<string, char*> fixing_memory, map<string, char> fixing_names, string from_block, string to_block,
                        char character,char a, char b, char c, char d, char e, char king, bool* check_the_king_memory, bool* legal_memory){
    if (fixing_names[from_block] == character){
        if (*check_the_king_memory == true){
            cout << "you're in check.. move your king ! \n";
        }
        else {
            char a_1 = from_block[0];
            int ascii_char_from_block = a_1; //100
            string from_block_string(1, a_1);// from_block = d5 ----> from_block_string = "d"
            int from_block_int = (from_block[1]) - 48; // ascii 1 = 49

            char a_2 = to_block[0];
            int ascii_char_to_block = a_2; // 97
            string to_block_string(1, a_2);
            int to_block_int = (to_block[1]) - 48;

            string right_far(1, a_1 + 2);
            string left_far(1, a_1 - 2);
            string right_near(1, a_1 + 1);
            string left_near(1, a_1 - 1);

            if (to_block == right_far + to_string(from_block_int + 1) or
                to_block == right_far + to_string(from_block_int - 1) or
                to_block == left_far + to_string(from_block_int + 1) or
                to_block == left_far + to_string(from_block_int - 1) or
                to_block == right_near + to_string(from_block_int + 2) or
                to_block == right_near + to_string(from_block_int - 2) or
                to_block == left_near + to_string(from_block_int + 2) or
                to_block == left_near + to_string(from_block_int - 2)) {
                if (fixing_names[to_block] == ' ' or fixing_names[to_block] == a or fixing_names[to_block] == b or
                    fixing_names[to_block] == c or fixing_names[to_block] == d or fixing_names[to_block] == e or
                    fixing_names[to_block] == king) {
                    if (fixing_names[to_block] == king) {
                        *check_the_king_memory = true;
                        cout << COLOR << " king CHECK !! \n";
                    } else {
                        *fixing_memory[to_block] = *fixing_memory[from_block];
                        *fixing_memory[from_block] = ' ';
                    }
                } else {
                    if (fixing_names[to_block] != king) {
                        cout << "illegal move! \n";
                    }
                }
            }
            else {
                *legal_memory = false;
                cout << "illegal move! \n";
            }
        }
    }
}
void bishop_move (string COLOR, map<string, char*> fixing_memory, map<string, char> fixing_names, string from_block, string to_block,
                        char character,char a, char b, char c, char d, char e, char king, bool* check_the_king_memory, bool* legal_memory) {
    if (fixing_names[from_block] == character) {

        if (*check_the_king_memory == true) {
            cout << "you're in check.. move your king ! \n";
        }
        else{
            char a_1 = from_block[0];
            int ascii_char_from_block = a_1; //100
            string from_block_string(1, a_1);// from_block = d5 ----> from_block_string = "d"
            int from_block_int = (from_block[1]) - 48; // ascii 1 = 49

            char a_2 = to_block[0];
            int ascii_char_to_block = a_2; // 97
            string to_block_string(1, a_2);
            int to_block_int = (to_block[1]) - 48;

//            bool check_the_king = false;

            string diag_right_1(1, a_1 - 1);
            string diag_right_2(1, a_1 - 2);
            string diag_right_3(1, a_1 - 3);
            string diag_right_4(1, a_1 - 4);
            string diag_right_5(1, a_1 - 5);
            string diag_right_6(1, a_1 - 6);
            string diag_right_7(1, a_1 - 7);
            string diag_right_8(1, a_1 + 1);
            string diag_right_9(1, a_1 + 2);
            string diag_right_10(1, a_1 + 3);
            string diag_right_11(1, a_1 + 4);
            string diag_right_12(1, a_1 + 5);
            string diag_right_13(1, a_1 + 6);
            string diag_right_14(1, a_1 + 7);


            if (to_block == diag_right_1 + to_string(from_block_int - 1) or
                to_block == diag_right_2 + to_string(from_block_int - 2) or
                to_block == diag_right_3 + to_string(from_block_int - 3) or
                to_block == diag_right_4 + to_string(from_block_int - 4) or
                to_block == diag_right_5 + to_string(from_block_int - 5) or
                to_block == diag_right_6 + to_string(from_block_int - 6) or
                to_block == diag_right_7 + to_string(from_block_int - 7) or
                to_block == diag_right_8 + to_string(from_block_int + 1) or
                to_block == diag_right_9 + to_string(from_block_int + 2) or
                to_block == diag_right_10 + to_string(from_block_int + 3) or
                to_block == diag_right_11 + to_string(from_block_int + 4) or
                to_block == diag_right_12 + to_string(from_block_int + 5) or
                to_block == diag_right_13 + to_string(from_block_int + 6) or
                to_block == diag_right_14 + to_string(from_block_int + 7) or
                /* and */to_block == diag_right_1 + to_string(from_block_int + 1) or
                to_block == diag_right_2 + to_string(from_block_int + 2) or
                to_block == diag_right_3 + to_string(from_block_int + 3) or
                to_block == diag_right_4 + to_string(from_block_int + 4) or
                to_block == diag_right_5 + to_string(from_block_int + 5) or
                to_block == diag_right_6 + to_string(from_block_int + 6) or
                to_block == diag_right_7 + to_string(from_block_int + 7) or
                to_block == diag_right_8 + to_string(from_block_int - 1) or
                to_block == diag_right_9 + to_string(from_block_int - 2) or
                to_block == diag_right_10 + to_string(from_block_int - 3) or
                to_block == diag_right_11 + to_string(from_block_int - 4) or
                to_block == diag_right_12 + to_string(from_block_int - 5) or
                to_block == diag_right_13 + to_string(from_block_int - 6) or
                to_block == diag_right_14 + to_string(from_block_int - 7)) {
                if (ascii_char_to_block < ascii_char_from_block) {
                    bool check = false;
                    bool opponent_piece_is_under_attack = false;
                    bool a_piece_is_between_me_and_my_opponent = false;
                    int frame = ascii_char_from_block - ascii_char_to_block;

                    if (to_block_int > from_block_int) {
                        for (int i = 1; i <= frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                                check = true;
                                ascii_char_to_block++;
                                to_block_int = to_block_int - i;
                            } else {
                                check = false;
                                if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                    fixing_names[to_block] == c or
                                    fixing_names[to_block] == d or fixing_names[to_block] == e or
                                    fixing_names[to_block] == king) {
                                    opponent_piece_is_under_attack = true;
                                }
                                ascii_char_to_block++;
                                to_block_int = to_block_int - i;
                                break;
                            }
                        }
                        frame = ascii_char_from_block - ascii_char_to_block;
                        for (int i = 0; i < frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int - i)] == ' ') {
                                a_piece_is_between_me_and_my_opponent = false;
                                ascii_char_to_block++;
                            } else {
                                a_piece_is_between_me_and_my_opponent = true;
                                break;
                            }
                        }
                        if (check == true) {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == false) {
                            if (fixing_names[to_block] == king) {
                                *check_the_king_memory = true;
                                cout << COLOR << " king CHECK !! \n";
                            } else {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            }
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == true) {
                            if (fixing_names[to_block] != king) {
                                cout << "illegal move 1! \n";
                            }
                        } else {
                            cout << "illegal move 2! \n";
                        }
                    } else if (to_block_int < from_block_int) {
                        for (int i = 1; i <= frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                                check = true;
                                ascii_char_to_block++;
                                to_block_int = to_block_int + i;
                            } else {
                                check = false;
                                if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                    fixing_names[to_block] == c or
                                    fixing_names[to_block] == d or fixing_names[to_block] == e or
                                    fixing_names[to_block] == king) {
                                    opponent_piece_is_under_attack = true;
                                }
                                ascii_char_to_block++;
                                to_block_int = to_block_int + i;
                                break;
                            }
                        }
                        frame = ascii_char_from_block - ascii_char_to_block;
                        for (int i = 0; i < frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int + i)] == ' ') {
                                a_piece_is_between_me_and_my_opponent = false;
                                ascii_char_to_block++;
                            } else {
                                a_piece_is_between_me_and_my_opponent = true;
                                break;
                            }
                        }
                        if (check == true) {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == false) {
                            if (fixing_names[to_block] == king) {
                                *check_the_king_memory = true;
                                cout << COLOR << " king CHECK !! \n";
                            } else {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            }
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == true) {
                            if (fixing_names[to_block] != king) {
                                cout << "illegal move 3! \n";
                            }
                        } else {
                            cout << "illegal move 4! \n";
                        }
                    }
                } else if (ascii_char_to_block > ascii_char_from_block) {
                    bool check = false;
                    bool opponent_piece_is_under_attack = false;
                    bool a_piece_is_between_me_and_my_opponent = false;
                    int frame = ascii_char_to_block - ascii_char_from_block;

                    if (to_block_int > from_block_int) {
                        for (int i = 1; i <= frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                                check = true;
                                ascii_char_to_block--;
                                to_block_int = to_block_int - i;
                            } else {
                                check = false;
                                if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                    fixing_names[to_block] == c or
                                    fixing_names[to_block] == d or fixing_names[to_block] == e or
                                    fixing_names[to_block] == king) {
                                    opponent_piece_is_under_attack = true;
                                }
                                ascii_char_to_block--;
                                to_block_int = to_block_int - i;
                                break;
                            }
                        }
                        frame = ascii_char_to_block - ascii_char_from_block;
                        for (int i = 0; i < frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int - i)] == ' ') {
                                a_piece_is_between_me_and_my_opponent = false;
                                ascii_char_to_block--;
                            } else {
                                a_piece_is_between_me_and_my_opponent = true;
                                break;
                            }
                        }
                        if (check == true) {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == false) {
                            if (fixing_names[to_block] == king) {
                                *check_the_king_memory = true;
                                cout << COLOR << " king CHECK !! \n";
                            } else {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            }
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == true) {
                            if (fixing_names[to_block] != king) {
                                cout << "illegal move 5! \n";
                            }
                        } else {
                            cout << "illegal move 6! \n";
                        }
                    } else if (to_block_int < from_block_int) {
                        for (int i = 1; i <= frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int)] == ' ') {
                                check = true;
                                ascii_char_to_block--;
                                to_block_int = to_block_int + i;
                            } else {
                                check = false;
                                if (fixing_names[to_block] == a or fixing_names[to_block] == b or
                                    fixing_names[to_block] == c or
                                    fixing_names[to_block] == d or fixing_names[to_block] == e or
                                    fixing_names[to_block] == king) {
                                    opponent_piece_is_under_attack = true;
                                }
                                ascii_char_to_block--;
                                to_block_int = to_block_int + i;
                                break;
                            }
                        }
                        frame = ascii_char_to_block - ascii_char_from_block;
                        for (int i = 0; i < frame; i++) {
                            string asc(1, (char) ascii_char_to_block);
                            if (fixing_names[asc + to_string(to_block_int + i)] == ' ') {
                                a_piece_is_between_me_and_my_opponent = false;
                                ascii_char_to_block--;
                            } else {
                                a_piece_is_between_me_and_my_opponent = true;
                                break;
                            }
                        }
                        if (check == true) {
                            *fixing_memory[to_block] = *fixing_memory[from_block];
                            *fixing_memory[from_block] = ' ';
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == false) {
                            if (fixing_names[to_block] == king) {
                                *check_the_king_memory = true;
                                cout << COLOR << " king CHECK !! \n";
                            } else {
                                *fixing_memory[to_block] = *fixing_memory[from_block];
                                *fixing_memory[from_block] = ' ';
                            }
                        } else if (check == false and opponent_piece_is_under_attack == true and
                                   a_piece_is_between_me_and_my_opponent == true) {
                            cout << "illegal move 7! \n";
                        } else {
                            cout << "illegal move 8! \n";
                        }
                    }
                }
            }
            else {
                if (fixing_names[to_block] != king) {
                    cout << "illegal move 9! \n";
                }
                *legal_memory = false;
            }
        }
    }
}
void queen_move(string COLOR, map<string, char*> fixing_memory, map<string, char> fixing_names, string from_block, string to_block,
                      char character,char a, char b, char c, char d, char e, char king, bool* check_the_king_memory, bool* legal_memory){

    char a_1 = from_block[0];
    int ascii_char_from_block = a_1; //100
    string from_block_string(1, a_1);// from_block = d5 ----> from_block_string = "d"
    int from_block_int = (from_block[1]) - 48; // ascii 1 = 49

    char a_2 = to_block[0];
    int ascii_char_to_block = a_2; // 97
    string to_block_string(1, a_2);
    int to_block_int = (to_block[1]) - 48;

    string diag_right_1(1, a_1 - 1);
    string diag_right_2(1, a_1 - 2);
    string diag_right_3(1, a_1 - 3);
    string diag_right_4(1, a_1 - 4);
    string diag_right_5(1, a_1 - 5);
    string diag_right_6(1, a_1 - 6);
    string diag_right_7(1, a_1 - 7);
    string diag_right_8(1, a_1 + 1);
    string diag_right_9(1, a_1 + 2);
    string diag_right_10(1, a_1 + 3);
    string diag_right_11(1, a_1 + 4);
    string diag_right_12(1, a_1 + 5);
    string diag_right_13(1, a_1 + 6);
    string diag_right_14(1, a_1 + 7);

    if (from_block_string == to_block_string or from_block_int == to_block_int){
        rook_move(COLOR, fixing_memory, fixing_names, from_block, to_block, character, a, b, c, d, e, king, check_the_king_memory, legal_memory);
    }
    else if(to_block == diag_right_1 + to_string(from_block_int - 1) or to_block == diag_right_2 + to_string(from_block_int - 2) or
            to_block == diag_right_3 + to_string(from_block_int - 3) or to_block == diag_right_4 + to_string(from_block_int - 4) or
            to_block == diag_right_5 + to_string(from_block_int - 5) or to_block == diag_right_6 + to_string(from_block_int - 6) or
            to_block == diag_right_7 + to_string(from_block_int - 7) or to_block == diag_right_8 + to_string(from_block_int + 1) or
            to_block == diag_right_9 + to_string(from_block_int + 2) or to_block == diag_right_10 + to_string(from_block_int + 3) or
            to_block == diag_right_11 + to_string(from_block_int + 4) or to_block == diag_right_12 + to_string(from_block_int + 5) or
            to_block == diag_right_13 + to_string(from_block_int + 6) or to_block == diag_right_14 + to_string(from_block_int + 7) or
            /* and */to_block == diag_right_1 + to_string(from_block_int + 1) or to_block == diag_right_2 + to_string(from_block_int + 2) or
            to_block == diag_right_3 + to_string(from_block_int + 3) or to_block == diag_right_4 + to_string(from_block_int + 4) or
            to_block == diag_right_5 + to_string(from_block_int + 5) or to_block == diag_right_6 + to_string(from_block_int + 6) or
            to_block == diag_right_7 + to_string(from_block_int + 7) or to_block == diag_right_8 + to_string(from_block_int - 1) or
            to_block == diag_right_9 + to_string(from_block_int - 2) or to_block == diag_right_10 + to_string(from_block_int - 3) or
            to_block == diag_right_11 + to_string(from_block_int - 4) or to_block == diag_right_12 + to_string(from_block_int - 5) or
            to_block == diag_right_13 + to_string(from_block_int - 6) or to_block == diag_right_14 + to_string(from_block_int - 7)){
        bishop_move(COLOR, fixing_memory, fixing_names, from_block, to_block, character, a, b, c, d, e, king, check_the_king_memory, legal_memory);
    }
    else{
        cout << "illegal move! \n";
    }
}
void check_king(map<string, char*> fixing_memory, map<string, char> fixing_names, map<char, string> check_king_pos,
                char* pos[8][8],string from_block, string to_block, bool* check_the_king_memory, bool* legal_memory){

    string my_to_block = to_block;
    string my_from_block = from_block;

    if (fixing_names[my_from_block] == 'r' or fixing_names[my_from_block] == 'p' or fixing_names[my_from_block] == 'n'
        or fixing_names[my_from_block] == 'q' or fixing_names[my_from_block] == 'b') {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (*pos[i][j] == 'K') {
                    to_block = check_king_pos[*pos[i][j]];
                }
            }
        }
    }
    else{
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (*pos[i][j] == 'k') {
                    to_block = check_king_pos[*pos[i][j]];
                }
            }
        }
    }
    if (*check_the_king_memory == false and *legal_memory == true) {
        if (fixing_names[my_from_block] == 'r') {
            rook_move("White", fixing_memory, fixing_names, my_to_block,
                      to_block, ' ', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'R') {
            rook_move("Black", fixing_memory, fixing_names, my_to_block,
                      to_block, ' ', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'n') {
            knight_move("White", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'N') {
            knight_move("Black", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'b') {
            bishop_move("White", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'B') {
            bishop_move("Black", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'q') {
            queen_move("White", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'Q') {
            queen_move("Black", fixing_memory, fixing_names, my_to_block,
                        to_block, ' ', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);
        }
        if (fixing_names[my_from_block] == 'p') {
            pawn_move("White", fixing_memory, fixing_names, my_to_block,
                      to_block, ' ', 'P', 'N', 'R', 'B', 'Q', 1, 2,
                      "a7", "b7", "c7", "d7",
                      "e7", "f7", "g7", "h7", 'K', check_the_king_memory);
        }
        if (fixing_names[my_from_block] == 'P') {
            pawn_move("Black", fixing_memory, fixing_names, my_to_block,
                      to_block, ' ', 'p', 'n', 'r', 'b', 'q', -1, -2,
                      "a2", "b2", "c2", "d2",
                      "e2", "f2", "g2", "h2", 'k', check_the_king_memory);
        }
    }
//    *check_the_king_memory = true;  IT WORKSSSSSS!!!!!!
}
void check_if_other_pieces_check_the_king(map<string, char*> fixing_memory, map<string, char> fixing_names, map<char, string> check_king_pos, char* pos[8][8]
                                          ,string from_block, string to_block, bool* check_the_king_memory, char king, char pawn, char knight,
                                          char bishop, char rook, char queen){
    string piece_block;
    string my_from_block = from_block;

    if (fixing_names[my_from_block] == king) {
        // rook
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (*pos[i][j] == rook) {
                    piece_block = check_king_pos[*pos[i][j]];
                    break;
                }
            }
        }
//        rook_move("White", fixing_memory, fixing_names, piece_block,
//                   my_from_block, 'r', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory);

//        check_king(fixing_memory,fixing_names,check_king_pos, pos, from_block, my_from_block, check_the_king_memory);
    }
}
void king_move(string COLOR, map<string, char*> fixing_memory, map<string, char> fixing_names, map<char, string> check_king_pos, char* pos[8][8], string from_block, string to_block,
               char character,char pawn, char knight, char bishop, char rook, char queen, char king, bool* check_the_king_memory){
    if (fixing_names[from_block] == character){

        char check_block_presenter = from_block[0]; // char(97) = a
        int ascii = check_block_presenter;
        string char_to_string(1, ascii);
        string char_to_string_after(1, ascii + 1);
        string char_to_string_before(1, ascii - 1);
        int from_block_int = (from_block[1]) - 48;

        string up = char_to_string + to_string(from_block_int + 1);
        string down = char_to_string + to_string(from_block_int - 1);
        string left = char_to_string_before + to_string(from_block_int);
        string right = char_to_string_after + to_string(from_block_int);
        string right_up = char_to_string_after + to_string(from_block_int + 1);
        string right_down = char_to_string_after + to_string(from_block_int - 1);
        string left_up = char_to_string_before + to_string(from_block_int + 1);
        string left_down = char_to_string_before + to_string(from_block_int - 1);

        if (to_block == up or to_block == down or to_block == left or to_block == right or
            to_block == right_up or to_block == right_down or to_block == left_up or to_block == left_down){
            if (fixing_names[to_block] == ' ' or fixing_names[to_block] == pawn or fixing_names[to_block] == knight or fixing_names[to_block] == bishop
                or fixing_names[to_block] == rook or fixing_names[to_block] == queen){
                check_if_other_pieces_check_the_king(fixing_memory, fixing_names, check_king_pos, pos,
                                                     from_block, to_block, check_the_king_memory,king, pawn, knight, bishop, rook, queen);
                if (*check_the_king_memory == false){
                    *fixing_memory[to_block] = *fixing_memory[from_block];
                    *fixing_memory[from_block] = ' ';
                }
                else{
                    cout << "cannot move king to this square !";
                }
            }
            else{
                cout << "illegal move ! \n";
            }
        }
        else{
            cout << "illegal move ! \n";
        }
    }
}
void check_block(map<string, char> fixing_names, string from_block, string to_block,map<string, char*> fixing_memory,
                 string a,string b,string c,string d,string e,string f,
                 string g,string h,string i,string j,string k,string l,
                 string m,string n,string o,string p,string q,string r, char* pos[8][8], map<char, string> check_king_pos, bool* check_the_king_memory, bool* legal_memory) {

    pawn_move("White", fixing_memory, fixing_names, from_block,
              to_block, 'p', 'P', 'N', 'R', 'B', 'Q', 1, 2,
              "a7", "b7", "c7", "d7",
              "e7", "f7", "g7", "h7", 'K', check_the_king_memory);

    pawn_move("Black", fixing_memory, fixing_names, from_block,
              to_block, 'P', 'p', 'n', 'r', 'b', 'q', -1, -2,
              "a2", "b2", "c2", "d2",
              "e2", "f2", "g2", "h2", 'k', check_the_king_memory);

    rook_move("White", fixing_memory, fixing_names, from_block,
              to_block, 'r', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);

    rook_move("Black", fixing_memory, fixing_names, from_block,
              to_block, 'R', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);

    bishop_move("White", fixing_memory, fixing_names, from_block,
                to_block, 'b', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);

    bishop_move("Black", fixing_memory, fixing_names, from_block,
                to_block, 'B', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);

    knight_move("White", fixing_memory, fixing_names, from_block,
                to_block, 'n', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);

    knight_move("Black", fixing_memory, fixing_names, from_block,
                to_block, 'N', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);

    queen_move("White", fixing_memory, fixing_names, from_block,
               to_block, 'q', 'P', 'N', 'B', 'R', 'Q', 'K', check_the_king_memory, legal_memory);

    queen_move("Black", fixing_memory, fixing_names, from_block,
               to_block, 'Q', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory, legal_memory);

//    king_move("Black", fixing_memory, fixing_names, check_king_pos,
//              pos, from_block, to_block, 'K', 'p', 'n', 'b', 'r', 'q', 'k', check_the_king_memory);

    check_king(fixing_memory,fixing_names,check_king_pos, pos, from_block, to_block, check_the_king_memory, legal_memory);

}
int main(){
    string  a = " ------------------------------------------------- \n";
    string  b ="8 |  r  |  n  |  b  |  q  |  k  |  b  |  n  |  r  |\n";
    string  c ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  d ="7 |  p  |  p  |  p  |  p  |  p  |  p  |  p  |  p  |\n";
    string  e ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  f ="6 |     |     |     |     |     |     |     |     |\n";
    string  g ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  h ="5 |     |     |     |     |     |     |     |     |\n";
    string  i ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  j ="4 |     |     |     |     |     |     |     |     |\n";
    string  k ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  l ="3 |     |     |     |     |     |     |     |     |\n";
    string  m ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  n ="2 |  P  |  P  |  P  |  P  |  P  |  P  |  P  |  P  |\n";
    string  o ="  |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    string  p ="1 |  R  |  N  |  B  |  Q  |  K  |  B  |  N  |  R  |\n";
    string  q ="  ------------------------------------------------- \n";
    string  r ="     a     b     c     d     e     f     g     h   \n";

    start_game(a,b,c,d,e,f,
               g,h,i,j,k,l,
               m,n,o,p,q,r);

    char* pos[8][8] = {{&b[5],&b[11],&b[17],&b[23],&b[29],&b[35],&b[41],&b[47]},
                         {&d[5],&d[11],&d[17],&d[23],&d[29],&d[35],&d[41],&d[47]},
                         {&f[5],&f[11],&f[17],&f[23],&f[29],&f[35],&f[41],&f[47]},
                         {&h[5],&h[11],&h[17],&h[23],&h[29],&h[35],&h[41],&h[47]},
                         {&j[5],&j[11],&j[17],&j[23],&j[29],&j[35],&j[41],&j[47]},
                         {&l[5],&l[11],&l[17],&l[23],&l[29],&l[35],&l[41],&l[47]},
                         {&n[5],&n[11],&n[17],&n[23],&n[29],&n[35],&n[41],&n[47]},
                         {&p[5],&p[11],&p[17],&p[23],&p[29],&p[35],&p[41],&p[47]}};


    map<string, char*> fixing_memory = {{"a8", pos[0][0]},{"b8", pos[0][1]},{"c8", pos[0][2]},{"d8", pos[0][3]},
                                        {"e8", pos[0][4]},{"f8", pos[0][5]},{"g8", pos[0][6]},{"h8", pos[0][7]},
                                        {"a7", pos[1][0]},{"b7", pos[1][1]},{"c7", pos[1][2]},{"d7", pos[1][3]},
                                        {"e7", pos[1][4]},{"f7", pos[1][5]},{"g7", pos[1][6]},{"h7", pos[1][7]},
                                        {"a6", pos[2][0]},{"b6", pos[2][1]},{"c6", pos[2][2]},{"d6", pos[2][3]},
                                        {"e6", pos[2][4]},{"f6", pos[2][5]},{"g6", pos[2][6]},{"h6", pos[2][7]},
                                        {"a5", pos[3][0]},{"b5", pos[3][1]},{"c5", pos[3][2]},{"d5", pos[3][3]},
                                        {"e5", pos[3][4]},{"f5", pos[3][5]},{"g5", pos[3][6]},{"h5", pos[3][7]},
                                        {"a4", pos[4][0]},{"b4", pos[4][1]},{"c4", pos[4][2]},{"d4", pos[4][3]},
                                        {"e4", pos[4][4]},{"f4", pos[4][5]},{"g4", pos[4][6]},{"h4", pos[4][7]},
                                        {"a3", pos[5][0]},{"b3", pos[5][1]},{"c3", pos[5][2]},{"d3", pos[5][3]},
                                        {"e3", pos[5][4]},{"f3", pos[5][5]},{"g3", pos[5][6]},{"h3", pos[5][7]},
                                        {"a2", pos[6][0]},{"b2", pos[6][1]},{"c2", pos[6][2]},{"d2", pos[6][3]},
                                        {"e2", pos[6][4]},{"f2", pos[6][5]},{"g2", pos[6][6]},{"h2", pos[6][7]},
                                        {"a1", pos[7][0]},{"b1", pos[7][1]},{"c1", pos[7][2]},{"d1", pos[7][3]},
                                        {"e1", pos[7][4]},{"f1", pos[7][5]},{"g1", pos[7][6]},{"h1", pos[7][7]},
    };
    map<string, char> fixing_names = {{"a8", *pos[0][0]},{"b8", *pos[0][1]},{"c8", *pos[0][2]},{"d8", *pos[0][3]},
                                      {"e8", *pos[0][4]},{"f8", *pos[0][5]},{"g8", *pos[0][6]},{"h8", *pos[0][7]},
                                      {"a7", *pos[1][0]},{"b7", *pos[1][1]},{"c7", *pos[1][2]},{"d7", *pos[1][3]},
                                      {"e7", *pos[1][4]},{"f7", *pos[1][5]},{"g7", *pos[1][6]},{"h7", *pos[1][7]},
                                      {"a6", *pos[2][0]},{"b6", *pos[2][1]},{"c6", *pos[2][2]},{"d6", *pos[2][3]},
                                      {"e6", *pos[2][4]},{"f6", *pos[2][5]},{"g6", *pos[2][6]},{"h6", *pos[2][7]},
                                      {"a5", *pos[3][0]},{"b5", *pos[3][1]},{"c5", *pos[3][2]},{"d5", *pos[3][3]},
                                      {"e5", *pos[3][4]},{"f5", *pos[3][5]},{"g5", *pos[3][6]},{"h5", *pos[3][7]},
                                      {"a4", *pos[4][0]},{"b4", *pos[4][1]},{"c4", *pos[4][2]},{"d4", *pos[4][3]},
                                      {"e4", *pos[4][4]},{"f4", *pos[4][5]},{"g4", *pos[4][6]},{"h4", *pos[4][7]},
                                      {"a3", *pos[5][0]},{"b3", *pos[5][1]},{"c3", *pos[5][2]},{"d3", *pos[5][3]},
                                      {"e3", *pos[5][4]},{"f3", *pos[5][5]},{"g3", *pos[5][6]},{"h3", *pos[5][7]},
                                      {"a2", *pos[6][0]},{"b2", *pos[6][1]},{"c2", *pos[6][2]},{"d2", *pos[6][3]},
                                      {"e2", *pos[6][4]},{"f2", *pos[6][5]},{"g2", *pos[6][6]},{"h2", *pos[6][7]},
                                      {"a1", *pos[7][0]},{"b1", *pos[7][1]},{"c1", *pos[7][2]},{"d1", *pos[7][3]},
                                      {"e1", *pos[7][4]},{"f1", *pos[7][5]},{"g1", *pos[7][6]},{"h1", *pos[7][7]},
    };
    map<char, string> check_king_pos = {{ *pos[0][0], "a8"},{ *pos[0][1], "b8"},{ *pos[0][2], "c8"},{ *pos[0][3], "d8"},
                                        { *pos[0][4],"e8"},{ *pos[0][5], "f8"},{ *pos[0][6], "g8"},{ *pos[0][7], "h8"},
                                        { *pos[1][0], "a7"},{ *pos[1][1], "b7"},{ *pos[1][2], "c7"},{ *pos[1][3], "d7"},
                                        { *pos[1][4],"e7"},{ *pos[1][5], "f7"},{ *pos[1][6], "g7"},{ *pos[1][7], "h7"},
                                        { *pos[2][0], "a6"},{ *pos[2][1], "b6"},{ *pos[2][2], "c6"},{ *pos[2][3], "d6"},
                                        { *pos[2][4],"e6"},{ *pos[2][5], "f6"},{ *pos[2][6], "g6"},{ *pos[2][7], "h6"},
                                        { *pos[3][0], "a5"},{ *pos[3][1], "b5"},{ *pos[3][2], "c5"},{ *pos[3][3], "d5"},
                                        { *pos[3][4],"e5"},{ *pos[3][5], "f5"},{ *pos[3][6], "g5"},{ *pos[3][7], "h5"},
                                        { *pos[4][0], "a4"},{ *pos[4][1], "b4"},{ *pos[4][2], "c4"},{ *pos[4][3], "d4"},
                                        { *pos[4][4],"e4"},{ *pos[4][5], "f4"},{ *pos[4][6], "g4"},{ *pos[4][7], "h4"},
                                        { *pos[5][0], "a3"},{ *pos[5][1], "b3"},{ *pos[5][2], "c3"},{ *pos[5][3], "d3"},
                                        { *pos[5][4],"e3"},{ *pos[5][5], "f3"},{ *pos[5][6], "g3"},{ *pos[5][7], "h3"},
                                        { *pos[6][0], "a2"},{ *pos[6][1], "b2"},{ *pos[6][2], "c2"},{ *pos[6][3], "d2"},
                                        { *pos[6][4],"e2"},{ *pos[6][5], "f2"},{ *pos[6][6], "g2"},{ *pos[6][7], "h2"},
                                        { *pos[7][0], "a1"},{ *pos[7][1], "b1"},{ *pos[7][2], "c1"},{ *pos[7][3], "d1"},
                                        { *pos[7][4],"e1"},{ *pos[7][5], "f1"},{ *pos[7][6], "g1"},{ *pos[7][7], "h1"},
    };

    bool check_the_king = false;
    bool* check_the_king_memory = &check_the_king;

    bool legal = true;
    bool* legal_memory = &legal;

//    string from_block;
//    string to_block;

    bool run = true;
    while (run){
        string from_block;
        string to_block;

        cout << "from block: ";
        cin >> from_block;
        cout << "to block: ";
        cin >> to_block;

        check_block(fixing_names, from_block, to_block, fixing_memory,
                    a,b,c,d,e,f,g,h,i,j,k,l,
                    m,n,o,p,q,r, pos, check_king_pos, check_the_king_memory, legal_memory);

        start_game(a,b,c,d,e,f,
                   g,h,i,j,k,l,
                   m,n,o,p,q,r);
        if (from_block == "quit"){
            run = false;
        }
    }
//    cout << "from block: ";
//    cin >> from_block;
//    cout << "to block: ";
//    cin >> to_block;
//
//    check_block(fixing_names, from_block, to_block, fixing_memory,
//                a,b,c,d,e,f,g,h,i,j,k,l,
//                m,n,o,p,q,r, pos, check_king_pos, check_the_king_memory);

//    reverse_mode(r,q,p,o,n,m,
//               l,k,j,i,h,g,
//               f,e,d,c,b,a);

//    start_game(a,b,c,d,e,f,
//               g,h,i,j,k,l,
//               m,n,o,p,q,r);

    return 0;
}
