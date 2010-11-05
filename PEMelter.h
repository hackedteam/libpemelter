/* 
 * File:   PEMelter.h
 * Author: daniele
 *
 * Created on November 5, 2010, 10:47 AM
 */

#ifndef PEMELTER_H
#define	PEMELTER_H

#include "Melter.h"

class PEParser;
class PEMangler;

class PEMelter {
public:
    PEMelter();
    virtual ~PEMelter();
    
private:
    PEParser* parser_;
    PEMangler* mangler_;
    Melter* melter_;
};

#endif	/* PEMELTER_H */
