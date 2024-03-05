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
//
// ------------------------------------------------------------
//      GEANT 4 class header file
//      CERN Geneva Switzerland
//
//
//      ------------ GammaRayTelDigitizer ------
//
//           by F.Longo, R.Giannitrapani & G.Santin (24 oct 2001)
//
// ************************************************************

#ifndef GammaRayTelDigitizer_h
#define GammaRayTelDigitizer_h 1

#include "GammaRayTelDigi.hh"

#include "G4SystemOfUnits.hh"
#include "G4VDigitizerModule.hh"
#include "globals.hh"

class GammaRayTelDigitizerMessenger;

class GammaRayTelDigitizer: public G4VDigitizerModule {
public:
    explicit GammaRayTelDigitizer(G4String name);

    ~GammaRayTelDigitizer() override;

    void Digitize() override;

    void SetThreshold(G4double value) {
        energyThreshold = value;
    }

private:
    GammaRayTelDigitsCollection *digitsCollection;

    G4double energyThreshold{120. * keV}; // for TKR digi

    G4double totalEnergy{0.}; // for CAL analysis

    G4double acdThreshold{15 * keV}; // for ACD analysis

    GammaRayTelDigitizerMessenger *digitizerMessenger;
};
#endif
