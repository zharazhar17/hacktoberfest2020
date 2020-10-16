online() {
    find /sys/class/net/ -maxdepth 1 -mindepth 1 ! -name "*lo*" -exec sh -c 'cat "$0"/carrier 2>&1 > /dev/null | grep -q "1" && exit 0' {} \;
}
online && gnubiff --systemtray --noconfigure &
