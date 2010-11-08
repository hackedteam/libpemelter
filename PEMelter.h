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
    
    virtual void set_cooked_file(const char* cooked);
    
    virtual std::size_t write(const char* data, std::size_t size);
    virtual bool empty() { return melter_->empty(); }
    virtual const char* get_data(std::size_t* size);
    virtual void clear();
    
private:
    PEParser* parser_;
    PEMangler* mangler_;
    Melter* melter_;
};

#endif	/* PEMELTER_H */
