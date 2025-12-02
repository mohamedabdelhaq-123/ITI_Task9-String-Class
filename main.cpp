#include <iostream>
#include "StringHeaders.h"
using namespace std;

int main()
{
    String s("zeyad");
    String ss("momo");
    ss.stringDisplay();

    s.stringDisplay();
    //priint(s);
    s=s+ss;
    s.stringDisplay();


    //cout<<"Hello world;"<<endl;
    return 0;
}
