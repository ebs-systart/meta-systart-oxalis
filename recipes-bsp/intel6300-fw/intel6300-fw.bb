FILESEXTRAPATHS_prepend := "${THISDIR}/files:"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://iwlwifi-6000-4.ucode"

S = "${WORKDIR}"

do_install() {
    install -d ${D}/lib/firmware
	install -m 755 iwlwifi-6000-4.ucode ${D}/lib/firmware
}
FILES_${PN} += "/lib/firmware/*"
