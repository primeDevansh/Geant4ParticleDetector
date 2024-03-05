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
// G4VPDigitsCollectionIO implementation
//
// Author: Youhei Morita, 16.08.2001
// --------------------------------------------------------------------

#include "G4VPDigitsCollectionIO.hh"

// --------------------------------------------------------------------
G4VPDigitsCollectionIO::G4VPDigitsCollectionIO(const G4String& detName,
                                               const G4String& colName)
  : f_detName(detName)
  , f_colName(colName)
{
}

// --------------------------------------------------------------------
G4bool G4VPDigitsCollectionIO::operator==(
  const G4VPDigitsCollectionIO& right) const
{
  return ((f_detName == right.f_detName) && (f_colName == right.f_colName));
}