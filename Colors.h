#ifndef COLORS_H
#define COLORS_H
#endif

#include <stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
static char *colors[] = {"\x1b[31m", "\x1b[32m", "\x1b[33m",  "\x1b[34m", "\x1b[35m","\x1b[36m","\x1b[0m"};
static void setColor(int color){
    printf("%s", colors[color]);
}

static void resetColor(){
    printf("%s", ANSI_COLOR_RESET);
}

static void printc(int color, const char *str){
    setColor(color);
    printf("%s", str);
    resetColor();
}

static void printc_c(int color, const char c){
    setColor(color);
    printf("%c", c);
    resetColor();
}

static void colorTest(){
    for(int i = 0; i <  7; i++){
        char t = (char)219;
        for(int a = 0; a < 4; a++){
            printc_c(i, t);
        }
        printc(i, "Test");
        printf("\n\n");
    }
}
