# Angel Wings Keyboard (by [@ItzAdel](https://github.com/ItzAdel) and [@nm17](https://github.com/nm17))

## PCB

### Angel Wings v.2.0 (recomended)

* [pcb.zip](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/gerbers/pcb.zip)

[](photos/pcb.png)

## Plates

### Top plate

* [top plate.zip](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/gerbers/top%20plate.zip)

[](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/top%20plate.png)

### Bottom plate

* [bottom plate.zip](https://github.com/ItzAdel/AngelWings-keyboard/tree/main/gerbers/bottom%20plate.zip)

[](https://github.com/ItzAdel/AngelWings-keyboard/tree/main/photos/bottom%20plate.png)

# AWF is a ergo-split keyboard with 46 keys, originally designed for a school project.

![Photo 1](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/awf%20(1).JPG)

![Photo 2](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/awf%20(2).JPG)

![Photo 3](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/awf%20(3).JPG)

![Photo 4](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/awf%20(4).JPG)

![Photo 5](https://github.com/ItzAdel/AngelWings-keyboard/blob/main/photos/awf%20(5).JPG)

### How to compile firmware?

1) First you need to download QMK MSYS and enter the command in it:
```
qmk setup
```
2) After we installed QMK you need to create a folder called "angelwings" in the path:
```
"c:/users/user/qmk_firmware/keyboards"
```
and unpack all firmware files into the folder "angelwings".

3) The last step is compilation. Enter into QMK MSYS command:
```
qmk compile -kb angelwings -km default
```
or if you want VIA port:
```
qmk compile -kb angelwings -km via
```
4) If your firmware compiled - then let's have fun!

### Check out @tfk004 on Telegram. https://t.me/tfk004
