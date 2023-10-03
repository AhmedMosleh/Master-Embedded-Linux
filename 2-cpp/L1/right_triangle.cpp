#include <iostream>
#include <cmath>

float get_max(float n1,float n2, float n3){
    // Your C++ code for Maximum number between three values goes here
    float max = n1;
    if(n2 > max) { max = n2; }
    if(n3 > max) { max = n2; }
    return max;
}
int main() {

    // Your C++ code for RIGHT angle triangle goes here
    float s1,s2,s3;
    std::cout << "Enter 3 sides of the triangle:\n";
    std::cin >> s1 >> s2 >> s3;
    float max = get_max(s1, s2, s3);

    if(max == s3)       {if(std::sqrt(s1*s1 + s2*s2) == s3) std:: cout << "true" << std::endl;}
    else if(max == s2)  {if(std::sqrt(s1*s1 + s3*s3) == s2) std:: cout << "true" << std::endl;}
    else if(max == s1)  {if(std::sqrt(s3*s3 + s2*s2) == s1) std:: cout << "true" << std::endl;}
    else std:: cout << "false" << std::endl;

    return 0;

}

