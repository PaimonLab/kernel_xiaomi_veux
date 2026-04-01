#include <linux/module.h>
#include <linux/leds.h>
#include "cam_flash_dev.h"
#include "cam_flash_core.h"

static void cam_torch_brightness_set(struct led_classdev *led_cdev,
cam_flash_      enum led_brightness brightness)
{
cam_flash_struct cam_flash_ctrl *fctrl = container_of(led_cdev, struct cam_flash_ctrl, torch_cdev);
cam_flash_int rc;

cam_flash_if (brightness == LED_OFF) {
cam_flash_fctrl->flash_state = CAM_FLASH_STATE_START;
cam_flash_cam_flash_off(fctrl);
cam_flash_fctrl->flash_state = CAM_FLASH_STATE_ACQUIRE;
cam_flash_} else {
cam_flash_// Needs to forge a CAM_FLASH_PACKET_OPCODE_SET_OPS logic
cam_flash_// This is too complex to forge. I need a simpler hook.
cam_flash_}
}
