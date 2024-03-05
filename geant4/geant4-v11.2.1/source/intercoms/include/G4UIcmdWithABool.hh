//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// G4UIcmdWithABool
//
// Class description:
//
// A concrete class of G4UIcommand. The command defined by this class
// takes a Boolean value. Boolean value can be in the following notations:
//    TRUE :
//       1 t T true TRUE
//    FALSE :
//       0 f F false FALSE
// General information of G4UIcommand is given in G4UIcommand.hh

// Author: M.Asai, 1998
// --------------------------------------------------------------------
#ifndef G4UIcmdWithABool_hh
#define G4UIcmdWithABool_hh 1

#include "G4UIcommand.hh"

class G4UIcmdWithABool : public G4UIcommand
{
  public:
    // Constructor. The command string with full path directory
    // and the pointer to the messenger must be given
    G4UIcmdWithABool(const char* theCommandPath, G4UImessenger* theMessenger);

    // Set the parameter name for a Boolean parameter.
    // If "omittable" is set as true, the user of this command can omit
    // the value when the command is applied. If "omittable" is false,
    // the user must supply a Boolean value.
    // "currentAsDefault" flag is valid only if "omittable" is true. If this
    // flag is true, the current value is used as the default value when the
    // user omits the parameter. If this flag is false, the value given by the
    // next SetDefaultValue() method is used
    void SetParameterName(const char* theName, G4bool omittable, G4bool currentAsDefault = false);

    // Set the default value of the parameter. This default value is used
    // when the user of this command omits the parameter value, and
    // "omittable" is true and "currentAsDefault" is false
    void SetDefaultValue(G4bool defVal);

    // Convert string which represents a boolean value to G4bool
    static G4bool GetNewBoolValue(const char* paramString);
};

#endif
