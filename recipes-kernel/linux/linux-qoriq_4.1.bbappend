FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
SRC_URI += "file://0001-Added-dts-file-for-oxalis.patch \
            file://0001-Change-pfe-to-builtin.patch \
            file://0001-Added-i2c-2-node-in-device-tree.patch \
	    file://defconfig \
	    file://qoriq-engine-pfe-bin"
PATCHTOOL = "git"

do_compile_prepend() {
    cp   ${WORKDIR}/qoriq-engine-pfe-bin/ls1012a/slow_path/ppfe_class_ls1012a.elf ${S}/firmware
    cp   ${WORKDIR}/qoriq-engine-pfe-bin/ls1012a/slow_path/ppfe_tmu_ls1012a.elf ${S}/firmware

}

