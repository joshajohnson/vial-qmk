# Split60

A 60% split keyboard with RGB

* Keyboard Maintainer: https://github.com/joshajohnson
* Hardware Supported: https://mtnkbd.com/products/split60?variant=45955530588329

Make example for this keyboard (after setting up your build environment):
    
    make split60:vial
    
Flashing example for this keyboard:

    make split60:vial:flash
    
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* Physical reset: Long press (> 1 second) the button on the back of the PCB
* Keycode in layout: Press the key mapped to QK_BOOT if it is available
