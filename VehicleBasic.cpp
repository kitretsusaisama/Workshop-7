/*
==============================================
 Name:- Swati Gupta
 Email:- sgupta135@myseneca.ca
 Student ID:-166785212
 Date:- Nov 08,2022
 Workshop: 7 
==============================================
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cstring>
#include "VehicleBasic.h"
using namespace std;
namespace sdds
{
VehicleBasic::VehicleBasic(const char* plate, int year)
{
m_year = year;
strcpy(m_licencePlate,plate);
strcpy(m_currentAddress, "Factory");
}
void VehicleBasic::NewAddress(const char* address)
{
if (strcmp(m_currentAddress,address)!=0)
{
//| [LICENSE_PLATE]| |[CURRENT_ADDRESS] --->[NEW_ADDRESS] | <ENDL>
cout << "|" << right << setw(8) << m_licencePlate << "| |"; 
cout << right << setw(20) << m_currentAddress << " ---> ";
cout << left << setw(20) << address << "|\n" ;
strcpy(m_currentAddress, address);
}
}
std::ostream& VehicleBasic::write(std::ostream& os)const
{
os << "| " << m_year << " | " << m_licencePlate << " | " << 
m_currentAddress;
//| [YEAR] | [PLATE] | [ADDRESS]
return os;
}
std::istream& VehicleBasic::read(std::istream& in)
{
cout << "Built year: ";
in >> m_year;
cout << "License plate: ";
in >> m_licencePlate;
cout << "Current location: ";
in >> m_currentAddress;
return in;
}
std::istream& operator>> (std::istream& in, VehicleBasic& v)
{
return v.read(in);
 }
 std::ostream& operator<< (std::ostream& os, const VehicleBasic& v)
 {
return v.write(os);
}
}
