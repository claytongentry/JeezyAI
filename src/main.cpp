/*
 * JeezyAI is a rap bot that emulates Young Jeezy.
 *
 * Given a bar, JeezyAI will return a rhyme on beat. The AI is trained on a
 * bank of Jeezy lyrics, so it spits like Jeezy.
 *
 * Cameron Matson, Clayton Gentry
 */

#include <iostream>
#include <fstream>
#include <string>

#include "model.h"
#include "word.h"

#define LYRICS_FILE "lyrics/lyrics.txt"
#define TEST_FILE "lyrics/test.txt"

int main(int argc, char *argv[])
{
  std::string bar;

  std::cout << "Gimme a bar\n";
  std::getline(std::cin, bar);

  Model *m = new Model(TEST_FILE);

  std::cout<<m->getSize()<<std::endl;
  m->print();

  return 0;
  /*
  Word w("ya");
  Word a(w);

  std::cout<<a.getVal()<<std::endl;
  if(w==a){
    std::cout<<"pus"<<std::endl;
  }
  */
}
