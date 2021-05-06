#include <iostream>
#include <cassert>

int main(){
    assert(true==true);
    assert(true!=false);
    assert(true or false==true);
    assert(true and true==true);
    assert(!false);
    assert(true xor false);
    assert('a'=='a');
    assert('a'!='b');
    assert('3'<='4');
    assert('4'>='4');
    assert('A'+32=='a');
    assert('a'-32=='A');
    assert('3'*'2'==2550);
    assert('2'/'2'==1);
    assert('2'%'2'==0);
    assert(455==455);
    assert(55!=690);
    assert(56<=75);
    assert(589>=57);
    assert(25+5==30);
    assert(25-5==20);
    assert(25*2==50);
    assert(50/2==25);
    assert(15%3==0);
    assert(2.4-0.3==2.1);
    assert(2.4==2.4);
    assert(2.4!=6.3);
    assert(3.1>=2.6);
    assert(6.8<=7.9);
    assert(3.5*1.5==5.25);
    std::string ejemplo="hola";
    std::string ejemplo2="mundo";
    assert(ejemplo.length()==4);
    assert(ejemplo + ejemplo2=="holamundo");
    assert(ejemplo!=ejemplo2);
    assert(ejemplo==ejemplo);
    assert(ejemplo<=ejemplo2);
    assert(ejemplo2>=ejemplo);
      

}
