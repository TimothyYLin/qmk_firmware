# Timothy Lin Keyboards

I own the following keyboards and the following instructions will help document the flashing process for each of them.

***
    
## Theseus75
- This keyboard is listed under [haverworks/theseus75](keyboards/haverworks/theseus75/)

#### Compilation
- To ensure a clean build environment, use:
`qmk clean`
- After cloning and setting up the QMK environment properly, the haverworks/theseus75 linsanefc keymap can be compiled with:
`qmk compile -kb haverworks/theseus75 -km linsanefc`

#### Flashing
- If firmware has compiled successfully, we can flash with `make haverworks/theseus75:linsanefc:flash`
- Each half must be flashed independently (put one side in bootloader mode, flash it, repeat for other side). Interconnect FLEMO cable must NOT be connected.
- Each half must be flashed to the same firmware to work properly.
- Bootloader:
    - The bootloader can be entered in 2 ways:
        1. **Physical reset button**: Hold the <kbd>Reset</kbd>/<kbd>Flash</kbd> button on the back of the PCB for approximately one second (instructions are also included on the PCB)
        2. **Bootmagic reset**:
            - **Left half**: Hold down the first key to the right of the encoder (<kbd>Esc</kbd> by default) and plug in the keyboard
            - **Right half**: Hold down the first key to the left of the encoder (<kbd>Print Screen</kbd> by default) and plug in the keyboard

- Further flashing instructions can be found under the [README](keyboards/haverworks/theseus75/readme.md)

##### Factory Default
- For ***factory default*** safe via-compatible firmware, find the `haverworks_theseus75_via.bin` file [here](https://caniusevia.com/docs/download_firmware/) 
- Flashing the factory default firmware can be done with QMK Toolbox:
    <details>
    <summary>Flashing via QMK Toolbox</summary>

    1.  Download firmware (If you want the default VIA, go here: https://caniusevia.com/docs/download_firmware/)
    2.  Download QMK Toolbox: https://qmk.fm/toolbox
    3.  Install toolbox. When prompted to install drivers, click yes. If you accidentally click no, you can later open toolbox and go to "other -> install drivers".
    4.  Unplug the keyboard 
    5.  Unplug the lemo interconnect
    6.  Open toolbox, load your firmware,  check "auto flash". Ignore "MCU selection" drop-down, this is only needed for older chips.
    7.  Hold down ESC (left half of board) or F13 (the key on the left of the encoder) (right half of board), then plug the board in (USB-C) while holding the key pressed. Release key ~1s after plugging in.
    8.  Check the output of the toolbox. It should show progress. When it says ready the board should reboot. 
    9.  Repeat with the second half.
    10. Unplug, connect lemo again, plug board back in.

    </details>

#### My Keymap Specifics

Features implemented in my specific [keymap.c](keyboards/haverworks/theseus75/keymaps/linsanefc/keymap.c) include:
- 7 Total Layers:
    1. Base (Windows)
    2. Linux (Base + Linux Specific Macros/Keybinds)
    3. Function (Media Controls/Missing 100% Keys)
    4. Emojis
    5. Vertical Navigation
    6. Horizontal Navigation
    7. RGB Control

- Each layer contains encoder macros that help with media control, development, ease of use (Discord mute/deafen toggle)
- For further information, read the comments in the [keymap.c](keyboards/haverworks/theseus75/keymaps/linsanefc/keymap.c) or see below

<details>
    <summary>Detailed Layer Information</summary>

- **Layer 0: Windows/Keyboard Base**
    - Default main usages of keyboard
    - Encoders:
        - Left:  Workspace Switch (Windows) | Click: Turn on/off RGB
        - Right: Volume Control             | Click: Mute

- **Layer 1: Linux Overlay**
    - Activated via TOGGLE_LINUX on the Function Layer (Tab Key)
    - Contains Linux-specific shortcuts on the left macro column
        - Encoders:
        - Left:  Workspace Switch (Linux) | Click: Turn on/off RGB
        - Right: Volume Control           | Click: Mute

- **Layer 2: Function Layer**
    - Includes missing 100% keys (Insert, Home, End, etc.)
    - Includes the Linux Mode Toggle (Toggles to the Linux layer and changes Unicode Mode to Linux Mode)
    - Includes media controls for pause/play, volume up/down, previous/next songs
    - Encoders:
        - Left:  Move window to Workspace Left/Right (Linux) | Click: Discord Mute (CTRL + SHIFT + ALT + F10)
        - Right: Track Skip (Prev/Next Song)                 | Click: Discord Deafen (CTRL + SHIFT + ALT + F11)

- **Layer 3: Emoji Layer**
    - Emojis that I use regularly
    - Encoders:
        - Left:  Find next/previous instance (VSCode)         | Click: Format highlighted (VSCode)
        - Right: Add selection/cursor to Next/Prev Find Match | Click: Mute

- **Layer 4: Vertical Nav**
    - Navigation (WASD + Q/E for Page Up/Dn + Z/X for Home/End)
    - Encoders:
        - Left:  Scroll Lines (Up/Down) | Click: Format highlighted (VSCode)
        - Right: Zoom (VSCode/Browsers) | Click: Mute 

- **Layer 5: Horizontal Nav & Virtual Numpad**
    - Numpad on
    [7 8 9]
    |U I O|
    |J K L|
    [  M .]
    - Encoders:
        - Left:  Switch Tabs (VSCode/Browsers) | Click: Format highlighted (VSCode)
        - Right: Skip words                    | Click: Mute

- **Layer 6: RGB Controls**
    - Arrows: Speed (Up/Down), Hue (Left/Right)
    - PgUp/PgDn: Saturation (Vivid/Pastel)
    - Encoders:
        - Left:  Cycle Modes (Prev/Next Effect) | Click: Turn on/off RGB
        - Right: Brightness (Decrease/Increase) | Click: Turn on/off RGB

</details>

***

## Tofu 60
- This keyboard is listed under [keyboards/dztech/dz60rgb/v2](keyboards/dztech/dz60rgb/v2/)

#### Flashing
- TODO

***

## QK65
- This keyboard is listed under [keyboards/qwertykeys/qk65/hotswap/](keyboards/qwertykeys/qk65/hotswap/)

#### Flashing
- TODO
