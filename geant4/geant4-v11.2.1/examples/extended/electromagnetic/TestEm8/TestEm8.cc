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
/// \file electromagnetic/TestEm8/TestEm8.cc
/// \brief Main program of the electromagnetic/TestEm8 example
//
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#include "G4RunManagerFactory.hh"
#include "G4UImanager.hh"
#include "G4UIcommand.hh"

#include "DetectorConstruction.hh"
#include "PhysicsList.hh"
#include "ActionInitialization.hh"

#include "G4UIExecutive.hh"
#include "G4VisExecutive.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

int main(int argc,char** argv) {

  //detect interactive mode (if no arguments) and define UI session
  G4UIExecutive* ui = nullptr;
  if (argc == 1) { ui = new G4UIExecutive(argc,argv); }

  auto* runManager = G4RunManagerFactory::CreateRunManager();
  // Number of threads can be defined via 3rd argument
  G4int nThreads = 2;
  if (argc==3) {
    if(G4String(argv[2]) == "NMAX") {
      nThreads = G4Threading::G4GetNumberOfCores();
    } else {
      nThreads = G4UIcommand::ConvertToInt(argv[2]);
    }
  } else if(argc==1) {
    nThreads = 1;
  }
  if (nThreads > 0) { runManager->SetNumberOfThreads(nThreads); }

  //set mandatory initialization classes
  DetectorConstruction* det = new DetectorConstruction();
  runManager->SetUserInitialization(det);
  runManager->SetUserInitialization(new PhysicsList(det));

  //set user action classes
  runManager->SetUserInitialization(new ActionInitialization());

  //initialize visualization
  G4VisManager* visManager = nullptr;

  //get the pointer to the User Interface manager
  G4UImanager* UImanager = G4UImanager::GetUIpointer();

  if (ui)  {
    //interactive mode
    visManager = new G4VisExecutive();
    visManager->Initialize();
    ui->SessionStart();
    delete ui;
  } else {
    //batch mode
    G4String command = "/control/execute ";
    G4String fileName = argv[1];
    UImanager->ApplyCommand(command+fileName);
  }

  //job termination
  delete visManager;
  delete runManager;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

