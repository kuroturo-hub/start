#include <iostream>
//reference is a an alias , it is not an object . It is just another name 
//for an already existing object.
int main(){
    int val = 100;
    int &ref1 = val;  //initilaization of a reference value is must 
                      //once binded to an object , there is no way to rebind it to refer to different object

    using namespace std;
    ref1=ref1/100 ;
    cout << ref1 << endl;
    cout << val << endl ;
     
    val =20;
    cout << ref1 << endl;
    cout << val ;

    

    return 0;
}