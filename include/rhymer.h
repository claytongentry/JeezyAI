/*
 * rhymer.h
 *
 * A class for identifying rhymes
 */


#ifndef rhymer_H
#define rhymer_H

#include <iostream>
#include <string>

#include "model.h"
#include "nouncer.h"
#include "denouncer.h"

class Rhymer {
  public:
    Rhymer(Nouncer* nouncer, Denouncer* denouncer);

    // Returns a rhyming Word for the given base
    Word* rhyme(std::string base);

  private:
    Nouncer* n;
    Denouncer* d;
};

#endif
