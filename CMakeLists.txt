cmake_minimum_required (VERSION 2.6)
project(libpemelter)

include_directories("../libmelter")

add_library(pemelter PEMangler.cc PEParser.cc PEMelter.cc)
