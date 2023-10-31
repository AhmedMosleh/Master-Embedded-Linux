#include <iostream>
#include <regex>
using namespace std;

struct dataa{
    int x;
    int y;
    private:
    int z;
};

int main() {
    string str = "Email: ahmedmosleh.888@gmail.com";
    std::regex regexp(R"..([\w\.]+@gmail.com)..");
    std::smatch m;
    std::regex_search(str,m,regexp);
    cout  << m[0] << endl; 
    

}
