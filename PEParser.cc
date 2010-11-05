/* 
 * File:   PEParser.cpp
 * Author: daniele
 * 
 * Created on October 25, 2010, 12:10 PM
 */

#include <cstdio>
#include "PEParser.h"
#include "Chunk.h"
#include "win32types.h"

PEParser::PEParser() {
    REGISTER_PARSE_ACTION( 0, sizeof(IMAGE_DOS_HEADER), "dos_header", &PEParser::parseDOSHeader);
}

PEParser::~PEParser() {
}

bool PEParser::parseDOSHeader( Chunk& chunk )
{
    // copy data
    dosHeader_ = *( reinterpret_cast<PIMAGE_DOS_HEADER>( chunk.ptr() ) );
    
    printf("[DOS Header] Signature        : %04x\n", dosHeader_.e_magic);
    printf("[DOS Header] NT Header address: %08x\n", dosHeader_.e_lfanew);
    
    REGISTER_PARSE_ACTION( dosHeader_.e_lfanew, sizeof(IMAGE_NT_HEADERS), "nt_headers", &PEParser::parseNTHeaders);

    return true;
}

bool PEParser::parseNTHeaders( Chunk& chunk )
{
    ntHeaders_ = *( reinterpret_cast<PIMAGE_NT_HEADERS>( chunk.ptr() ) );
    
    printf("[NT Headers] Signature : %08x\n", ntHeaders_.Signature);
    printf("[NT Headers] SizeOfImage : %08x\n", ntHeaders_.OptionalHeader.SizeOfImage);
    
    printf("Section alignment ... %08x", ntHeaders_.OptionalHeader.SectionAlignment);
    printf("File alignment    ... %08x", ntHeaders_.OptionalHeader.FileAlignment);
    printf("SizeOfImage       ... %08x", ntHeaders_.OptionalHeader.SizeOfImage);
    
    return true;
}
