
# Printer usage

[https://www.youtube.com/watch?v=xhjW_MdcCrw](https://www.youtube.com/watch?v=xhjW_MdcCrw)


## Printing: 1st print, 1/10/26

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


