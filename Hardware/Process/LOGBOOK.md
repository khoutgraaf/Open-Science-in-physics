# Logbook

## 1/10/2026 (first print)

All the output files of the slicing, as well as some screenshots of the slicing process, can be found [./Process](here).

We imported all files as-is at medium quality and used the auto-arrange button to arrange the objects on the print bed. We ensured all parts were aligned with the largest faces on the print bed.

After slicing, the predicted print time of the first layer is 4 minutes. The total printing time is 1 hour and 19 minutes.

Reviewing the layers, two things stood out: 
1.  The rectangular part centre was unsupported.
    **Fix:** Support was added on the bottom by setting the _Auto generate supports_ on.
2. The gears were internally unsupported. 
    **Fix:** The infill was increased by changing the _Infill density_ (_Printer Setting -> Infill -> Infill density_)from 15% to 30%. 

Both axels were made, by cutting 30 millimeters long pieces of a brass rod with a diameter of 3 millimeters. We chose this length to be slightly on the safe side. Then, we test-fit the axels and filed them down to their precise length.

The engaging gear broke, while drilling it's centre hole. For a new output gear, we will drill out the hole with more causion, by drilling just through the gear, avoiding drilling into the shaft. 

After the assembly of the gearbox, we observed some wiggle room for the gears. Adding spacers would prevent that.

## 7/10/2026

We got a rubber wheel (see [./Rubber_wheel.jpeg](image)) with a inner diameter of 6 millimeters to fit to the inbuild shaft of the output gear. Since this diameter was bigger than the shaft of the gear, we had to design a new output gear to fit it properly to the rubber wheel (see **Adjustments to original shaft design of output gear**). This new output gear is printed on printer 1 (with a nozzle of 0.3 millimeters), with all the other settings being the same as before. The centre hole of the engaging gear is drilled out with a drill bit of 3.1 millimeters. 

During the printing, the printer gave an error about extrusion (see [./print_error.jpg](image)), and the print looked like it had some missing bits. Despite that, we tried using the print.

We made a new axel, long enough to fit through one engaging gear and the output gear. To remove the wiggle room between the gears, we added thin metal washer as spacers between each gear. 

### Adjustments to original shaft design of output gear

To be able to fit the rubber wheel to the inbuild shaft of the output gear, we changed the design of the shaft, improving the stability. The resulted design can be found [./engaging_gear_large_shaft.3mf](here). We did the following in the slicer programme: 

1. Right click and _add shape_ of a cylinder with X: 5.7mm, Y:5.7mm and Z:30mm. This will be the new shaft.

2. Add another cylinder, with X:3.1mm, Y: 3.1mm and Z:43.18mm, that will serve as the shaft hole. Right click on this cylinder in the object window and change its type to _negative space_. 

3. Select the shaft and the new cylinders, right click and choose _merge_.

4. Unlock the scale factor and size in the _object manipulation_ menu on the bottom right. 

5. Move both cylinders to the appropriate position, with the shaft hole going through the model, and the new shaft sitting at the same position as the old shaft. 

