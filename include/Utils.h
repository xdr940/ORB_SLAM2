/*

written by xdr940


*/

#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
namespace ROIT{

    class Utils
    {
    public:
        //Utils(/* args */);
        //~Utils();
        static std::vector<std::string> readlines(const std::string &filename);
        static void writelines(const std::string &filename, const std::vector<std::string> &spaths);
    };
    
    //Utils::Utils(/* args */){}
    //Utils::~Utils(){}
    


}

#endif
