#include <iostream>

using namespace std;

namespace {
    int dnd = 1;
    float lagarto = -0.4;
}

namespace bruno {
    int karmill = -1;
}
namespace matheus {
    int karmill = 10;
}

namespace bruno {
    float cthulhu = 13.4;
}
namespace matheus {
    float cthulhu = 15.3;
}

using bruno::cthulhu;
using matheus::karmill;
namespace cotista = bruno;

int main (){
    cout<<bruno::karmill << " " << matheus::karmill << endl;
    cout<<bruno::cthulhu<<" "<<matheus::cthulhu<<endl;

    cout<<cthulhu<<" "<<karmill<<endl; 
    cout<<lagarto<<" "<<dnd<<endl;
    cout<<cotista::karmill<<endl;
}