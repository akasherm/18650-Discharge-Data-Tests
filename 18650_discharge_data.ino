/***************************************************************************
 *  Project: 18650 Discharge Rate Tests
 *     Date: 28 August 2021
 *   Author: xlnc.com.au
 * Overview: A series of tests to gether data on how long both the single, 
 *           and double 18650, battery:
 *            - 1.8" TFT on permanently.
 *            - No screen at all.
 *            - Deep sleep and interrupts.
 *            - Switch to wake and show scree with idle time screen off.
 *            - Transmission data amounts and frequency.
 *  Circuit: ESP32 powered by 18650 5V output.
 *           IN219 connected across 18650 terminals to measure voltage.
 *           Analogue connections through voltage divider for 5 volt
 *           reference on ESP32, and also a second reference from 5 volt
 *           supply on 18650 battery board.
 *           6 hat switches for controlling screen.
 *           1.8" screen.
 * External: Firestore database.
 *           Flutter web page for displaying data.
 *  Pinouts:
 *
 ***************************************************************************/
