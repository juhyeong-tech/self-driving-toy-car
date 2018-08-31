/*
 * @File   project_config.h
 * @Brief  Configurations for main.c
 *
 */
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/sysinfo.h>
/**
  * @Brief
  */
class System_resource
{
	public:
		System_resource();
		uint64_t getVirtualMemUsed();
		uint64_t getTotalVirtualMem();
		uint64_t getTotalPhysMem();
		uint64_t getPhysMemUsed();
	private:
		struct sysinfo memInfo;
		long long totalVirtualMem;
		long long virtualMemUsed;
		long long totalPhysMem;
		long long physMemUsed;
};
/**
  * @Brief
  */
#define CAMERA_X_SERVO     1500
#define CAMERA_Y_SERVO     1600

#define UPPER_LINE          120
#define LOWER_LINE          150

#define CAPTURE_IMG_W       1280
#define CAPTURE_IMG_H       720
#define CAPTURE_IMG_SIZE    (CAPTURE_IMG_W*CAPTURE_IMG_H*2) // YUYU : 16bpp
#define CAPTURE_IMG_FORMAT  "uyvy"
#define VPE_OUTPUT_W            1280
#define VPE_OUTPUT_H            720

// display output & dump  format: bgr24, w:320, h:180
#define bgr24
#define VPE_OUTPUT_IMG_SIZE    (VPE_OUTPUT_W*VPE_OUTPUT_H*3) // bgr24 : 24bpp
#define VPE_OUTPUT_FORMAT       "bgr24"
#define VPE_OUTPUT_RESOLUTION  VPE_OUTPUT_W*VPE_OUTPUT_H

// display output & dump  format: NV12, w:320, h:180
//#define VPE_OUTPUT_IMG_SIZE    (VPE_OUTPUT_W*VPE_OUTPUT_H*3/2) // NV12 : 12bpp
//#define VPE_OUTPUT_FORMAT       "nv12"

// display output & dump  format: yuyv, w:320, h:180
//#define VPE_OUTPUT_IMG_SIZE    (VPE_OUTPUT_W*VPE_OUTPUT_H*2)
//#define VPE_OUTPUT_FORMAT       "yuyv"

/**
  * @Brief
  */
#define YELLOW 0
#define yellow_HUE_MAX    65
#define yellow_HUE_MIN    25
#define yellow_SAT_MAX    255
#define yellow_SAT_MIN    10
#define yellow_VAL_MAX    255
#define yellow_VAL_MIN    30

#define WHITE 1
#define white_HUE_MAX    255
#define white_HUE_MIN    0
#define white_SAT_MAX    255
#define white_SAT_MIN    0
#define white_VAL_MAX    255
#define white_VAL_MIN    150

/**
  * @Brief
  */
#define lineDectectionTHRESHOLD 7