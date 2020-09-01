
/**
* This file is part of ORB-SLAM2_xdr940.
*
*/


#include<iostream>
#include<algorithm>
#include<fstream>
#include<chrono>
#include<iomanip>
#include<opencv2/core/core.hpp>

#include"System.h"
#include"Utils.h"
using namespace cv;
using namespace std;

void LoadImages(const string &strSequence, vector<string> &vstrImageFilenames,
                vector<double> &vTimestamps);


int main(int argc, char **argv){
    
    cout<<"----args--"<<endl;
    cout<<"argc:"<<argc<<endl;
    for(int i=0;i<argc;i++){
        cout<<string(argv[i])<<endl;
    }
    cout<<"----files--"<<endl;
    vector<string> paths = ROIT::Utils::readlines("./splits/custom_mono/testfile.txt");
    cout<<paths.size()<<endl;

    for(unsigned int i = 0;i!= paths.size();++i){
        cout<<paths[i]<<endl;
    }
    cout<<"--------fout"<<endl;
    ROIT::Utils::writelines("./testout.txt",paths);

    return 0;
}

void LoadImages(const string &strPathToSequence, vector<string> &vstrImageFilenames, vector<double> &vTimestamps)
{
    ifstream fTimes;
    string strPathTimeFile = strPathToSequence + "/times.txt";
    fTimes.open(strPathTimeFile.c_str());
    while (!fTimes.eof())
    {
        string s;
        getline(fTimes, s);
        if (!s.empty())
        {
            stringstream ss;
            ss << s;
            double t;
            ss >> t;
            vTimestamps.push_back(t);
        }
    }

    string strPrefixLeft = strPathToSequence + "/image_0/";

    const int nTimes = vTimestamps.size();
    vstrImageFilenames.resize(nTimes);

    for (int i = 0; i < nTimes; i++)
    {
        stringstream ss;
        ss << setfill('0') << setw(6) << i;
        vstrImageFilenames[i] = strPrefixLeft + ss.str() + ".png";
    }
}