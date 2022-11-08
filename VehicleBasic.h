/*
Name: Ishwinder Singh Saini
Email: issaini5@myseneca.ca
Student ID: 147463202
Data:
Section: NGG
*/
#ifndef SDDS_VehicleBasic_H
#define SDDS_VehicleBasic_H
#include<iostream>
namespace sdds
{
class VehicleBasic
{
char m_licencePlate[9];
char m_currentAddress[21];
int m_year;
public:
VehicleBasic(const char* plate, int year);
void NewAddress(const char* address);
std::ostream& write(std::ostream& os)const ;
std::istream& read(std::istream& in);
};
std::istream& operator>> (std::istream& in, VehicleBasic& v);
std::ostream& operator<< (std::ostream& os, const VehicleBasic& v);
}
#endif