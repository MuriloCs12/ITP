#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "cartas.cpp"

TEST_CASE("Verificando se há um jogo num conjunto pequeno de cartas.") {
  Cards c = {
    3,
    {
      {CUPS, TWO},
      {CUPS, THREE},
      {CUPS, FOUR}
    }
  };
  CHECK(verificarJogo(c) == true);
};

TEST_CASE("Verificando se há um jogo num conjunto pequeno de cartas.")
{
  Cards c = {
      3,
      {
          {CUPS, TWO},
          {CUPS, THREE},
          {CUPS, FOUR},
          {SPADES, TWO},
          {SPADES, THREE},
          {SPADES, FOUR},
          {CLUBS, TWO},
          {CLUBS, THREE},
          {CLUBS, FOUR},
          {GOLDS, TWO},
          {GOLDS, THREE},
          {GOLDS, FOUR},
      }};
  CHECK(verificarJogo(c) == true);
};

TEST_CASE("Verificando retorno para um jogo não existente")
{
  Cards c = {
    3,
    {
      {CUPS, TWO},
      {SPADES, THREE},
      {CUPS, FOUR}
    }
  };
  CHECK(verificarJogo(c) == false);
};

TEST_CASE("Verificando se há um jogo com ás no final.")
{
  Cards c = {
    3,
    {
      {CUPS, QUEEN},
      {CUPS, KING},
      {CUPS, ACE}
    }
  };
  CHECK(verificarJogo(c) == true);
};