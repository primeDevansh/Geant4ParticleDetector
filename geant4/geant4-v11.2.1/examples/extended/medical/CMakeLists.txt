#---Adding all medical examples subdirectories explicitly 

cmake_minimum_required(VERSION 3.16...3.27)

add_subdirectory(DICOM)
message("-- G4 Examples : The DICOM2 example requires DICOM built first.")
add_subdirectory(dna)
add_subdirectory(electronScattering)
add_subdirectory(electronScattering2)
add_subdirectory(fanoCavity)
add_subdirectory(fanoCavity2)
add_subdirectory(GammaTherapy)
add_subdirectory(radiobiology)
