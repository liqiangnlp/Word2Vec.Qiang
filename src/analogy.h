/*
* $Id:
* 0019
*
* $File:
* analogy.h
*
* $Proj:
*
* $Func:
* analogy
*
* $Version:
* 1.0.0
*
* $Created by:
* Qiang Li
*
* $Email
* liqiangneu@gmail.com
*
* $Last Modified by:
* 2014-09-02, 12:55
*/

#ifndef WORD2VECTOR_ANALOGY_H_
#define WORD2VECTOR_ANALOGY_H_

#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include "model.h"
#include "basic_method.h"

using namespace std;
using namespace word2vector_model;
using namespace word2vector_basic_method;

namespace word2vector_analogy {

class Analogy : public BasicMethod {
 public:
  Model model_;

 public:
  string question_file_;

 public:
  long long closest_word_number;

 public:
  Analogy() {
    closest_word_number = 40;
  }
  ~Analogy() {}

 public:
  bool StartAnalogy(map<string, string> &parameters);

};

}

#endif

