/* 
 * File:   PEParser.h
 * Author: daniele
 *
 * Created on October 25, 2010, 12:10 PM
 */

#ifndef PEPARSER_H
#define	PEPARSER_H

#include "Parser.h"
#include "win32types.h"

class Chunk;

REGISTER_PARSER(PEParser);

class PEParser : public ::prototype::Parser {
public:
    PARSER(PEParser);
    
    PEParser();
    virtual ~PEParser();
    
private:

    bool parseDOSHeader( Chunk& chunk );
    bool parseNTHeaders( Chunk& chunk );
    
    IMAGE_DOS_HEADER dosHeader_;
    IMAGE_NT_HEADERS ntHeaders_;
};

#endif	/* PEPARSER_H */

