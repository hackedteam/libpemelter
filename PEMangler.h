/* 
 * File:   PEMangler.h
 * Author: daniele
 *
 * Created on November 5, 2010, 10:47 AM
 */

#ifndef PEMANGLER_H
#define	PEMANGLER_H

#include "Mangler.h"

REGISTER_MANGLER(PEMangler);

class PEMangler : public ::prototype::Mangler {
public:
    MANGLER(PEMangler);
    
    PEMangler();
    virtual ~PEMangler();

private:
    
};

#endif	/* PEMANGLER_H */

