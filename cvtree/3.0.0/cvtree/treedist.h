/*
 * Copyright (c) 2018  Wenzhou Institute, University of Chinese Academy of Sciences.
 * See the accompanying Manual for the contributors and the way to cite this work.
 * Comments and suggestions welcome. Please contact
 * Dr. Guanghong Zuo <ghzuo@ucas.ac.cn>
 * 
 * @Author: Dr. Guanghong Zuo
 * @Date: 2018-04-26 09:00:28
 * @Last Modified By: Dr. Guanghong Zuo
 * @Last Modified Time: 2022-11-20 10:11:34
 */

#ifndef TREEDIST_H
#define TREEDIST_H

#include <fstream>
#include <sstream>

#include "marktree.h"
#include "stringOpt.h"
using namespace std;

// read arguments
struct Args {
  string program, afile, bfile;
  bool unroot;

  Args(int, char **);
  void usage();
};

#endif
