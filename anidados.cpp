#include <iostream>
#include <string.h>
using namespace std;

int main() {
    short int i {13}, j, li = 2 ,contli {1};
   
    do  {
        cout << endl;
    }while (li-- >0);
    
    
    while (i-- >= 0){
    
        j= 0;
        string sp = "O";
        cout << endl;
        while (j++ <= i){   
            sp+="_";
            contli++; 
            if (contli == 30) 
                {
                    cout <<endl;
                    contli =1;
                }

            cout <<sp ;
        }
               
    }
    
    li = 4;
    
    do {
         cout << endl;
    } while (li-- >0);
	
    return 0;
}
