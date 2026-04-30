#include <string>
using namespace std;

bool ehLetra(char c) {
  return (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z');
}

/**
 * Converte uma string para o formato camelCase. O formato camelCase é um estilo de escrita
 * onde a primeira letra de cada palavra, exceto a primeira, é maiúscula e as palavras são
 * concatenadas sem espaços. Por exemplo, "ola mundo" se torna "olaMundo".
 * @param texto A string a ser convertida.
 * @return A string convertida para camelCase.
 */

string to_camel(string texto) {
  string resultado;
  bool proximaMaiuscula = false;

  for (char c: texto) {
    if (!ehLetra(c)) {
      proximaMaiuscula = true;
      continue;
    }

    if (resultado.empty()) {
      resultado += tolower(c);
      proximaMaiuscula = false;
      continue;
    }
    
    if (proximaMaiuscula) {
      resultado += toupper(c);
      proximaMaiuscula = false;
      continue;
    } 

    resultado += tolower(c);
  }

  return resultado;
}
