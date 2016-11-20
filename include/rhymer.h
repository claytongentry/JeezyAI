/*
 * rhymer.h
 *
 * A class for identifying rhymes
 */


#ifndef rhymer_H
#define rhymer_H

#include "model.h"
#include "word.h"
#include "nouncer.h"

class Rhymer {
  public:
    Rhymer(Nouncer* nouncer);
    Word* rhyme(std::string base, Model* m);

  private:
    Nouncer* pd;
};

#endif
