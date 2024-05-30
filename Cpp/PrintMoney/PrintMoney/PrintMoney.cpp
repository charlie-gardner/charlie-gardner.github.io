// PrintMoney.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <sstream>
#include <iomanip>

static std::wstring wFormatMoney(double value,int width=0) {
std::wstringstream ss;ss.imbue(std::locale(""));
ss <<std::setw(width)<< std::showbase << std::put_money(value*100);
return ss.str();}

static std::string FormatMoney(double value,int width=0) {
std::stringstream ss;ss.imbue(std::locale(""));
ss <<std::setw(width)<< std::showbase << std::put_money(value*100);
return ss.str();}

void Sample1() {
std::cout << "Sample1()\n";double value=-12000.456;
std::cout <<"["<<FormatMoney(value,14) <<"]\n";
std::printf("[%14s]\r\n",FormatMoney(value).c_str());
std::wcout << L"[" << wFormatMoney(value, 14) << L"]\n";
std::wprintf(L"[%14s]\r\n", wFormatMoney(value).c_str());}

int main(){Sample1();}
