/*
==============================================
 Name:- Swati Gupta
 Email:- sgupta135@myseneca.ca
 Student ID:-166785212
 Date:- Nov 08,2022
 Workshop: 7 
==============================================
*/
#ifndef SDDS_Dumper_H
#define SDDS_Dumper_H
#include <iostream>
#include "VehicleBasic.h"
namespace sdds
{
class Dumper : public VehicleBasic
{
double m_capacity;
double m_cargo;
public:
Dumper(const char* plate, int year, double capacity, const char* 
address);
bool loaddCargo(double cargo);
bool unloadCargo();
std::ostream& write(std::ostream& os)const;
std::istream& read(std::istream& in);
};
std::istream& operator>> (std::istream& in, Dumper& d);
std::ostream& operator<< (std::ostream& os, const Dumper& v);
}
#endif
