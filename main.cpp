/* 
 * File:   main.cpp
 * Author: homayoun
 *
 * Created on November 9, 2011, 9:53 AM
 */

#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ifstream in_file;
    ofstream out_file;
    string Input;
    
    if (argc != 3) {
        cout << "Usage: " << argv[0] << " <Input file> <outfile>" << endl;
        exit(1);
    }

    in_file.open(argv[1]);
    if (in_file.fail()) {
        cout << "Error openning the file " << argv[1] << " \n";
        exit(1);
    }

    out_file.open(argv[2]);
    if (out_file.fail()) {
        cout << "Error openning the file " << argv[2] << " \n";
        exit(1);
    }

    while (!in_file.eof()) {
        getline(in_file, Input);
        out_file << Input << endl;
    }

    in_file.close();
    out_file.close();


    return (EXIT_SUCCESS);
}

