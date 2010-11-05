/* 
 * File:   PEMelter.cc
 * Author: daniele
 * 
 * Created on November 5, 2010, 10:47 AM
 */

#include "PEMelter.h"
#include "PEParser.h"
#include "PEMangler.h"

PEMelter::PEMelter()
{
    parser_ = new PEParser();
    mangler_ = new PEMangler();
    melter_ = new Melter(*parser_, *mangler_);
}

PEMelter::~PEMelter() {
    delete melter_;
    delete mangler_;
    delete parser_;
}
