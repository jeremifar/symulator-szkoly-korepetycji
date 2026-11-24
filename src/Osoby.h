//  uczestnicy szkoły:
//  - Osoba (abstrakcyjna): id, imię, nazwisko, kalendarz, virtual oplataZaOkres()
//  - Uczen: saldo, czego się uczy, wplac(), oplataZaOkres() ze zniżką
//  - Korepetytor: kompetencje, stawka, uczy(), oplataZaOkres() z premią
#pragma once
#include <iostream>
using namespace std;

class Osoba {};
class Uczen : public Osoba {};
class Korepetytor : public Osoba {};