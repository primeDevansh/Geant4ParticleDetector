#---Adding examples subdirectories explicitly
#   and a custom target to for building all basic examples -------------

cmake_minimum_required(VERSION 3.16...3.27)

if(GEANT4_BUILD_MULTITHREADED)
  add_subdirectory(B2b)

  add_custom_target(g4tbb DEPENDS exampleB2bTBB)
else()
  message("-- G4 Examples: tbb examples require multithreaded build, disable")
endif()
