#include <iostream>
#include <string>
using namespace std;
#include "functions.h"
#include "my_class.h"


/*  -----   QUESTION 1
int main() {
    cout << "Hello World !" << endl;
    return 0;
} */
 

/* -----   QUESTION 2
void imprime (std:: string text){
    std: cout << text << std::endl;

}
int main(){
    imprime("Hello World !");
    return 0;
} */

/* -----   QUESTION 3 ( le fichier functions.h  et la fonction main())
int main(){
    imprime("Hello World !!....");
    return 0;
}
*/

/* -----   QUESTION 4  (my_class.h , my_class.cpp et ce fichier main.cpp) */

int main()
{
    my_class c1;
    my_class c2("Hi <3");

    c1.imprime();
    c2.imprime();

    return 0;
}
