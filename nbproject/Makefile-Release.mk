#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/PEMangler.o \
	${OBJECTDIR}/PEParser.o \
	${OBJECTDIR}/PEMelter.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=../../libmelter/trunk/dist/Release/GNU-Linux-x86/libtrunk.a

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-Release.mk dist/Release/GNU-Linux-x86/libtrunk.so

dist/Release/GNU-Linux-x86/libtrunk.so: ../../libmelter/trunk/dist/Release/GNU-Linux-x86/libtrunk.a

dist/Release/GNU-Linux-x86/libtrunk.so: ${OBJECTFILES}
	${MKDIR} -p dist/Release/GNU-Linux-x86
	${LINK.cc} -shared -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libtrunk.so -fPIC ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/PEMangler.o: PEMangler.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -I../../libmelter/trunk -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/PEMangler.o PEMangler.cc

${OBJECTDIR}/PEParser.o: PEParser.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -I../../libmelter/trunk -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/PEParser.o PEParser.cpp

${OBJECTDIR}/PEMelter.o: PEMelter.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -I../../libmelter/trunk -fPIC  -MMD -MP -MF $@.d -o ${OBJECTDIR}/PEMelter.o PEMelter.cc

# Subprojects
.build-subprojects:
	cd ../../libmelter/trunk && ${MAKE}  -f Makefile CONF=Release
	cd ../libmelter && ${MAKE}  -f Makefile CONF=Release

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Release
	${RM} dist/Release/GNU-Linux-x86/libtrunk.so

# Subprojects
.clean-subprojects:
	cd ../../libmelter/trunk && ${MAKE}  -f Makefile CONF=Release clean
	cd ../libmelter && ${MAKE}  -f Makefile CONF=Release clean

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
