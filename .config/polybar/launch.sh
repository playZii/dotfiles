#!/bin/bash

# Terminate already running bar instances
killall -q polybar

# If all your bars have ipc enabled, you can also use 
polybar-msg cmd quit

if type "xrandr"; then
    for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
        MONITOR=$m polybar --reload example 2>&1 >/tmp/polybar-example.$m.log &
    done
else
    polybar --reload example 2>&1 >/tmp/polybar-example.log &
fi

# Launch Polybar, using default config location ~/.config/polybar/config

echo "Polybar launched..."
