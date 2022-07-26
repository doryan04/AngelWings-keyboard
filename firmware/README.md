# AWF firmware (by [@ItzAdel](https://github.com/ItzAdel) and [@nm17](https://github.com/nm17))

AWF is a ergo-split keyboard with 46 keys, originally designed for a school project.

https://github.com/ItzAdel/AWF-firmware

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
