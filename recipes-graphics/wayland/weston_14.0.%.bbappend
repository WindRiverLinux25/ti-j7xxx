FILESEXTRAPATHS:prepend:ti-j7 := "${THISDIR}/${PN}:"

PR:append:ti-j7 = ".arago1"

# required for weston user to interact with the render devices
inherit extrausers
EXTRA_USERS_PARAMS:ti-j7 = " \
        usermod -aG render weston; \
"
COMPATIBLE_MACHINE:ti-j7 = "ti-j7"
