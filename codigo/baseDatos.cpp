#include "BaseDatos.h"

void add(map<string, set<string>>& BD) {
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d, p;
    cout << "Introduce Año-Mes-Dia: " << endl;
    cin >> aho.fe >> mes.fe >> dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
        h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
        h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
        h = to_string(aho.fe);
    } 

    if(mes.fe <= 0 || mes.fe > 12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        cin.ignore();   
        return;
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }

    if (dia.fe <= 0 || dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
        cin.ignore();
    return;
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }

    p = h + "-" + m +"-"+ d;

    cin.ignore();
    cout<<"Introduce el evento: ";

    getline(cin,eve.nom);
    BD[p].insert(eve.nom);
}

void print(map<string, set<string>>& BD) {
    for(auto& x : BD) {
        for(auto& y : x.second) {
            cout << x.first << ": ";
            cout << y << endl;
        }
    }
}

void salir(string com) {
    cout << "Gracias por usar nuestros servicios";
    exit(1);
}

void deleted_fecha_evento(map<string, set<string>>& BD) {
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d, p;
    cout << "Introduce Año-Mes-Dia: " << endl;
    cin >> aho.fe >> mes.fe >> dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
        h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
        h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
        h = to_string(aho.fe);
    } 
    if(mes.fe<= 0 || mes.fe>12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        cin.ignore();
        return;
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }
    if (dia.fe <= 0 || dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
        cin.ignore();
    return;
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }

    p = h + "-" + m +"-"+ d;

    cin.ignore();
    cout<<"Introduce el evento: ";
    getline(cin,eve.nom);

    //Repasar a detalle esta parte del codigo

    auto x = BD.find(p);
    if (x != BD.end()) {
        auto event_x = x->second.find(eve.nom);
        if (event_x != x->second.end()) {
            x->second.erase(event_x);
            cout << "Deleted successfully" << endl;
        } else {
            cout << "Event not found" << endl;
        }
    } else {
        cout << "Event not found" << endl;
    }
}

void deleted_fecha(map<string, set<string>>& BD) {

    int contador = 0;
    fechas aho, mes, dia;
    fechas eve;
    string h, m, d, p;
    cout << "Insert Año-Mes-Dia: " << endl;
    cin >> aho.fe >> mes.fe >> dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 

    if(mes.fe <= 0 || mes.fe > 12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        cin.ignore();
        return;
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }

    if (dia.fe <= 0 || dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
        cin.ignore();
    return;
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }

    p = h + "-" + m +"-"+ d;
    cin.ignore();

    //Analizar a fondo la estructura de esta funcion

    auto x = BD.find(p);
    if (x != BD.end()) {              // Si la fecha se encuentra.
        contador = x->second.size();  // Contar cuántos eventos hay.
        x->second.clear();            // Eliminar todos los eventos.
    }
    cout << "Deleted " << contador << " events" << endl;
}


void find(map<string, set<string>>& BD) {

    fechas aho, mes, dia;
    fechas eve;
    string h, m, d, p;
    cout << "Introduce Año-Mes-Dia: " << endl;
    cin >> aho.fe >> mes.fe >> dia.fe;
    
    if(aho.fe < 10) {
        h = to_string(aho.fe);
       h = "000" + h;
    } else if (aho.fe < 100 ) {
        h = to_string(aho.fe);
       h = "00" + h;  
    }   else if (aho.fe < 1000) {
        h = to_string(aho.fe);
        h = "0" + h; 
    } else {
       h = to_string(aho.fe);
    } 

    if(mes.fe <= 0 || mes.fe > 12) {
        cout<<"Month value is invalid: "<<mes.fe<<endl;
        cin.ignore();
        return;
    }  else if(mes.fe < 10) {
        m = to_string(mes.fe);
        m = "0" + m;
    } else {
        m = to_string(mes.fe);
    }

    if (dia.fe <= 0 || dia.fe > 31) {
        cout<<"Day value is invalid: "<<dia.fe<<endl;
        cin.ignore();
    return;
    } else if (dia.fe < 10) {
        d = to_string(dia.fe);
        d = "0" + d;
    } else {
        d = to_string(dia.fe);
    }

    p = h + "-" + m +"-"+ d;
    cin.ignore();
    
    //Analizar este codigo
    auto x = BD.find(p);
    if(x != BD.end()) {
        cout << "Events en la fecha " << p << ": " << endl;
        for (const auto& event : x->second) {
            cout << "- " << event << endl;
        }
    } else {
        cout << "No events found for the date: " << p << endl;
    }
    
}