//
// Created by checco on 01/01/20.
//

#include "binaryCrossentropy.h"

void BinaryCrossentropy::Error(const arma::mat &&trainLabelsBatch,
                               arma::mat &&outputActivateBatch,
                               arma::mat &&currentError) {
  currentError = arma::mean(
      -trainLabelsBatch % arma::log(outputActivateBatch) - (1 - trainLabelsBatch) % arma::log(1 - outputActivateBatch));
}

// TODO:
void BinaryCrossentropy::ComputePartialDerivative(const arma::mat &&trainLabelsBatch,
                                                  arma::mat &&outputActivateBatch,
                                                  arma::mat &&errorBatch) {

}


