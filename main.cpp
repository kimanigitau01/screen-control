#include <iostream>
#include "MyMarco.h"

using std::cout;
using std::endl;

int main()
{
    double x = MAX(3,87);
    double y = ABS(245);

    CLS;

    LOCATE(1,1);

    COLOR(BLACK, BLUE);

    // INVERS;

    // NORMAL;

    cout<<"The maximum is: "<<x<<" and the absolute is: "<<y<<endl;

    return 0;
}