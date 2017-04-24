#!/bin/sh
# This file was generated based on '/Users/malmgren/Library/Application Support/Fusetools/Packages/UnoCore/0.42.3/targets/android/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "FbTest"
    exit $?
    ;;
uninstall)
    echo "Uninstalling com.apps.fbtest"
    /Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe adb uninstall "com.apps.fbtest"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "FbTest.apk" \
    --package=com.apps.fbtest \
    --activity=FbTest \
    --sym-dir="FbTest/app/src/main/.uno" \
    "$@"
