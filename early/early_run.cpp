//
// Created by 1 on 14/11/2020.
//

#include "early_run.h"

void early_run(lexical_analyzer la) {

    grammar gr;

    //нетерминалы
    gr.add_symbol( "Func", false, true );
    gr.add_symbol( "Pr", false, false );
    gr.add_symbol( "ReturnSt", false, false );
    gr.add_symbol( "ExprAssign", false, false );
    gr.add_symbol( "Loop", false, false );
    gr.add_symbol( "CondOp", false, false );
    gr.add_symbol( "Cifra", false, false );
    gr.add_symbol( "Integer", false, false );
    gr.add_symbol( "Real", false, false );
    gr.add_symbol( "Letter", false, false );
    gr.add_symbol( "FLetter", false, false );
    gr.add_symbol( "Id", false, false );
    gr.add_symbol( "IdSymb", false, false );
    gr.add_symbol( "LogConst", false, false );
    gr.add_symbol( "TypeId", false, false );
    gr.add_symbol( "LogOp", false, false );
    gr.add_symbol( "ComplxOp", false, false );
    gr.add_symbol( "VarVal", false, false );
    gr.add_symbol( "ArOprnd", false, false );
    gr.add_symbol( "Num", false, false );
    gr.add_symbol( "Expr", false, false );
    gr.add_symbol( "ReturnSt", false, false );
    gr.add_symbol( "Compar", false, false );
    gr.add_symbol( "Cond", false, false );
    gr.add_symbol( "ComplxOpConstr", false, false );
    gr.add_symbol( "VarDec", false, false );
    gr.add_symbol( "E", false, false );
    gr.add_symbol( "T", false, false );
    gr.add_symbol( "F", false, false );
    gr.add_symbol( "Op1Prior", false, false );
    gr.add_symbol( "Op2Prior", false, false );
    gr.add_symbol( "CompOp", false, false );
    gr.add_symbol( "LoopOpPost", false, false );
    gr.add_symbol( "LoopOpPrec", false, false );
    gr.add_symbol( "LoopOpStep", false, false );

    //терминалы

    gr.add_symbol( "main", true );
    gr.add_symbol( "return", true );
    gr.add_symbol( "int", true );
    gr.add_symbol( "char", true );
    gr.add_symbol( "void", true );
    gr.add_symbol( "bool", true );
    gr.add_symbol( "double", true );
    gr.add_symbol( "true", true );
    gr.add_symbol( "false", true );
    gr.add_symbol( "if", true );
    gr.add_symbol( "else", true );
    gr.add_symbol( "while", true );
    gr.add_symbol( "do", true );
    gr.add_symbol( "for", true );
    gr.add_symbol( "||", true );
    gr.add_symbol( "&&", true );
    gr.add_symbol( "<=", true );
    gr.add_symbol( ">=", true );
    gr.add_symbol( "==", true );
    gr.add_symbol( "!=", true );
    gr.add_symbol( "0", true );
    gr.add_symbol( "1", true );
    gr.add_symbol( "2", true );
    gr.add_symbol( "3", true );
    gr.add_symbol( "4", true );
    gr.add_symbol( "5", true );
    gr.add_symbol( "6", true );
    gr.add_symbol( "7", true );
    gr.add_symbol( "8", true );
    gr.add_symbol( "9", true );
    gr.add_symbol( "=", true );
    gr.add_symbol( "-", true );
    gr.add_symbol( "+", true );
    gr.add_symbol( "*", true );
    gr.add_symbol( "/", true );
    gr.add_symbol( ")", true );
    gr.add_symbol( "(", true );
    gr.add_symbol( "_", true );
    gr.add_symbol( "!", true );
    gr.add_symbol( "&", true );
    gr.add_symbol( "<", true );
    gr.add_symbol( ">", true );
    gr.add_symbol( ".", true );
    gr.add_symbol( ",", true );
    gr.add_symbol( ";", true );
    gr.add_symbol( "{", true );
    gr.add_symbol( "}", true );
    gr.add_symbol( "a", true );
    gr.add_symbol( "b", true );
    gr.add_symbol( "c", true );
    gr.add_symbol( "d", true );
    gr.add_symbol( "e", true );
    gr.add_symbol( "f", true );
    gr.add_symbol( "g", true );
    gr.add_symbol( "h", true );
    gr.add_symbol( "i", true );
    gr.add_symbol( "j", true );
    gr.add_symbol( "k", true );
    gr.add_symbol( "l", true );
    gr.add_symbol( "m", true );
    gr.add_symbol( "n", true );
    gr.add_symbol( "o", true );
    gr.add_symbol( "p", true );
    gr.add_symbol( "q", true );
    gr.add_symbol( "r", true );
    gr.add_symbol( "s", true );
    gr.add_symbol( "t", true );
    gr.add_symbol( "u", true );
    gr.add_symbol( "w", true );
    gr.add_symbol( "q", true );
    gr.add_symbol( "x", true );
    gr.add_symbol( "y", true );
    gr.add_symbol( "z", true );
    gr.add_symbol( "A", true );
    gr.add_symbol( "B", true );
    gr.add_symbol( "C", true );
    gr.add_symbol( "D", true );
    gr.add_symbol( "E", true );
    gr.add_symbol( "F", true );
    gr.add_symbol( "G", true );
    gr.add_symbol( "H", true );
    gr.add_symbol( "I", true );
    gr.add_symbol( "J", true );
    gr.add_symbol( "K", true );
    gr.add_symbol( "L", true );
    gr.add_symbol( "M", true );
    gr.add_symbol( "N", true );
    gr.add_symbol( "O", true );
    gr.add_symbol( "P", true );
    gr.add_symbol( "Q", true );
    gr.add_symbol( "R", true );
    gr.add_symbol( "S", true );
    gr.add_symbol( "T", true );
    gr.add_symbol( "U", true );
    gr.add_symbol( "W", true );
    gr.add_symbol( "Q", true );
    gr.add_symbol( "X", true );
    gr.add_symbol( "Y", true );
    gr.add_symbol( "Z", true );

    //правила

    unsigned int Func_1 = gr.add_rule( "Func --> TypeId main ( Arg ) { Pr }" );
    gr.add_left_nonterminal_to_rule( Func_1, "Func" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "main" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "(" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "Arg" );
    gr.add_symbol_to_right_part_of_rule( Func_1, ")" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "{" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Func_1, "}" );

    unsigned int Func_2 = gr.add_rule( "Func --> TypeId main ( ) { Pr }" );
    gr.add_left_nonterminal_to_rule(Func_2, "Func" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "main" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "(" );
    gr.add_symbol_to_right_part_of_rule( Func_2, ")" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "{" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Func_2, "}" );

    unsigned int TypeId_1 = gr.add_rule( "TypeId --> int" );
    gr.add_left_nonterminal_to_rule( TypeId_1, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( TypeId_1, "int" );

    unsigned int TypeId_2 = gr.add_rule( "TypeId --> char" );
    gr.add_left_nonterminal_to_rule(TypeId_2, "TypeId" );
    gr.add_symbol_to_right_part_of_rule(TypeId_2, "char" );

    unsigned int TypeId_3 = gr.add_rule( "TypeId --> void" );
    gr.add_left_nonterminal_to_rule(TypeId_3, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( TypeId_3, "void" );


    unsigned int TypeId_4 = gr.add_rule( "TypeId --> bool" );
    gr.add_left_nonterminal_to_rule(TypeId_4, "TypeId" );
    gr.add_symbol_to_right_part_of_rule(TypeId_4, "bool" );

    unsigned int TypeId_5 = gr.add_rule( "TypeId --> double" );
    gr.add_left_nonterminal_to_rule( TypeId_5, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( TypeId_5, "double" );

    unsigned int Arg_1 = gr.add_rule( "Arg --> TypeId Id" );
    gr.add_left_nonterminal_to_rule(Arg_1, "Arg" );
    gr.add_symbol_to_right_part_of_rule( Arg_1, "Type" );
    gr.add_symbol_to_right_part_of_rule( Arg_1, "Id" );

    unsigned int Arg_2 = gr.add_rule( "Arg --> TypeId Id , Arg" );
    gr.add_left_nonterminal_to_rule( Arg_2, "Arg" );
    gr.add_symbol_to_right_part_of_rule( Arg_2, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( Arg_2, "Id" );
    gr.add_symbol_to_right_part_of_rule( Arg_2, "Arg" );

    unsigned int Pr_1 = gr.add_rule( "Pr --> ExprAssign ; Pr" );
    gr.add_left_nonterminal_to_rule(Pr_1, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_1, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( Pr_1, "Pr" );

    unsigned int Pr_2 = gr.add_rule( "Pr --> Loop Pr" );
    gr.add_left_nonterminal_to_rule(Pr_2, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_2, "Loop" );
    gr.add_symbol_to_right_part_of_rule( Pr_2, "Pr" );


    unsigned int Pr_3 = gr.add_rule( "Pr --> CondOp Pr" );
    gr.add_left_nonterminal_to_rule(Pr_3, "Pr" );
    gr.add_symbol_to_right_part_of_rule(Pr_3, "CondOp" );
    gr.add_symbol_to_right_part_of_rule(Pr_3, "Pr" );

    unsigned int Pr_4 = gr.add_rule( "Pr --> VarDec Pr" );
    gr.add_left_nonterminal_to_rule( Pr_4, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_4, "VarDec" );
    gr.add_symbol_to_right_part_of_rule( Pr_4, "Pr" );

    unsigned int Pr_5 = gr.add_rule( "Pr --> ReturnSt ;" );
    gr.add_left_nonterminal_to_rule(Pr_5, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_5, "ReturnSt" );
    gr.add_symbol_to_right_part_of_rule( Pr_5, ";" );

    unsigned int Pr_6 = gr.add_rule( "Pr --> ExprAssign ;" );
    gr.add_left_nonterminal_to_rule( Pr_6, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_6, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( Pr_6, ";" );


    unsigned int Pr_7 = gr.add_rule( "Pr --> Loop" );
    gr.add_left_nonterminal_to_rule(Pr_7, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_7, "Loop" );

    unsigned int Pr_8 = gr.add_rule( "Pr --> CondOp" );
    gr.add_left_nonterminal_to_rule(Pr_8, "Pr" );
    gr.add_symbol_to_right_part_of_rule( Pr_8, "CondOp" );

    //part2

    unsigned int VarDec_1 = gr.add_rule( "VarDec --> TypeId  Id ;" );
    gr.add_left_nonterminal_to_rule( VarDec_1, "VarDec" );
    gr.add_symbol_to_right_part_of_rule( VarDec_1, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( VarDec_1, "Id" );
    gr.add_symbol_to_right_part_of_rule(VarDec_1, ";" );

    unsigned int VarDec_2 = gr.add_rule( "VarDec --> TypeId  ExprAssign ;" );
    gr.add_left_nonterminal_to_rule(VarDec_2, "VarDec" );
    gr.add_symbol_to_right_part_of_rule( VarDec_2, "TypeId" );
    gr.add_symbol_to_right_part_of_rule( VarDec_2, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( VarDec_2, ";" );

    unsigned int Id_1 = gr.add_rule( "Id --> FLetter IdSymb" );
    gr.add_left_nonterminal_to_rule( Id_1, "Id" );
    gr.add_symbol_to_right_part_of_rule( Id_1, "FLetter" );
    gr.add_symbol_to_right_part_of_rule( Id_1, "IdSymb" );

    unsigned int Id_2 = gr.add_rule( "Id --> Letter" );
    gr.add_left_nonterminal_to_rule(Id_2, "Id" );
    gr.add_symbol_to_right_part_of_rule( Id_2, "Letter" );



    unsigned int IdSymb_1 = gr.add_rule( "IdSymb --> Cifra IdSymb" );
    gr.add_left_nonterminal_to_rule(IdSymb_1, "IdSymb" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_1, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_1, "IdSymb" );


    unsigned int IdSymb_2 = gr.add_rule( "IdSymb --> Cifra" );
    gr.add_left_nonterminal_to_rule(IdSymb_2, "IdSymb" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_2, "Cifra" );

    unsigned int IdSymb_3 = gr.add_rule( "IdSymb --> FLetter IdSymb" );
    gr.add_left_nonterminal_to_rule( IdSymb_3, "IdSymb" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_3, "FLetter" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_3, "IdSymb" );

    unsigned int IdSymb_4 = gr.add_rule( "IdSymb --> Letter" );
    gr.add_left_nonterminal_to_rule(IdSymb_4, "IdSymb" );
    gr.add_symbol_to_right_part_of_rule( IdSymb_4, "Letter" );

    unsigned int FLetter_1 = gr.add_rule( "FLetter --> Letter" );
    gr.add_left_nonterminal_to_rule( FLetter_1, "FLetter" );
    gr.add_symbol_to_right_part_of_rule( FLetter_1, "Letter" );

    unsigned int FLetter_2 = gr.add_rule( "FLetter --> _" );
    gr.add_left_nonterminal_to_rule(FLetter_2, "FLetter" );
    gr.add_symbol_to_right_part_of_rule(FLetter_2, "_" );

    unsigned int Real_1 = gr.add_rule( "Real --> Integer . Integer" );
    gr.add_left_nonterminal_to_rule(Real_1, "Real" );
    gr.add_symbol_to_right_part_of_rule( Real_1, "Integer" );
    gr.add_symbol_to_right_part_of_rule( Real_1, "." );
    gr.add_symbol_to_right_part_of_rule( Real_1, "Integer" );


    unsigned int Real_2 = gr.add_rule( "Real --> .Integer" );
    gr.add_left_nonterminal_to_rule(Real_2, "Real" );
    gr.add_symbol_to_right_part_of_rule( Real_2, "." );
    gr.add_symbol_to_right_part_of_rule( Real_2, "Integer" );

    unsigned int Integer_1 = gr.add_rule( "Integer --> Cifra Integer" );
    gr.add_left_nonterminal_to_rule( Integer_1, "Integer" );
    gr.add_symbol_to_right_part_of_rule( Integer_1, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Integer_1, "Integer" );


    unsigned int Integer_2 = gr.add_rule( "Integer --> Cifra" );
    gr.add_left_nonterminal_to_rule(Integer_2, "Integer" );
    gr.add_symbol_to_right_part_of_rule( Integer_2, "Cifra" );


    unsigned int Cifra_0 = gr.add_rule( "Cifra --> 0" );
    gr.add_left_nonterminal_to_rule( Cifra_0, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_0, "0" );

    unsigned int Cifra_1 = gr.add_rule( "Cifra --> 1" );
    gr.add_left_nonterminal_to_rule(Cifra_1, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_1, "1" );

    unsigned int Cifra_2 = gr.add_rule( "Cifra --> 2" );
    gr.add_left_nonterminal_to_rule(Cifra_2, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_2, "2" );

    unsigned int Cifra_3 = gr.add_rule( "Cifra --> 3" );
    gr.add_left_nonterminal_to_rule(Cifra_3, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_3, "3" );

    unsigned int Cifra_4 = gr.add_rule( "Cifra --> 4" );
    gr.add_left_nonterminal_to_rule( Cifra_4, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_4, "4" );


    unsigned int Cifra_5 = gr.add_rule( "Cifra --> 5" );
    gr.add_left_nonterminal_to_rule(Cifra_5, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_5, "5" );



    unsigned int Cifra_6 = gr.add_rule( "Cifra --> 6" );
    gr.add_left_nonterminal_to_rule( Cifra_6, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_6, "6" );

    unsigned int Cifra_7 = gr.add_rule( "Cifra --> 7" );
    gr.add_left_nonterminal_to_rule(Cifra_7, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_7, "7" );

    unsigned int Cifra_8 = gr.add_rule( "Cifra --> 8" );
    gr.add_left_nonterminal_to_rule(Cifra_8, "Cifra" );
    gr.add_symbol_to_right_part_of_rule( Cifra_8, "8" );


    unsigned int Cifra_9 = gr.add_rule( "Cifra --> 9" );
    gr.add_left_nonterminal_to_rule(Cifra_9, "Cifra" );
    gr.add_symbol_to_right_part_of_rule(Cifra_9, "9" );

    //Letter

    unsigned int Letter_a = gr.add_rule( "Letter --> a" );
    gr.add_left_nonterminal_to_rule( Letter_a, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_a, "a" );



    unsigned int Letter_b = gr.add_rule( "Letter --> b" );
    gr.add_left_nonterminal_to_rule(Letter_b, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_b, "b" );

    unsigned int Letter_c = gr.add_rule( "Letter --> c" );
    gr.add_left_nonterminal_to_rule( Letter_c, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_c, "c" );

    unsigned int Letter_d = gr.add_rule( "Letter --> d" );
    gr.add_left_nonterminal_to_rule(Letter_d, "T" );
    gr.add_symbol_to_right_part_of_rule( Letter_d, "F" );

    unsigned int Letter_e = gr.add_rule( "Letter --> e" );
    gr.add_left_nonterminal_to_rule(Letter_e, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_e, "e" );


    unsigned int Letter_f = gr.add_rule( "Letter --> f" );
    gr.add_left_nonterminal_to_rule(Letter_f, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_f, "f" );

    unsigned int Letter_g = gr.add_rule( "Lette --> g" );
    gr.add_left_nonterminal_to_rule( Letter_g, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_g, "g" );

    unsigned int Letter_h = gr.add_rule( "Letter --> h" );
    gr.add_left_nonterminal_to_rule(Letter_h, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_h, "h" );

    unsigned int Letter_i = gr.add_rule( "Letter --> i" );
    gr.add_left_nonterminal_to_rule( Letter_i, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_i, "i" );

    unsigned int Letter_j = gr.add_rule( "Letter --> j" );
    gr.add_left_nonterminal_to_rule(Letter_j, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_j, "j" );

    unsigned int Letter_k = gr.add_rule( "Letter --> k" );
    gr.add_left_nonterminal_to_rule(Letter_k, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_k, "k" );


    unsigned int Letter_l = gr.add_rule( "Letter --> l" );
    gr.add_left_nonterminal_to_rule(Letter_l, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_l, "l" );

    unsigned int Letter_m = gr.add_rule( "Letter --> m" );
    gr.add_left_nonterminal_to_rule(Letter_m, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_m, "m" );

    unsigned int Letter_n = gr.add_rule( "Letter --> n" );
    gr.add_left_nonterminal_to_rule(Letter_n, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_n, "n" );

    unsigned int Letter_o = gr.add_rule( "Letter --> o" );
    gr.add_left_nonterminal_to_rule( Letter_o, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_o, "o" );

    unsigned int Letter_p = gr.add_rule( "Letter --> p" );
    gr.add_left_nonterminal_to_rule(Letter_p, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_p, "p" );

    unsigned int Letter_q = gr.add_rule( "Letter --> q" );
    gr.add_left_nonterminal_to_rule(Letter_q, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_q, "q" );

    //part2

    unsigned int Letter_r = gr.add_rule( "Letter --> r" );
    gr.add_left_nonterminal_to_rule( Letter_r, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_r, "r" );

    unsigned int Letter_s = gr.add_rule( "Letter --> s" );
    gr.add_left_nonterminal_to_rule(Letter_s, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_s, "s" );

    unsigned int Letter_t = gr.add_rule( "Letter --> t" );
    gr.add_left_nonterminal_to_rule( Letter_t, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_t, "t" );

    unsigned int Letter_u = gr.add_rule( "Letter --> u" );
    gr.add_left_nonterminal_to_rule(Letter_u, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_u, "u" );

    unsigned int Letter_v = gr.add_rule( "v" );
    gr.add_left_nonterminal_to_rule(Letter_v, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_v, "v" );


    unsigned int Letter_w = gr.add_rule( "w" );
    gr.add_left_nonterminal_to_rule(Letter_w, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_w, "w" );

    unsigned int Letter_x = gr.add_rule( "x" );
    gr.add_left_nonterminal_to_rule( Letter_x, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_x, "x" );

    unsigned int Letter_y = gr.add_rule( "Letter --> y" );
    gr.add_left_nonterminal_to_rule(Letter_y, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_y, "y" );

    unsigned int Letter_z = gr.add_rule( "Letter --> z" );
    gr.add_left_nonterminal_to_rule( Letter_z, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_z, "z" );

    unsigned int Letter_A = gr.add_rule( "Letter --> A" );
    gr.add_left_nonterminal_to_rule( Letter_A, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_A, "A" );

    unsigned int Letter_B = gr.add_rule( "Letter --> B" );
    gr.add_left_nonterminal_to_rule(Letter_B, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_B, "B" );

    unsigned int Letter_C = gr.add_rule( "Letter --> C" );
    gr.add_left_nonterminal_to_rule( Letter_C, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_C, "C" );

    unsigned int Letter_D = gr.add_rule( "Letter --> D" );
    gr.add_left_nonterminal_to_rule(Letter_D, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_D, "D" );

    unsigned int Letter_E = gr.add_rule( "Letter --> E" );
    gr.add_left_nonterminal_to_rule(Letter_E, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_E, "E" );


    unsigned int Letter_F = gr.add_rule( "Letter --> F" );
    gr.add_left_nonterminal_to_rule(Letter_F, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_F, "F" );

    unsigned int Letter_G = gr.add_rule( "Letter --> G" );
    gr.add_left_nonterminal_to_rule( Letter_G, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_G, "G" );

    unsigned int Letter_H = gr.add_rule( "Letteg --> H" );
    gr.add_left_nonterminal_to_rule(Letter_H, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_H, "H" );

    unsigned int Letter_I = gr.add_rule( "Letter --> I" );
    gr.add_left_nonterminal_to_rule( Letter_I, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_I, "I" );

    unsigned int Letter_J = gr.add_rule( "Letter --> J" );
    gr.add_left_nonterminal_to_rule(Letter_J, "Letter" );
    gr.add_symbol_to_right_part_of_rule(Letter_J, "J" );

    unsigned int Letter_K = gr.add_rule( "Letter --> K" );
    gr.add_left_nonterminal_to_rule(Letter_K, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_K, "K" );


    unsigned int Letter_L = gr.add_rule( "Letter --> L" );
    gr.add_left_nonterminal_to_rule(Letter_L, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_L, "L" );

    unsigned int Letter_M = gr.add_rule( "Letter --> M" );
    gr.add_left_nonterminal_to_rule( Letter_M, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_M, "M" );

    unsigned int Letter_N = gr.add_rule( "Letter --> N" );
    gr.add_left_nonterminal_to_rule(Letter_N, "Letter" );
    gr.add_symbol_to_right_part_of_rule(Letter_N, "N" );

    unsigned int Letter_O = gr.add_rule( "Letter --> O" );
    gr.add_left_nonterminal_to_rule( Letter_O, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_O, "O" );

    unsigned int Letter_P = gr.add_rule( "Letter --> P" );
    gr.add_left_nonterminal_to_rule(Letter_P, "Letter" );
    gr.add_symbol_to_right_part_of_rule(Letter_P, "P" );

    unsigned int Letter_Q = gr.add_rule( "Letter --> Q" );
    gr.add_left_nonterminal_to_rule(Letter_Q, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_Q, "Q" );

    //part2

    unsigned int Letter_R = gr.add_rule( "Letter --> R" );
    gr.add_left_nonterminal_to_rule( Letter_R, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_R, "R" );

    unsigned int Letter_S = gr.add_rule( "Letter --> S" );
    gr.add_left_nonterminal_to_rule( Letter_S, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_S, "S" );

    unsigned int  Letter_T = gr.add_rule( "Letter --> T" );
    gr.add_left_nonterminal_to_rule( Letter_T, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_T, "T" );

    unsigned int Letter_U = gr.add_rule( "Letter --> U" );
    gr.add_left_nonterminal_to_rule(Letter_U, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_U, "U" );

    unsigned int Letter_V = gr.add_rule( "V" );
    gr.add_left_nonterminal_to_rule(Letter_V, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_V, "V" );


    unsigned int Letter_W = gr.add_rule( "W" );
    gr.add_left_nonterminal_to_rule(Letter_W, "Letter" );
    gr.add_symbol_to_right_part_of_rule(Letter_W , "W" );

    unsigned int Letter_X = gr.add_rule( "X" );
    gr.add_left_nonterminal_to_rule( Letter_X, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_X, "X" );

    unsigned int  Letter_Y = gr.add_rule( "Letter --> Y" );
    gr.add_left_nonterminal_to_rule(Letter_Y, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_Y, "Y" );

    unsigned int Letter_Z = gr.add_rule( "Letter --> Z" );
    gr.add_left_nonterminal_to_rule( Letter_Z, "Letter" );
    gr.add_symbol_to_right_part_of_rule( Letter_Z, "Z" );

    unsigned int VarVal_1 = gr.add_rule( "VarVal --> Integer" );
    gr.add_left_nonterminal_to_rule(VarVal_1, "VarVal" );
    gr.add_symbol_to_right_part_of_rule(VarVal_1, "Integer" );

    unsigned int VarVal_2 = gr.add_rule( "VarVal --> Real" );
    gr.add_left_nonterminal_to_rule(VarVal_2, "VarVal" );
    gr.add_symbol_to_right_part_of_rule( VarVal_2, "Real" );


    unsigned int VarVal_3 = gr.add_rule( "VarVal --> LogConst" );
    gr.add_left_nonterminal_to_rule(VarVal_3, "VarVal" );
    gr.add_symbol_to_right_part_of_rule( VarVal_3, "LogConst" );

    unsigned int VarVal_4 = gr.add_rule( "VarVal --> Symbol" );
    gr.add_left_nonterminal_to_rule( VarVal_4, "VarVal" );
    gr.add_symbol_to_right_part_of_rule( VarVal_4, "Symbol" );

    unsigned int LogConst_1 = gr.add_rule( "LogConst --> true" );
    gr.add_left_nonterminal_to_rule(LogConst_1, "LogConst" );
    gr.add_symbol_to_right_part_of_rule( LogConst_1, "true" );

    unsigned int LogConst_2 = gr.add_rule( "LogConst --> false" );
    gr.add_left_nonterminal_to_rule( LogConst_2, "LogConst" );
    gr.add_symbol_to_right_part_of_rule( LogConst_2, "false" );



    unsigned int ExprAssign_1 = gr.add_rule( "ExprAssign --> Id = Expr" );
    gr.add_left_nonterminal_to_rule(ExprAssign_1, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_1, "Id" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_1, "=" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_1, "Expr" );


    unsigned int ExprAssign_2 = gr.add_rule( "ExprAssign --> Id = E ;" );
    gr.add_left_nonterminal_to_rule(ExprAssign_2, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_2, "Id" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_2, "=" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_2, "E" );
    gr.add_symbol_to_right_part_of_rule( ExprAssign_2, ";" );

    unsigned int E_1 = gr.add_rule( "E --> T Op2Prior E" );
    gr.add_left_nonterminal_to_rule(E_1, "E" );
    gr.add_symbol_to_right_part_of_rule( E_1, "T" );
    gr.add_symbol_to_right_part_of_rule( E_1, "Op2Prior" );
    gr.add_symbol_to_right_part_of_rule( E_1, "E" );

    unsigned int E_2 = gr.add_rule( "E --> T" );
    gr.add_left_nonterminal_to_rule( E_2, "E" );
    gr.add_symbol_to_right_part_of_rule( E_2, "T" );

    unsigned int T_1 = gr.add_rule( "T --> T Op1Prior F" );
    gr.add_left_nonterminal_to_rule(T_1, "T" );
    gr.add_symbol_to_right_part_of_rule( T_1, "T" );
    gr.add_symbol_to_right_part_of_rule( T_1, "Op1Prior" );
    gr.add_symbol_to_right_part_of_rule( T_1, "F" );

    unsigned int T_2 = gr.add_rule( "T --> F" );
    gr.add_left_nonterminal_to_rule( T_2, "T" );
    gr.add_symbol_to_right_part_of_rule( T_2, "F" );

    unsigned int F_1 = gr.add_rule( "F --> ( E )" );
    gr.add_left_nonterminal_to_rule(F_1, "F" );
    gr.add_symbol_to_right_part_of_rule(F_1, "(" );
    gr.add_symbol_to_right_part_of_rule(F_1, "E" );
    gr.add_symbol_to_right_part_of_rule(F_1, ")" );

    unsigned int F_2 = gr.add_rule( "F --> ArOprnd" );
    gr.add_left_nonterminal_to_rule(F_2, "F" );
    gr.add_symbol_to_right_part_of_rule( F_2, "ArOprnd" );


    unsigned int Op2Prior_1 = gr.add_rule( "Op2Prior --> -" );
    gr.add_left_nonterminal_to_rule(Op2Prior_1, "Op2Prior" );
    gr.add_symbol_to_right_part_of_rule( Op2Prior_1, "-" );

    unsigned int Op2Prior_2 = gr.add_rule( "Op2Prior --> +" );
    gr.add_left_nonterminal_to_rule( Op2Prior_2, "Op2Prior" );
    gr.add_symbol_to_right_part_of_rule( Op2Prior_2, "+" );

    unsigned int Op1Prior_1 = gr.add_rule( "Op1Prior --> /" );
    gr.add_left_nonterminal_to_rule(Op1Prior_1, "Op1Prior" );
    gr.add_symbol_to_right_part_of_rule( Op1Prior_1, "/" );

    unsigned int Op1Prior_2 = gr.add_rule( "Op1Prior --> *" );
    gr.add_left_nonterminal_to_rule( Op1Prior_2, "Op1Prior" );
    gr.add_symbol_to_right_part_of_rule(Op1Prior_2, "*" );

    unsigned int ArOprnd_1 = gr.add_rule( "ArOprnd --> Num" );
    gr.add_left_nonterminal_to_rule(ArOprnd_1, "ArOprnd" );
    gr.add_symbol_to_right_part_of_rule( ArOprnd_1, "Num" );

    unsigned int ArOprnd_2 = gr.add_rule( "ArOprnd --> Id" );
    gr.add_left_nonterminal_to_rule(ArOprnd_2, "ArOprnd" );
    gr.add_symbol_to_right_part_of_rule( ArOprnd_2, "Id" );


    unsigned int Num_1 = gr.add_rule( "Num --> Integer" );
    gr.add_left_nonterminal_to_rule(Num_1, "Num" );
    gr.add_symbol_to_right_part_of_rule(Num_1, "Integer" );


    unsigned int Num_2 = gr.add_rule( "Num --> Real" );
    gr.add_left_nonterminal_to_rule(Num_2, "Num" );
    gr.add_symbol_to_right_part_of_rule(Num_2, "Real" );


    unsigned int Expr_1 = gr.add_rule( "Expr --> Num" );
    gr.add_left_nonterminal_to_rule( Expr_1, "Expr" );
    gr.add_symbol_to_right_part_of_rule( Expr_1, "Num" );


    unsigned int Expr_2 = gr.add_rule( "Expr --> Id" );
    gr.add_left_nonterminal_to_rule(Expr_2, "Expr" );
    gr.add_symbol_to_right_part_of_rule( Expr_2, "Id" );

    unsigned int Expr_3 = gr.add_rule( "Expr --> LogConst" );
    gr.add_left_nonterminal_to_rule(Expr_3, "Expr" );
    gr.add_symbol_to_right_part_of_rule(Expr_3, "LogConst" );


    unsigned int Loop_1 = gr.add_rule( "Loop --> LoopOpPrec" );
    gr.add_left_nonterminal_to_rule(Loop_1, "Loop" );
    gr.add_symbol_to_right_part_of_rule( Loop_1, "LoopOpPrec" );

    //Part3

    unsigned int Loop_2 = gr.add_rule( "Loop --> LoopOpPost" );
    gr.add_left_nonterminal_to_rule(Loop_2, "Loop" );
    gr.add_symbol_to_right_part_of_rule( Loop_2, "LoopOpPost" );

    unsigned int Loop_3 = gr.add_rule( "Loop --> LoopOpStep");
    gr.add_left_nonterminal_to_rule( Loop_3, "Loop" );
    gr.add_symbol_to_right_part_of_rule( Loop_3, "LoopOpStep" );

    unsigned int LoopOpPrec_1 = gr.add_rule( "LoopOpPrec --> while ( Cond ) ComplxOp" );
    gr.add_left_nonterminal_to_rule( LoopOpPrec_1, "LoopOpPrec" );
    gr.add_symbol_to_right_part_of_rule(  LoopOpPrec_1, "while" );
    gr.add_symbol_to_right_part_of_rule(  LoopOpPrec_1, "(" );
    gr.add_symbol_to_right_part_of_rule(  LoopOpPrec_1, "Cond" );
    gr.add_symbol_to_right_part_of_rule(  LoopOpPrec_1, ")" );
    gr.add_symbol_to_right_part_of_rule(  LoopOpPrec_1, "ComplxOp" );

    unsigned int  LoopOpPost_1 = gr.add_rule( "LoopOpPost --> do ComplxOp while ( Cond )" );
    gr.add_left_nonterminal_to_rule( LoopOpPost_1, "LoopOpPost" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, "do" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, "ComplxOp" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, "while" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, "(" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, "Cond" );
    gr.add_symbol_to_right_part_of_rule( LoopOpPost_1, ")" );

    unsigned int LoopOpStep_1 = gr.add_rule( "LoopOpStep --> for ( ExprAssign; Cond; ExprAssign) ComplxOp" );
    gr.add_left_nonterminal_to_rule(LoopOpStep_1, "LoopOpStep" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "for" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "(" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, ";" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "Cond" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, ";" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, ")" );
    gr.add_symbol_to_right_part_of_rule( LoopOpStep_1, "ComlxOp" );

    unsigned int Cond_1 = gr.add_rule( "Cond --> ! LogConst" );
    gr.add_left_nonterminal_to_rule(Cond_1, "Cond" );
    gr.add_symbol_to_right_part_of_rule( Cond_1, "!" );
    gr.add_symbol_to_right_part_of_rule( Cond_1, "LogConst" );


    unsigned int Cond_2 = gr.add_rule( "Cond --> LogConst" );
    gr.add_left_nonterminal_to_rule(Cond_2, "Cond" );
    gr.add_symbol_to_right_part_of_rule( Cond_2, "LogConst" );

    unsigned int Cond_3 = gr.add_rule( "Cond --> Compar" );
    gr.add_left_nonterminal_to_rule( Cond_3, "Cond" );
    gr.add_symbol_to_right_part_of_rule( Cond_3, "Compar" );

    unsigned int Compar_1 = gr.add_rule( "Compar --> Expr CompOp Expr" );
    gr.add_left_nonterminal_to_rule(Compar_1, "Compar" );
    gr.add_symbol_to_right_part_of_rule( Compar_1, "Expr" );
    gr.add_symbol_to_right_part_of_rule( Compar_1, "CompOp" );
    gr.add_symbol_to_right_part_of_rule( Compar_1, "Expr" );


    unsigned int CompOp_1 = gr.add_rule( "CompOp --> ==" );
    gr.add_left_nonterminal_to_rule( CompOp_1, "CompOp" );
    gr.add_symbol_to_right_part_of_rule( CompOp_1, "==" );

    unsigned int CompOp_2 = gr.add_rule( "CompOp --> !=" );
    gr.add_left_nonterminal_to_rule(CompOp_2, "CompOp" );
    gr.add_symbol_to_right_part_of_rule(CompOp_2, "!=" );

    unsigned int CompOp_3 = gr.add_rule( "CompOp --> >" );
    gr.add_left_nonterminal_to_rule(CompOp_3, "CompOp" );
    gr.add_symbol_to_right_part_of_rule(CompOp_3, ">" );

    unsigned int CompOp_4 = gr.add_rule( "CompOp --> <" );
    gr.add_left_nonterminal_to_rule(CompOp_4, "CompOp" );
    gr.add_symbol_to_right_part_of_rule(CompOp_4, "<" );

    unsigned int CompOp_5 = gr.add_rule( "CompOp --> <=" );
    gr.add_left_nonterminal_to_rule(CompOp_5, "CompOp" );
    gr.add_symbol_to_right_part_of_rule( CompOp_5, "<=" );

    unsigned int CompOp_6 = gr.add_rule( "CompOp --> >=" );
    gr.add_left_nonterminal_to_rule(CompOp_6, "CompOp" );
    gr.add_symbol_to_right_part_of_rule( CompOp_6, ">=" );

    unsigned int ComplxOp_1 = gr.add_rule( "ComplxOp --> { ComplxOpConstr }" );
    gr.add_left_nonterminal_to_rule( ComplxOp_1, "ComplxOp" );
    gr.add_symbol_to_right_part_of_rule( ComplxOp_1, "{" );
    gr.add_symbol_to_right_part_of_rule( ComplxOp_1, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOp_1, "}" );

    unsigned int ComplxOpConstr_1 = gr.add_rule( "CompxOpConstr --> ReturnSt ;" );
    gr.add_left_nonterminal_to_rule(ComplxOpConstr_1, "CompxOpConstr" );
    gr.add_symbol_to_right_part_of_rule(ComplxOpConstr_1, "ReturnSt" );
    gr.add_symbol_to_right_part_of_rule(ComplxOpConstr_1, ";" );

    unsigned int ComplxOpConstr_2 = gr.add_rule( "CompxOpConstr --> ExprAssign;" );
    gr.add_left_nonterminal_to_rule(ComplxOpConstr_2, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_2, "ExprAssign" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_2, ";" );


    unsigned int ComplxOpConstr_3 = gr.add_rule( "CompxOpConstr --> LoopOpPrec" );
    gr.add_left_nonterminal_to_rule(ComplxOpConstr_3, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_3, "LoopOpPrec" );

    unsigned int ComplxOpConstr_4 = gr.add_rule( "CompxOpConstr --> CondOp" );
    gr.add_left_nonterminal_to_rule( ComplxOpConstr_4, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_4, "CondOp" );

    unsigned int ComplxOpConstr_5 = gr.add_rule( "CompxOpConstr --> LoopOpStep" );
    gr.add_left_nonterminal_to_rule(ComplxOpConstr_5, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_5, "LoopOpStep" );

    unsigned int ComplxOpConstr_6 = gr.add_rule( "CompxOpConstr --> LoopOpPost" );
    gr.add_left_nonterminal_to_rule( ComplxOpConstr_6, "ComplxOpConstr" );
    gr.add_symbol_to_right_part_of_rule( ComplxOpConstr_6, "LoopOpPost" );

    unsigned int ReturnSt_1 = gr.add_rule( "ReturnSt --> return Expr" );
    gr.add_left_nonterminal_to_rule(ReturnSt_1, "ReturnSt" );
    gr.add_symbol_to_right_part_of_rule( ReturnSt_1, "return" );
    gr.add_symbol_to_right_part_of_rule( ReturnSt_1, "Expr" );

    unsigned int CondOp_1 = gr.add_rule( "CondOp --> if ( Cond )  ComplxOp else ComplxOp" );
    gr.add_left_nonterminal_to_rule(CondOp_1, "CondOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "if");
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "(" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, ")" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "ComplxOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "else" );
    gr.add_symbol_to_right_part_of_rule( CondOp_1, "ComplxOp" );

    unsigned int CondOp_2 = gr.add_rule( "CondOp --> if ( Cond )  ComplxOp" );
    gr.add_left_nonterminal_to_rule(CondOp_2, "CondOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_2, "if" );
    gr.add_symbol_to_right_part_of_rule( CondOp_2, "(" );
    gr.add_symbol_to_right_part_of_rule( CondOp_2, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_2, ")" );
    gr.add_symbol_to_right_part_of_rule( CondOp_2, "ComplxOp" );

    unsigned int CondOp_3 = gr.add_rule( "CondOp --> if ( Cond LogOp Cond )  ComplxOp else ComplxOp" );
    gr.add_left_nonterminal_to_rule(CondOp_3, "CinOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "if" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "(" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "LogOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, ")" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "ComplxOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "else" );
    gr.add_symbol_to_right_part_of_rule( CondOp_3, "ComplxOp" );

    unsigned int CondOp_4 = gr.add_rule( "CondOp --> if ( Cond LogOp Cond )  ComplxOp " );
    gr.add_left_nonterminal_to_rule( CondOp_4, "CondOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "If" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "(" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "LogOp" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "Cond" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, ")" );
    gr.add_symbol_to_right_part_of_rule( CondOp_4, "ComplxOp" );

    unsigned int LogOp_1 = gr.add_rule( "LogOp --> ||" );
    gr.add_left_nonterminal_to_rule(LogOp_1, "LogOp" );
    gr.add_symbol_to_right_part_of_rule( LogOp_1, "||" );

    unsigned int LogOp_2 = gr.add_rule( "LogOp --> &&" );
    gr.add_left_nonterminal_to_rule(LogOp_2, "LogOp" );
    gr.add_symbol_to_right_part_of_rule( LogOp_2, "&&" );

    lexer lex;

    for (int i = 0; i <= la.count; i++){
        lex.add_to_input(la.table[i][1]);
    }

    earley parser( gr, lex );
    if( parser.parse() ) std::cout << "success\n";
    else cout << "failed\n";

    parser.print();
}

