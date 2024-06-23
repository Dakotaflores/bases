#include "BaseDatos.h"

 int main() {
    map<string, set<string>>BD;
    string ca = "Add Fecha Evento";
     string ka = "add fecha evento";
    string ce = "Del Fecha Evento";
     string ke = "del fecha evento";
    string ci = "Del Fecha";
     string ki = "del fecha";
    string co = "Find Fecha";
     string ko = "find fecha";
    string cu = "Print";
     string ku = "print";
    string fdm = "exit";
     string fmmd = "Exit";
   string com;

   while(true) {
    
     cout<<"Ingrese un comando: ";
    getline(cin,com);
    if(com == ca || com == ka) {
        add(BD);
    }
    else if(com == ce || com == ke) {
       deleted_fecha_evento(BD);
    }
    else if(com == ci || com == ki) {
        deleted_fecha(BD);    
    }
    else if(com == co || com == ko) {
         find(BD);
    }
    else if(com == cu || com == ku) {
        print(BD);        
    }  
    else if(com == fdm || com == fmmd) {
        salir(com);
    }
    else {
        cout<<"Unknown command: "<<com<<endl;
    }
  
}
    return 0;
}