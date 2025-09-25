#pragma once

#include <vector>
#include <string>

class Cards {
public:
    std::vector<int> cards_W;
    std::vector<int> cards_T;
    std::vector<int> cards_S;
    std::vector<int> cards_F;
    std::vector<int> cards_H;
    int isValid;
public:
    Cards(const std::string& str);
};

/// @brief constructor, using a string to construct a hand of cards.
/// @param str a string that represent a hand of cards (e.g., "1W2T3S...").
Cards::Cards(const std::string& str)
    : cards_W(9, 0), cards_T(9, 0), cards_S(9, 0), cards_F(9, 0), cards_H(8, 0), isValid(1) {

    if(str.length() != 26) {
        isValid = 0;
        return ;
    }

    for(int i = 0;i<26;i+=2) {
        switch (str[i+1])
        {
        case 'W': case 'w': cards_W[str[i]-'1']++; break;
        case 'T': case 't': cards_T[str[i]-'1']++; break;
        case 'S': case 's': cards_S[str[i]-'1']++; break;
        case 'F': case 'f': cards_F[str[i]-'1']++; break;
        case 'H': case 'h': cards_H[str[i]-'1']++; break;
        default:
            isValid = 0;
            break;
        }
    }

    return ;
}
