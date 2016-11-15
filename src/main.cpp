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
#include "word_list.h"
#include "battle.h"

#define LYRICS_FILE "lyrics/lyrics.txt"
#define TEST_FILE "lyrics/test.txt"

int main(int argc, char *argv[]) {
  Model *m = load_model();

  std::string bar;
  std::cout << "Gimme a bar\n";
  std::getline(std::cin, bar);
}

Model* load_model() {
  std::cout << "Initializing..." << std::endl;
  Model *m = new Model(LYRICS_FILE);
  std::cout << "Model loaded!" << std::endl;

  return m;
}
