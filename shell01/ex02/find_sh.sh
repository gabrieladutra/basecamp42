#!/bin/sh
echo "find . -type f -name '*.sh' -exec basename {} .sh \;" >> find_sh.shfind . -type f -name '*.sh' -exec basename {} .sh \;
