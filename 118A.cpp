//
// Created by Oswaldo G. on 26/11/24.
//
/**
 * Solo hace falta no tomar en cuenta las letras que ahi dicen
 * Y generar un string que se va construyendo poco a poco, primero el punto luego la letra.
 */
#include <iostream>
#include <cctype>
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main() {
  fastIO;
  string s; cin >> s;
  string build = "";

  for(char i : s) {
      if(i != 65 && i != 97 && i != 69 && i != 101 && i != 73 && i != 105 && i != 79 && i != 111 && i != 85 && i != 117 && i != 89 && i != 121) {
            build += ".";
            build += tolower(i);
      }

  }
      cout << build;

  return 0;
}