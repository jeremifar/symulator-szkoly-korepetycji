// procesy zarządzające szkołą:
//  - Proces: baza, trzyma referencję do Szkoły
//  - Koordynator: wszystkieOsoby(), dopasuj() ucznia do korepetytora (grafik)
//  - Ksiegowy: saldo(okres), dluznicy() (finanse)
#pragma once
#include <iostream>
using namespace std;

class Proces {};
class Koordynator : public Proces {};
class Ksiegowy : public Proces {};