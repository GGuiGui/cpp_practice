#include <iostream>
using namespace std;

int main(){
    int *pi = new int;
    *pi = 100;
    cout << *pi << endl;

    delete pi;

    int *pj = new int[3];
    int i;

    pj[0] = 10; pj[1] = 20; pj[2] = 30;

    for(int i=0; i<3; i++)  cout << pj[i] << endl;

    delete [] pj;

    cout << *pi << endl;
    return 0;
}