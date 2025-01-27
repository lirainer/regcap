#pragma once
#ifndef constant_h
#define constant_h

// ============================== CONSTANTS ===============================================
const double C_TO_K = 273.15;
const double airDensityRef = 1.20411;	// Reference air density at 20 deg C at sea level [kg/m3]
const double airTempRef = C_TO_K + 20;	// Reference room temp [K] = 20 deg C
const double g = 9.81;						// Acceleration due to gravity (m/s^2)
const double SIGMA = 5.6704E-08;			// STEFAN-BOLTZMANN CONST (W/m^2/K^4)
const double CpAir = 1005.7;				// specific heat of air [j/kg K]
const double dtau = 60.;					// simulation timestep (in seconds)
const double rivecdt = dtau / 3600.;	// Rivec timestep is in hours. Used in calculation of relative dose and exposure.
const int ATTIC_NODES = 18;				// number of attic nodes
const double densityWood = 530.;       // Bulk wood density - douglas fir (kg/m3)
const double densitySheathing = 650.;  // Shething wood density - OSB (kg/m3)
const double thickSheathing = .015;		// thickness of sheathing material (m)
const double emissivityWood = .9;      // emissivity of building materials
const double emissivityRadiantBarrier = 0.05; //Emissivity of a radiant barrier, per T24 2016 mandatory requirements.
const double kWood = 0.15;					// check with Iain about this

#endif