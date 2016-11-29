/*
 * model.h
 *
 * The model used to power the AI's decision making is an adjacency list
 * of all of Young Jeezy's lyrics.
 *
 * The adjacency list represents an n x n matrix of all the lyrics.
 * The element at the intersection of a word on the x-axis and a word
 * on the y axis represents the number of times the y-axis word preceded
 * the x-axis word in Jeezy's songs.
 */


#ifndef model_H
#define model_H

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>


#include "word.h"
#include "wordList.h"

class Model {
  public:
    Model();

    WordList* find(Word* leader);

    Word* init_word(std::string val);

    void parseLine(std::string line);
    void processLyric(std::string lyric);
    void addOrUpdate(Word* w);
    void print();

    void visualize(std::string outFile);

    int getSize();

    WordList& operator[](int i);

  private:
    std::vector<WordList>* matrix;
};

#endif
