/*************************************************************************/ /*!
@File
@Title          Services AppHint definitions
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Device specific functions
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/


#ifndef KM_APPHINT_DEFS_COMMON_H
#define KM_APPHINT_DEFS_COMMON_H

/*
*******************************************************************************
 Build variables
 All of these should be configurable only through the 'default' value
******************************************************************************/
#define APPHINT_LIST_BUILDVAR_COMMON \
/* name,                            type,           class,       default,                                         helper,         */ \
X(HWRDebugDumpLimit,                UINT32,         ALWAYS,      PVRSRV_APPHINT_HWRDEBUGDUMPLIMIT,                NO_PARAM_TABLE   ) \
X(EnableTrustedDeviceAceConfig,     BOOL,           GPUVIRT_VAL, PVRSRV_APPHINT_ENABLETRUSTEDDEVICEACECONFIG,     NO_PARAM_TABLE   ) \
X(CleanupThreadPriority,            UINT32,         NEVER,       PVRSRV_APPHINT_CLEANUPTHREADPRIORITY,            NO_PARAM_TABLE   ) \
X(WatchdogThreadPriority,           UINT32,         NEVER,       PVRSRV_APPHINT_WATCHDOGTHREADPRIORITY,           NO_PARAM_TABLE   ) \
X(HWPerfClientBufferSize,           UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTBUFFERSIZE,           NO_PARAM_TABLE   ) \

/*
*******************************************************************************
 Module parameters
******************************************************************************/
#define APPHINT_LIST_MODPARAM_COMMON \
/* name,                            type,           class,       default,                                         helper,         */ \
X(GeneralNon4KHeapPageSize,         UINT32,         ALWAYS,      PVRSRV_APPHINT_GENERALNON4KHEAPPAGESIZE,         NO_PARAM_TABLE   ) \
\
X(EnableSignatureChecks,            BOOL,           PDUMP,       PVRSRV_APPHINT_ENABLESIGNATURECHECKS,            NO_PARAM_TABLE   ) \
X(SignatureChecksBufSize,           UINT32,         PDUMP,       PVRSRV_APPHINT_SIGNATURECHECKSBUFSIZE,           NO_PARAM_TABLE   ) \
\
X(DisableClockGating,               BOOL,           ALWAYS,      PVRSRV_APPHINT_DISABLECLOCKGATING,               NO_PARAM_TABLE   ) \
X(DisableDMOverlap,                 BOOL,           ALWAYS,      PVRSRV_APPHINT_DISABLEDMOVERLAP,                 NO_PARAM_TABLE   ) \
\
X(EnableRandomContextSwitch,        BOOL,           VALIDATION,  PVRSRV_APPHINT_ENABLERANDOMCONTEXTSWITCH,        NO_PARAM_TABLE   ) \
X(EnableSoftResetContextSwitch,     BOOL,           ALWAYS,      PVRSRV_APPHINT_ENABLESOFTRESETCNTEXTSWITCH,      NO_PARAM_TABLE   ) \
X(EnableFWContextSwitch,            UINT32,         ALWAYS,      PVRSRV_APPHINT_ENABLEFWCONTEXTSWITCH,            NO_PARAM_TABLE   ) \
X(FWContextSwitchProfile,           UINT32,         VALIDATION,  PVRSRV_APPHINT_FWCONTEXTSWITCHPROFILE,           NO_PARAM_TABLE   ) \
\
X(EnableRDPowerIsland,              UINT32,         ALWAYS,      PVRSRV_APPHINT_ENABLERDPOWERISLAND,              NO_PARAM_TABLE   ) \
\
X(DriverMode,                       UINT32,         ALWAYS,      PVRSRV_APPHINT_DRIVERMODE,                       NO_PARAM_TABLE   ) \
\
X(FirmwarePerf,                     UINT32,         VALIDATION,  PVRSRV_APPHINT_FIRMWAREPERF,                     NO_PARAM_TABLE   ) \
\
X(HWPerfFWBufSizeInKB,              UINT32,         VALIDATION,  PVRSRV_APPHINT_HWPERFFWBUFSIZEINKB,              NO_PARAM_TABLE   ) \
X(HWPerfHostBufSizeInKB,            UINT32,         VALIDATION,  PVRSRV_APPHINT_HWPERFHOSTBUFSIZEINKB,            NO_PARAM_TABLE   ) \
X(HWPerfHostThreadTimeoutInMS,      UINT32,         VALIDATION,  PVRSRV_APPHINT_HWPERFHOSTTHREADTIMEOUTINMS,      NO_PARAM_TABLE   ) \
\
X(JonesDisableMask,                 UINT32,         VALIDATION,  PVRSRV_APPHINT_JONESDISABLEMASK,                 NO_PARAM_TABLE   ) \
X(NewFilteringMode,                 BOOL,           VALIDATION,  PVRSRV_APPHINT_NEWFILTERINGMODE,                 NO_PARAM_TABLE   ) \
X(TruncateMode,                     UINT32,         VALIDATION,  PVRSRV_APPHINT_TRUNCATEMODE,                     NO_PARAM_TABLE   ) \
X(EmuMaxFreq,                       UINT32,         ALWAYS,      PVRSRV_APPHINT_EMUMAXFREQ,                       NO_PARAM_TABLE   ) \
X(GPIOValidationMode,               UINT32,         VALIDATION,  PVRSRV_APPHINT_GPIOVALIDATIONMODE,               NO_PARAM_TABLE   ) \
X(RGXBVNC,                          STRING,         ALWAYS,      PVRSRV_APPHINT_RGXBVNC,                          NO_PARAM_TABLE   ) \
\
X(FWContextSwitchCrossDM,           UINT32,         ALWAYS,      0,                                               NO_PARAM_TABLE   ) \
X(ValidateIrq,                      BOOL,           VALIDATION,  PVRSRV_APPHINT_VALIDATEIRQ,                      NO_PARAM_TABLE   ) \
\
X(OSidRegion0Min,                   STRING,         GPUVIRT_VAL, PVRSRV_APPHINT_OSIDREGION0MIN,                   NO_PARAM_TABLE   ) \
X(OSidRegion0Max,                   STRING,         GPUVIRT_VAL, PVRSRV_APPHINT_OSIDREGION0MAX,                   NO_PARAM_TABLE   ) \
X(OSidRegion1Min,                   STRING,         GPUVIRT_VAL, PVRSRV_APPHINT_OSIDREGION1MIN,                   NO_PARAM_TABLE   ) \
X(OSidRegion1Max,                   STRING,         GPUVIRT_VAL, PVRSRV_APPHINT_OSIDREGION1MAX,                   NO_PARAM_TABLE   ) \
\
X(TPUTrilinearFracMaskPDM,          UINT32,         VALIDATION,  0xF,                                             NO_PARAM_TABLE   ) \
X(TPUTrilinearFracMaskVDM,          UINT32,         VALIDATION,  0xF,                                             NO_PARAM_TABLE   ) \
X(TPUTrilinearFracMaskCDM,          UINT32,         VALIDATION,  0xF,                                             NO_PARAM_TABLE   ) \
X(TPUTrilinearFracMaskTDM,          UINT32,         VALIDATION,  0xF,                                             NO_PARAM_TABLE   ) \
X(HTBufferSizeInKB,                 UINT32,         ALWAYS,      PVRSRV_APPHINT_HTBUFFERSIZE,                     NO_PARAM_TABLE   ) \
X(FWTraceBufSizeInDWords,           UINT32,         ALWAYS,      PVRSRV_APPHINT_FWTRACEBUFSIZEINDWORDS,           NO_PARAM_TABLE   ) \
\
X(EnablePageFaultDebug,             BOOL,           ALWAYS,      PVRSRV_APPHINT_ENABLEPAGEFAULTDEBUG,             NO_PARAM_TABLE   ) \
X(EnableFullSyncTracking,           BOOL,           ALWAYS,      PVRSRV_APPHINT_ENABLEFULLSYNCTRACKING,           NO_PARAM_TABLE   ) \
X(IgnoreHWReportedBVNC,             BOOL,           ALWAYS,      PVRSRV_APPHINT_IGNOREHWREPORTEDBVNC,             NO_PARAM_TABLE   ) \
\
X(PhysMemTestPasses,                UINT32,         ALWAYS,      PVRSRV_APPHINT_PHYSMEMTESTPASSES,                NO_PARAM_TABLE   ) \
\
X(FBCDCVersionOverride,             UINT32,         VALIDATION,  PVRSRV_APPHINT_FBCDCVERSIONOVERRIDE,             NO_PARAM_TABLE   ) \
X(TestSLRInterval,                  UINT32,         VALIDATION,  PVRSRV_APPHINT_TESTSLRINTERVAL,                  NO_PARAM_TABLE   )

/*
*******************************************************************************
 Debugfs parameters - driver configuration
******************************************************************************/
#define APPHINT_LIST_DEBUGFS_COMMON \
/* name,                            type,           class,       default,                                         helper,         */ \
X(EnableHTBLogGroup,                UINT32Bitfield, ALWAYS,      PVRSRV_APPHINT_ENABLEHTBLOGGROUP,                htb_loggroup_tbl ) \
X(HTBOperationMode,                 UINT32List,     ALWAYS,      PVRSRV_APPHINT_HTBOPERATIONMODE,                 htb_opmode_tbl   ) \
X(EnableFTraceGPU,                  BOOL,           ALWAYS,      PVRSRV_APPHINT_ENABLEFTRACEGPU,                  NO_PARAM_TABLE   ) \
X(HWPerfFWFilter,                   UINT64,         ALWAYS,      PVRSRV_APPHINT_HWPERFFWFILTER,                   NO_PARAM_TABLE   ) \
X(HWPerfHostFilter,                 UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFHOSTFILTER,                 NO_PARAM_TABLE   ) \
X(HWPerfClientFilter_Services,      UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTFILTER_SERVICES,      NO_PARAM_TABLE   ) \
X(HWPerfClientFilter_EGL,           UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTFILTER_EGL,           NO_PARAM_TABLE   ) \
X(HWPerfClientFilter_OpenGLES,      UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTFILTER_OPENGLES,      NO_PARAM_TABLE   ) \
X(HWPerfClientFilter_OpenCL,        UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTFILTER_OPENCL,        NO_PARAM_TABLE   ) \
X(HWPerfClientFilter_Vulkan,        UINT32,         ALWAYS,      PVRSRV_APPHINT_HWPERFCLIENTFILTER_VULKAN,        NO_PARAM_TABLE   ) \
X(CacheOpConfig,                    UINT32,         ALWAYS,      PVRSRV_APPHINT_CACHEOPCONFIG,                    NO_PARAM_TABLE   ) \
X(CacheOpUMKMThresholdSize,         UINT32,         ALWAYS,      PVRSRV_APPHINT_CACHEOPUMKMHRESHOLDSIZE,          NO_PARAM_TABLE   ) \
X(TimeCorrClock,                    UINT32List,     ALWAYS,      PVRSRV_APPHINT_TIMECORRCLOCK,                    timecorr_clk_tbl )

/*
*******************************************************************************
 Debugfs parameters - device configuration
******************************************************************************/
#define APPHINT_LIST_DEBUGFS_DEVICE_COMMON \
/* name,                            type,           class,       default,                                         helper,         */ \
/* Device Firmware config */\
X(AssertOnHWRTrigger,               BOOL,           ALWAYS,      PVRSRV_APPHINT_ASSERTONHWRTRIGGER,               NO_PARAM_TABLE   ) \
X(AssertOutOfMemory,                BOOL,           ALWAYS,      PVRSRV_APPHINT_ASSERTOUTOFMEMORY,                NO_PARAM_TABLE   ) \
X(CheckMList,                       BOOL,           ALWAYS,      PVRSRV_APPHINT_CHECKMLIST,                       NO_PARAM_TABLE   ) \
X(EnableHWR,                        BOOL,           ALWAYS,      APPHNT_BLDVAR_ENABLEHWR,                         NO_PARAM_TABLE   ) \
X(EnableLogGroup,                   UINT32Bitfield, ALWAYS,      PVRSRV_APPHINT_ENABLELOGGROUP,                   fwt_loggroup_tbl ) \
X(FirmwareLogType,                  UINT32List,     ALWAYS,      PVRSRV_APPHINT_FIRMWARELOGTYPE,                  fwt_logtype_tbl  ) \
/* Device host config */ \
X(EnableAPM,                        UINT32,         ALWAYS,      PVRSRV_APPHINT_ENABLEAPM,                        NO_PARAM_TABLE   ) \
X(DisableFEDLogging,                BOOL,           ALWAYS,      PVRSRV_APPHINT_DISABLEFEDLOGGING,                NO_PARAM_TABLE   ) \
X(ZeroFreelist,                     BOOL,           ALWAYS,      PVRSRV_APPHINT_ZEROFREELIST,                     NO_PARAM_TABLE   ) \
X(DisablePDumpPanic,                BOOL,           PDUMP,       PVRSRV_APPHINT_DISABLEPDUMPPANIC,                NO_PARAM_TABLE   ) \
X(EnableFWPoisonOnFree,             BOOL,           ALWAYS,      PVRSRV_APPHINT_ENABLEFWPOISONONFREE,             NO_PARAM_TABLE   ) \
X(GPUUnitsPowerChange,              BOOL,           VALIDATION,  PVRSRV_APPHINT_GPUUNITSPOWERCHANGE,              NO_PARAM_TABLE   ) \

/*
*******************************************************************************
 * Types used in the APPHINT_LIST_<GROUP> lists must be defined here.
 * New types require specific handling code to be added
******************************************************************************/
#define APPHINT_DATA_TYPE_LIST \
X(BOOL) \
X(UINT64) \
X(UINT32) \
X(UINT32Bitfield) \
X(UINT32List) \
X(STRING)

#define APPHINT_CLASS_LIST \
X(ALWAYS) \
X(NEVER) \
X(DEBUG) \
X(PDUMP) \
X(VALIDATION) \
X(GPUVIRT_VAL)

/*
*******************************************************************************
 Visibility control for module parameters
 These bind build variables to AppHint Visibility Groups.
******************************************************************************/
#define APPHINT_ENABLED_CLASS_ALWAYS IMG_TRUE
#define APPHINT_ENABLED_CLASS_NEVER IMG_FALSE
#define apphint_modparam_class_ALWAYS(a, b, c) apphint_modparam_enable(a, b, c)

#define APPHINT_ENABLED_CLASS_DEBUG IMG_FALSE
#define apphint_modparam_class_DEBUG(a, b, c)


#define APPHINT_ENABLED_CLASS_PDUMP IMG_FALSE
#define apphint_modparam_class_PDUMP(a, b, c)


#define APPHINT_ENABLED_CLASS_VALIDATION IMG_FALSE
#define apphint_modparam_class_VALIDATION(a, b, c)


#define APPHINT_ENABLED_CLASS_GPUVIRT_VAL IMG_FALSE
#define apphint_modparam_class_GPUVIRT_VAL(a, b, c)


/*
*******************************************************************************
 AppHint defaults based on other build parameters
******************************************************************************/
#if defined(HWR_DEFAULT_ENABLED)
	#define APPHNT_BLDVAR_ENABLEHWR         1
#else
	#define APPHNT_BLDVAR_ENABLEHWR         0
#endif

#define APPHNT_BLDVAR_DEBUG             0

#define APPHNT_BLDVAR_DBGDUMPLIMIT      1

#define APPHNT_BLDVAR_ENABLESIGNATURECHECKS     IMG_FALSE

#define APPHNT_BLDVAR_ENABLEPAGEFAULTDEBUG      IMG_FALSE

#define APPHNT_PHYSMEMTEST_ENABLE             0

/* Data types and actions */
typedef enum {
	APPHINT_DATA_TYPE_INVALID = 0,
#define X(a) APPHINT_DATA_TYPE_ ## a,
	APPHINT_DATA_TYPE_LIST
#undef X
	APPHINT_DATA_TYPE_MAX
} APPHINT_DATA_TYPE;

typedef enum {
#define X(a) APPHINT_CLASS_ ## a,
	APPHINT_CLASS_LIST
#undef X
	APPHINT_CLASS_MAX
} APPHINT_CLASS;

#endif /* KM_APPHINT_DEFS_COMMON_H */
