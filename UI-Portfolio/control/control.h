//
//  control.h
//  UI-Portfolio
//
//  Created by Hale, Andrew on 11/12/19.
//  Copyright © 2019 Hale, Andrew. All rights reserved.
//
 
#ifndef control_h
#define control_h
// Classic C style defines for Operator control
#define BUFFER_SIZE 80
#define FILE_BUFFER_SIZE 1024
#define LINE_BUFFER_SIZE 256
// Math operations
#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3
#define MODULO 4
#define SQRT 5
 
// C Function Name and Line number
typedef struct candidatesFuncs {
    char name[LINE_BUFFER_SIZE];
    unsigned int functionStartLine;
} CANDIDATE_FUNCS;
CANDIDATE_FUNCS* fileParse(char *fn);
 
// Programming Languages Data Definition
typedef enum {JIT, JVM, ByteCode, Native} EXE_TYPE;
typedef enum {OOP, MP, Iterative} LANG_TYPE;
typedef struct language {
    char name[20];
    char yob[10];
    char creator[80];
    EXE_TYPE exetype;
    LANG_TYPE langtype;
} LANGUAGES;
LANGUAGES* progLanguages(void);
LANGUAGES* searchLanguages(char *searchTerm);
 
// Classic C style prototype for portfolio
int jumpers(char *message);
int histogram(char *message);
int zeroTest(double value);
double calculateIt(double arg1, int mathOp, double arg2);
double hypotenuse(double side1, double side2);
double areacalc(double length, double width);
 
#endif /* control_h */
