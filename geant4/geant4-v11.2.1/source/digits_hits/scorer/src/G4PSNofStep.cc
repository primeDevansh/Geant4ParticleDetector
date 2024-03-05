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
//
// G4PSNofStep
#include "G4PSNofStep.hh"
#include "G4UnitsTable.hh"
#include "G4VScoreHistFiller.hh"

// (Description)
//   This is a primitive scorer class for scoring number of steps in the
//  Cell.
//
// Created: 2005-11-14  Tsukasa ASO, Akinori Kimura.
// 2010-07-22   Introduce Unit specification.
// 2020-10-06   Use G4VPrimitivePlotter and fill 1-D histo of step length
//              in mm vs. number of steps (not weighted)        (Makoto Asai)
//

G4PSNofStep::G4PSNofStep(G4String name, G4int depth)
  : G4VPrimitivePlotter(name, depth)
{
  SetUnit("");
}

G4bool G4PSNofStep::ProcessHits(G4Step* aStep, G4TouchableHistory*)
{
  if(boundaryFlag)
  {
    if(aStep->GetStepLength() == 0.)
      return false;
  }
  G4int index  = GetIndex(aStep);
  G4double val = 1.0;
  EvtMap->add(index, val);

  if(!hitIDMap.empty() && hitIDMap.find(index) != hitIDMap.cend())
  {
    auto filler = G4VScoreHistFiller::Instance();
    if(filler == nullptr)
    {
      G4Exception(
        "G4PSNofStep::ProcessHits", "SCORER0123", JustWarning,
        "G4TScoreHistFiller is not instantiated!! Histogram is not filled.");
    }
    else
    {
      filler->FillH1(hitIDMap[index], aStep->GetStepLength(), val);
    }
  }

  return true;
}

void G4PSNofStep::Initialize(G4HCofThisEvent* HCE)
{
  EvtMap = new G4THitsMap<G4double>(detector->GetName(), GetName());
  if(HCID < 0)
  {
    HCID = GetCollectionID(0);
  }
  HCE->AddHitsCollection(HCID, (G4VHitsCollection*) EvtMap);
}

void G4PSNofStep::clear() { EvtMap->clear(); }

void G4PSNofStep::PrintAll()
{
  G4cout << " MultiFunctionalDet  " << detector->GetName() << G4endl;
  G4cout << " PrimitiveScorer " << GetName() << G4endl;
  G4cout << " Number of entries " << EvtMap->entries() << G4endl;
  for(const auto& [copy, nsteps] : *(EvtMap->GetMap()))
  {
    G4cout << "  copy no.: " << copy
           << "  num of step: " << *(nsteps) << " [steps] " << G4endl;
  }
}

void G4PSNofStep::SetUnit(const G4String& unit)
{
  if(unit.empty())
  {
    unitName  = unit;
    unitValue = 1.0;
  }
  else
  {
    G4String msg = "Invalid unit [" + unit + "] (Current  unit is [" +
                   GetUnit() + "] ) for " + GetName();
    G4Exception("G4PSNofStep::SetUnit", "DetPS0011", JustWarning, msg);
  }
}
