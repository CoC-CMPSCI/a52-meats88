#include <iostream>
using namespace std;
int main()
{
    int value;
    int maxval;
    // TODO
cout << "give ten" << endl;
cin >> maxval;
for (int i = 0; i < 9; i++){
cin >> value;
if (value > maxval){
    maxval = value;
}
}
cout << maxval << endl;
    return 0;
}
