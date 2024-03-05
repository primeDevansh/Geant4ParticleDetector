# - uninstall target template
#
if (NOT EXISTS "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/install_manifest.txt")
    message(FATAL_ERROR "Cannot find install manifest: \"/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/install_manifest.txt\"")
endif(NOT EXISTS "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/install_manifest.txt")

file(READ "/Users/devanshrastogi/Documents/07 My Codes/Geant4ParticleDetector/geant4/geant4-v11.2.1/build/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")

foreach (file ${files})
    message(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
    if (EXISTS "$ENV{DESTDIR}${file}")
        execute_process(
            COMMAND /opt/local/bin/cmake -E remove "$ENV{DESTDIR}${file}"
            OUTPUT_VARIABLE rm_out
            RESULT_VARIABLE rm_retval
        )
        if(NOT ${rm_retval} EQUAL 0)
            message(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
        endif (NOT ${rm_retval} EQUAL 0)
    else (EXISTS "$ENV{DESTDIR}${file}")
        message(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
    endif (EXISTS "$ENV{DESTDIR}${file}")
endforeach(file)

