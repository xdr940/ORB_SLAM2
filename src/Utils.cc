#include "Utils.h"
using namespace std;
namespace ROIT
{

    std::vector<std::string> Utils::readlines(const std::string &filename)
    {   std::vector<std::string> ret;
        std::cout << filename << std::endl;
        std::ifstream ifstm;

        ifstm.open(filename);
        if (!ifstm)
        {   ifstm.close();
        }
        else
        {
            while (!ifstm.eof())
            {   
                string s;
                getline(ifstm, s);
                ret.push_back(s);
                //cout << s << endl;
            }
        }
        ifstm.close();
        return ret;
    }


    void Utils::writelines(const std::string &filename, const std::vector<string> &spaths){
        std::ofstream fout;
        fout.open(filename);
        int length = spaths.size();
        for(int i=0; i<length;i++){
            fout<<spaths[i]<<endl;
        }
        fout.close();
        return;
    }
} // namespace ROIT