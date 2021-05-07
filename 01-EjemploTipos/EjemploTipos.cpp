#include <cassert>
#include <string>

int main(){
    // Ejemplo booleanos
    assert(true==true);
    assert(true!=false);
    assert(true or false==true);
    assert(true and true==true);
    assert(!false);
    assert(true xor false);
    // Ejemplos char
    assert('a'=='a');
    assert('a'!='b');
    assert('A'+32=='a');
    assert('a'-32=='A');    
    //Ejemplos int
    assert(455==455);
    assert(55!=690);
    assert(56<=75);
    assert(589>=57);
    assert(25+5==30);
    assert(25-5==20);
    assert(25*2==50);
    assert(50/2==25);
    assert(15%3==0);
    //Ejemplos double
    assert(2.4-0.3==2.1);
    assert(2.4==2.4);
    assert(2.4!=6.3);
    assert(3.1>=2.6);
    assert(6.8<=7.9);
    assert(3.5*1.5==5.25);
    //Ejemplos string
    assert(std::string("hola").length()==4);
    assert(std::string("hola") + std::string("mundo")=="holamundo");
    assert(std::string("casa")==std::string("casa"));
    //Ejemplos unsigned
    assert(2U+3U==5U);
    assert(4U-3U==1U);  

}
