#ifndef LEXICAL_ANALYZER_LEXICAL_ANALYZER_H
#define LEXICAL_ANALYZER_LEXICAL_ANALYZER_H

using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

class lexical_analyzer {
    bool isID(const string &str);
    bool isDigit(const string &str);
    bool isSymbol(const string &str);
    bool isKeyword(const string &str);
    bool isReservedName(const string &str);
    bool isOperator(const string &str);
    bool isSeparator(const string &str);
    bool isNotLegal(const string &str);
public:
    void lexicalAnalyze(const string &nameOfFile);

    void printRoleOfToken(const string &token);
};


#endif //LEXICAL_ANALYZER_LEXICAL_ANALYZER_H
