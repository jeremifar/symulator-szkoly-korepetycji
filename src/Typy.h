// małe typy pomocnicze (same dane, prawie bez logiki):
//  - enumy: Przedmiot, Poziom, StatusLekcji
//  - Kompetencja: przedmiot + poziom
//  - Termin: dzień, godzina, długość; operatory ==, <, <<
//  - Lekcja: uczeń, korepetytor, termin, typ, tydzień, status
//  - wyjątki: KolizjaTerminu, NieprawidlowaKwota

#pragma once
#include <iostream>
using namespace std;

struct Kompetencja {};
struct Termin {};
struct Lekcja {};
class KolizjaTerminu {};
class NieprawidlowaKwota {};