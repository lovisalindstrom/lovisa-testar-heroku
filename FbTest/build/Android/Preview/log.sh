#!/bin/sh
# This file was generated based on '/Users/malmgren/Library/Application Support/Fusetools/Packages/UnoCore/0.42.3/targets/android/log.sh'.
# WARNING: Changes might be lost if you edit this file directly.
ADB_PATH="/Users/malmgren/Library/Application Support/Fusetools/Fuse/Android/AndroidSDK/platform-tools/adb"
$ADB_PATH devices | head -n 2 | tail -n 1 | cut -sf 1 | xargs -I {} $ADB_PATH -s {} logcat -s "Debug","dalvik","error","Error","XliApp","Xli","DEBUG","System.err","BufferQueue","AndroidRuntime","LogSvc","Adreno-ES20","Adreno-EGL","libEGL","BDWGC","art","OpenGLRenderer","HardwareRenderer","FbTest"
