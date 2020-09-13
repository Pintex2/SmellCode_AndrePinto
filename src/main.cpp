#include <iostream>

using namespace std;

int main() {
    char o;
    cout << "Ingrese el operador  + o - o * o /: ";
    cin >> o;
    if(o=='+'){
      int n1;
      int n2;
      int r1;
       cout << "Ingrese el primer numero: ";
       cin>>n1;
                    cout << "Ingrese el segundo numero: ";
                    cin>>n2;
                    r1=n1+n2;
                    cout << r1;
    }
    if(o=='-'){
                    float n1;
                    float n2;
                    float r2;
                    cout << "Ingrese el primer numero: ";

       cin>>n1;
       cout << "Ingrese el segundo numero: ";
       cin>>n2;
       r2=n1-n2;

      cout << r2;
    }
    if(o=='*'){
      float n1;

              float n2;

              float r3;

              cout << "Ingrese el primer numero: ";

              cin>>n1;

       cout << "Ingrese el segundo numero: ";

       cin>>n2;

       r3=n1*n2;

      cout << r3;
    }
     if(o=='/'){
       float n1;

       float n2;

                float r4;

                cout << "Ingrese el primer numero: ";

                cin>>n1;

                cout << "Ingrese el segundo numero: ";

                cin>>n2;
                r4=n1/n2;


      cout << r4;
     }
     if(o != '+' ){
       if(o != '-')
       {
         if(o != '*' )
         {
           if(o!='/'){
              cout<<"Operador incorrecto"<<endl;
           }
         }
       }

     }
    return 0;
}
