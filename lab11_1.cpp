#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    string grad;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    if(x==0) grad = "A" ;
    else if(x==1) grad = "B+" ;
    else if(x==2) grad = "B" ;
    else if(x==3) grad = "C+" ;
    else if(x==4) grad = "C" ;
    else if(x==5) grad = "D+" ;
    else if(x==6) grad = "D" ;
    else if(x==7) grad = "F" ;
    else grad = "W" ;
    
    cout << "You will get "<< grad <<" in this 261102.";

    return 0;
}
