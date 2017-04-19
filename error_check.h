/**
 * @short   Error Check Headers
 * @file    error_check.h
 * @author  Yixin Zhang
 *
 * This file contains the prototypes and a short description of all the functions used for checking errors
 *
 */
 
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <cmath>
#include <cstdlib>

using namespace std;

// Short description: These functions help check all inputs (files and parameters) 
// -------------------------------------------------------------------------------------

int check_file_num(int argc);

int check_file_open(ifstream &infile);

int check_variables(Parameters *params);

void check_grid(double xx, double yy, Parameters *params);

