
# Printer usage

[https://www.youtube.com/watch?v=xhjW_MdcCrw](https://www.youtube.com/watch?v=xhjW_MdcCrw)


## Printing: 1st print, 1/10/26

The "Process" directory contains the output files of the slicing, as well as some screenshots of the slicing process.

We imported all files as-is at medium quality.
We used the auto-arrange button to arrange the objects on the print bed.
We ensured all parts were aligned with the largest faces on the print bed.


### Printer Settings

 - Filament: ecoPLA silk gold, 1.75mm width
 - Print bed: Smooth PEI

### Slicer settings

 - Print settings: 0.20mm layer height - speed
 - Filament: 3DJake ecopla 205C (regular)
 - Printer: No. 2 "Stormtrooper" Original Prusa MK3.9 0.4 nozzle
 - Supports for support enforcers only
 - Infill: 15%

After slicing, it predicted a print time of 4m for the first layer, and 1h19m total print time.


### Improvements

After starting to print, reviewing the layers, two things stood out:
1. The rectangular part centre was unsupported
	
	fix: Added support on the bottom (Printer Settings > Auto generate supports: On)

2. Gears were internally unsupported
	
	fix: Increased infill (Printer Settings > Infill > Infill density > Changed from 15% to 30%)

### Assembly

We removed the supports and sanded down some blobs of filament.

We used 4 M3x30 pozidrive head bolts with matching nuts to connect the top & bottom plates, and added washers between the plates and the spacers.

We cut axels of 20 (spacer height) + 10 (top * bottom plates) = 30mm, to be slightly on the safe side of length.
The axels were made out of 3mm diameter brass rod.
Then, we test-fit the axels and filed them down to their precise length.

To attach the motor, we used 2 M2.5x6 taper-head screws

We drilled the centre hole of the input gear out with a 1.9mm drill, to ensure a slight interference fit with the 2mm motor shaft.

We used a ball bearing (OD 16, ID 8, height 5mm) in the big hole on the top plate to connect the output gear with the inbuilt shaft.
We drilled out the hole in the output gear with a 3mm bit, to ensure it would spin freely on the axel. 
Unfortunately, the gear broke while doing this.
We continued, since we could still assemble the gearbox, just not attach anything to the output. 
In a future version we will reprint the output gear, and probably only drill the shaft out just through the gear.

### Evaluation

There is still some wiggle room for the gears, perhaps adding spacers in the next version would prevent that.


## 7/10

We reprinted the engaging gear with the same settings as last time.
We added thin metal washers as spacers between the gears to remove wiggle room.

The printer gave some error about extrusion, and the print looked like it had some missing bits. We tried using it anyway.


We made a new axel, long enough to fit through the whole of the engaging gear.
We got a rubber wheel looking thing to fit to the engaging gear (ID 6mm)
It had a larger ID than the engaging gear, so we had to design a new engaging gear to fit it properly (see [Process/Adjusting Shaft Width.md](this file).
We printed this on printer 1 (0.3mm nozzle), but with further the same settings.
To make the axel fit, we drilled the engaging gear out with a 3.1mm drill bit.


## Final assembly 9/10



# Final instructions

## Parts list

- 3D Printed parts
- small electric brushless motor
- 4 M3x30 pozidriv head bolts with matching nuts
- 2 M2.5x6 taper-head screws
- M3x35 bolt with locknut
- 55mm 3mm diameter brass rod
- Ball bearing (OD 16mm, ID 8mm, height 5mm)
- 13 M3 rings (0.5mm height)
- Plastic spacer ring (ID 3mm, height 2mm)
- Engaging wheel (ID 6mm, 34.75mm OD)
- Rubber part of chair wheel (ID ~33.8mm)

## Adjustments to original 3D models

We found that we had to increase the width of the shaft for stability. Here is how to do this in the slicer:

  - Right click and add shape cylinder this will be the new shaft
  - Do this again for a cylinder which will become the shaft hole. Right click on this cylinder in the objects window and change type to negative space
  - Select both shaft and new cylinders, right click and merge
  - Unlock scale factor and size in object manipulation menu on bottom right
  - Move cylinders to the appropriate position with the shaft hole going through model, and the new shaft sitting at the same position as the old one
  - New shaft Scale: X: 5.7mm, Y:5.7mm, Z:30mm
  - Shaft hole scale: X:3.1mm, Y: 3.1mm, Z:43.18mm

This file can be found [./engaging_gear_large_shaft.3mf](here).

## Assembly

We removed the supports and sanded down some blobs of filament.

We used 4 M3x30 pozidrive head bolts with matching nuts to connect the top & bottom plates, and added washers between the plates and the spacers.

The axel for the engaging gear was made from the brass rod.
The middle axel was made from the M3x35 bolt with locknut, to prevent the axel from falling out of its holes and to prevent the nut unscrewing itself.
Both axels, as well as all gears, were lubricated with vaseline.

To attach the motor, we used 2 M2.5x6 taper-head screws

We drilled the centre hole of the input gear out with a 1.9mm drill, to ensure a slight interference fit with the 2mm motor shaft.

We used a ball bearing (OD 16, ID 8, height 5mm) in the big hole on the top plate to connect the output gear with the inbuilt shaft.
We drilled out the hole in the output gear with a 3mm bit, to ensure it would spin freely on the axel. 

The large plastic spacer was put on the centre axel above all gears. In general, all spacers were added where necesary to avoid the gears wiggling.

`

