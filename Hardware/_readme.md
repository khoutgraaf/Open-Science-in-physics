# Hardware description
_The instructions for the assembly of the gearbox (see **Build instructions**), as well as the instructions on how to produce all the needed parts (see **Instructions for 3D printing**), can be read here. For the list of all the needed materials, see **Parts List**. More information on the process can be found [./LOGBOOK.md](here)._

## Parts List

|Description| Amount | Where |
|-----------|-----------|------|
|3D printed parts | 8 / 9 | Github / LPL | 
|M3x30 pozidriv head bolts | 4 | jobshop | 
|Matching nuts to M3x30 pozidriv head bolts  | 4 | jobshop | 
|M2 .5x6 taper-head screws | 2 | jobshop | 
|M3x35 bolt with locknut| 1 | jobshop | 
|M3 rings (0.5 mm height)  | 13 | jobshop | 
|Plastic spacer ring (ID 3 mm, 2 mm height)| 1 | jobshop |
|Ball bearing (OD 16 mm, ID 8 mm, height 5 mm) | 1 | jobshop | 
|Brass rod (55mm length, 3 mm diameter) | 1 | jobshop | 
|Engaging wheel (ID 6 mm, OD 34.75 mm) | 1 | jobshop|
|Small electric brushless motor | 1 | lpl | 
|Rubber part of chair wheel (ID 33.8 mm) | 1 | jobshop |
|Shaft friction distributor  | 1 | n/a | 


## Fabrication methods and tools
- 3D printer
- Metal Saw
- Power supply
- Spinning plate for test

## Instructions for 3D printing

A tutorial on how to use the 3D printer at Lili's Proto Lab can be found here: 
[https://www.youtube.com/watch?v=xhjW_MdcCrw](https://www.youtube.com/watch?v=xhjW_MdcCrw)

Import all the STL and fusion files present in this directory at medium quality. The objects can be arranged on the print bed by using the auto-arrange button. Make sure all parts are aligned with the largest faces on the print bed.   

### Printer Settings

To specify the following printer settings: 

 - Filament: ecoPLA silk gold, 1.75mm width
 - Print bed: Smooth PEI
 - Auto generate supports: On

### Slicer settings

To specify the following slicer settings: 

 - Print settings: 0.20mm layer height - speed
 - Filament: 3DJake ecopla 205C (regular)
 - Printer: No. 2 "Stormtrooper" Original Prusa MK3.9 0.4 nozzle
 - Supports for support enforcers only
 - Infill density: 30%

## Build instructions

1. After printing the parts, remove their supports (an example of the printed parts can be seen [./printed_parts.jpg](here)). Blobs of the filament can be sanded down.  

2. Make the axel for one engaging gear and the output gear out of brass rod with a diameter of 3 millimeters, by cutting the rod in pieces of 30 millimeters. Fill down the axel to their precise length if needed. The middle axel for two engaging gears is made from the M3x35 bolt with a locknut, to prevent the axel from falling out and to prevent the nut froom unscrewing itself. 

3. To ensure a slight interference fit with the 2 millimeters motor shaft, drill the centre hole of the input gear with a 1.9 millimeters drill bit. For the engaging gears and output gear, drill centre holes with a 3 millimeters drill bit, such that the gears would spin freely on the axel. 

5. Lubricate both the axels, as well as all the gears, with vaseline (see [./gearbox_greasing.jpg](image)). Mount only the engaging gears on their respective axels, with thin metal eashers between each gear, and interlock them with each other.

6. Place the 4 pillars and axels with the gears between the top and bottom plates. Connect top and bottom plates to the pillars with 4 M3x30 pozidrive head bolts with matching nuts. Put a large plastic spacer on the middle axel above all the gears to avoid the gears wiggling (see [./Final_assembly](image)). Attach the motor by using 2 M2.5x6 taper-head screws, with the input gear attached to the motor. 

7. To connect the output gear with the inbuilt shaft; use a ball bearing, with a outer diameter of 16 millimeters, an inner diameter of 8 millimeters and a height of 5 millimeters, in the big hole of the top plate. Place the rubber wheel on the shaft of the output gear. 

8. Power the motor using a power supply. 
