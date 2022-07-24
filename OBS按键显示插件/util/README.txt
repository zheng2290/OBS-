These tools are provided by libuiohook.

Do the following to find out your monitor center:
 1. Open either demo_hook.exe or demo_hook_async.exe
    Do NOT use demo_hook_async.exe if you have OBS open with
    input-overlay installed. It will result in stuttering input.
    Do NOT select text within the terminal.
 2. Put the console window where you can see it and enter any game
    of your choice
 3. When the game takes control over your mouse move it a bit around
    and the mouse position that is displayed in the console window
    is the center of your screen.
    Example:
     id=9,when=0,mask=0x0,x=960,y=566,button=0,clicks=1
    960 would be the horizontal center and 566 the vertical center

For Linux users:
    You can use pad-test to see what buttons on your gamepad
    translate into what codes. As of now you'll have to use this
    info to modify input-overlays source code to match your gamepad
    button mappings. I might add a config file to do this
    automatically, but for now I hope that my gamepad represents
    the mappings of most other gamepads.
