#include "binary.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl;

    boolean MyBool(64);
    MyBool.bitOn(3);
    MyBool.bitOn(4);
    MyBool.bitOn(53);
    MyBool.bitOff(3);
    MyBool.bitOff(4);
    if(MyBool[53])
      cout << "Es verdadero"<<endl;
    else
      cout << "Es falso"<<endl;

    return EXIT_SUCCESS;
}
