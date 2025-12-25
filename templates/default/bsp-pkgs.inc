IMAGE_INSTALL += "${@bb.utils.contains("MACHINE_FEATURES", "gpu", "mesa-pvr ti-img-rogue-driver ti-img-rogue-umlibs devil weston weston-init wayland-protocols wayland", " ", d)}"
IMAGE_INSTALL += 'u-boot-ti-staging tisdk-uenv'
IMAGE_INSTALL += 'ti-rtos-echo-test-fw ti-dm-fw'
IMAGE_INSTALL:ti-j72xx += 'ti-vxe-vxd-driver ti-eth-fw-j721e'
