/*
 * superhero.h
 * 
 * Copyright 2018 Guest <guest-57a1zj@comp1210>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

#include <string>
 using namespace std;
 class Superhero{
 private:
 string Theflash;
 int league;
 
 public:
 Superhero(string thehero, int justiceleague){
 
 
 }
 
 void SetTheflash(string hero){
 
 Theflash = hero;
 }
 void  settheleaague(int justice){
 
 League = justice;
 }
 
string getTheflash() const{

return Theflash;
}
 int getLeague() const{

return League;
}
 
 
 };

