#ifndef MYMARCO_H
#define MYMARCO_H

#pragma once

#include <iostream>

using std::cout;
using std::endl;

#define MAX(z,s) (z>=s ? z : s)
/*
    *find the largest number between two numbers (a,b) where a and b are the numbers
*/
#define ABS(z) (z>0 ? z : z * -1)
/*
    * find the absolute value of a number (z)
*/
#define CLS (cout<<"\033[2J") 
/*
    * Marco: CLS
    * call: CLS
    * clears the screen
*/

#define LOCATE(r,c) (cout<<"\033["<<(r)<<';'<<(c)<<'H')
/*
    * Marco: LOCATE
    * Call: LOCATE(row,column)
    * positions of the cursor to (row, column)
    * (1,1) is the upper left corner.
*/

#define COLOR(f,b) (cout<<"\033[1;3"<<(f) \
<<";4"<<(b)<<'m'<<std::flush)
/*
    * 1: light foreground
    * 3x:foreground x
    * 4x background x
    * To call COLOR(color1, color2) do as shown below
*/

// color values for the marco COLOR
// To call ex: COLOR (WHITE, BLUE)
#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7

#define INVERS (cout<<"\033[7m")
/*
    * Marco: INVERS
    * call:INVERS
    * 
*/

#define NORMAL (cout<<"\033[0m")
/*
    * Marco: NORMAL
    * call: NORMAL
    * sets the screen attributes on the default values
*/
#endif