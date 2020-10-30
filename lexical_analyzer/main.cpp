#include <iostream>
#include "lexical_analyzer.h"

int main(){
    lexical_analyzer la;
    la.lexicalAnalyze("../example.txt");
    return 0;
}