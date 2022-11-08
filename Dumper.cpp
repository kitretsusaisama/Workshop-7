/*
==============================================
 Name:- Swati Gupta
 Email:- sgupta135@myseneca.ca
 Student ID:-166785212
 Date:- Nov 08,2022
 Workshop: 7 
==============================================
*/
#include<iostream>
#include "Dumper.h"
#include "VehicleBasic.h"
using namespace std;
namespace sdds
{
Dumper::Dumper(const char* plate, int year, double capacity, const char* 
address) :VehicleBasic(plate, year)
{
m_capacity = capacity;
m_cargo = 0;
NewAddress(address);
}
bool Dumper::loaddCargo(double cargo)
{
bool loaded = false;
if (m_cargo+cargo <= m_capacity)
{
m_cargo += cargo;
loaded = true;
}
return loaded;
}
bool Dumper::unloadCargo()
{
bool unload = m_cargo > 0;
m_cargo = 0;
return unload;
}
std::ostream& Dumper::write(std::ostream& os)const
{
VehicleBasic::write(os);
os << " | " << m_cargo << "/" << m_capacity;
return os;
}
std::istream& Dumper::read(std::istream& in)
{
VehicleBasic::read(in);
cout << "Capacity: ";
in >> m_capacity;
cout << "Cargo: ";
in >> m_cargo;
return in;
}
std::istream& operator>> (std::istream& in, Dumper& d)
{
return d.read(in);
 }
std::ostream& operator<< (std::ostream& os, const Dumper& v)
{
return v.write(os);
 }
}