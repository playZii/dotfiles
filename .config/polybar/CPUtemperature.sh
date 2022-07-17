#!/bin/sh

TEMPLATE="$HOME/.config/polybar/config_template.ini"
CONFIG="$HOME/.config/polybar/config.ini"

CPU_TEMP_PATH=$(find /sys/class/thermal/thermal_zone*/type | xargs grep x86_pkg_temp | awk -F: '{print $1}' | sed -e 's|type$|temp|g')

sed -e "s|CPU_TEMP_FILE|$CPU_TEMP_PATH|g" "$TEMPLATE" > "$CONFIG"
