#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <set>
using namespace std;
struct fechas {
    int fe;
    string nom;
};
void add(map<string, set<string>>& BD);
void deleted_fecha_evento(map<string, set<string>>& BD);
void deleted_fecha(map<string, set<string>>& BD);
void find(map<string, set<string>>& BD);
void print(map<string, set<string>>& BD);
void salir(string com);