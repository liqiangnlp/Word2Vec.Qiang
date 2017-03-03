/*
 * $Id:
 * 0003
 *
 * $File:
 * parameter_controller.cpp
 *
 * $Proj:
 *
 * $Func:
 * header file of control parameters
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
 * 2012-12-04,09:56
 */

#include "parameter_controller.h"


namespace word2vector_parameter_controller {

void GetParameter::GetParamsOfWord2Vector() {
//  cerr<<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
//      <<"# Vector Representations of Words                                 #\n"
//      <<"#                                            Version 1.0.0        #\n"
//      <<"#                                            liqiangneu@gmail.com #\n"
//      <<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
//      <<"[USAGE]\n"
//      <<"                   word2vector              --WORD2VEC\n"
  cerr<<"Vector Representation of Words Toolkit V1.0.0, liqiangneu@gmail.com\n"
      <<"[OPTION]\n"
      <<"             -input : Use inputted text data to train the model.\n"
      <<"            -config : Configuration file.\n"
      <<"              -size : Set size of word vectors.\n"
      <<"            -window : Set max skip length between words.\n"
      <<"            -binary : Save the resulting vectors in binary moded.\n"
      <<"            -output : Save the resulting words vectors.\n"
      <<"        -save-vocab : The vocabulary will be saved to file.\n"
      <<"        -read-vocab : The vocabulary will be read from file, no constructed from the training data.\n"
      <<"               -log : Log File.\n"
      <<"[EXAMPLE]\n"
      <<"         word2vector  --WORD2VEC  -input data.txt  -output vec.txt\n"
      <<flush;
  return;
}


bool GetParameter::GetAllFunctions(int argc) {
  if (argc <= 1) {
//    cerr<<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
//        <<"# Decoder for Statistical Machine Translation                     #\n"
//        <<"#                                            Version 1.0.0        #\n"
//        <<"#                                            liqiangneu@gmail.com #\n"
//        <<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
    cerr<<"Vector Representation of Words Toolkit V1.0.0, liqiangneu@gmail.com\n"
        <<"[USAGE]\n"
        <<"          word2vector           <action>           [OPTIONS]\n"
        <<"[ACTION]\n"
        <<"               --WORD2VEC          :   Word 2 Vector.\n"
        <<"[TOOLS]\n"
        <<"     >> xxx\n"
        <<"                  word2vector           --WORD2VEC\n\n"
        <<flush;
    return true;
  }
  return false;
}


bool GetParameter::GetAllFunctions(int argc, string argv) {
  if ((argc % 2 != 0) || (argc % 2 == 0) && \
     ((argv != "--WORD2VEC") && (argv != "--DISTANCE") && \
      (argv != "--ACCURACY") && (argv != "--ANALOGY") && \
      (argv != "--WORD2PHRASE"))) {
//    cerr<<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
//        <<"# Decoder for Statistical Machine Translation                     #\n"
//        <<"#                                            Version 1.0.0        #\n"
//        <<"#                                            liqiangneu@gmail.com #\n"
//        <<"####### SMT ####### SMT ####### SMT ####### SMT ####### SMT #######\n"
    cerr<<"Vector Representation of Words Toolkit V1.0.0, liqiangneu@gmail.com\n"
        <<"[USAGE]\n"
        <<"          word2vector           <action>           [OPTIONS]\n"
        <<"[ACTION]\n"
        <<"               --WORD2VEC          :   Word 2 Vector.\n"
        <<"[TOOLS]\n"
        <<"     >> xxx\n"
        <<"                  word2vector           --WORD2VEC\n\n"
        <<flush;
            return true;
        }
        return false;
    }


bool GetParameter::GetParameters( int argc, string argv ) {
  if (argc == 2) {
    if (argv == "--WORD2VEC") { 
      GetParamsOfWord2Vector();
    } else if (argv == "--DISTANCE") {
      cerr<<"Get parameters of distance!\n"<<flush;
    } else if (argv == "--ACCURACY") {
      cerr<<"Get parameters of accuracy!\n"<<flush;
    } else if (argv == "--ANALOGY") {
      cerr<<"Get parameters of analogy!\n"<<flush;
    } else if (argv == "--WORD2PHRASE") {
      cerr<<"Get parameters of word2phrase!\n"<<flush;
    }
    return true;
  }
  return false;
}

}


