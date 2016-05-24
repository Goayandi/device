#ifndef __CAMERA_FDVT_H__
#define __CAMERA_FDVT_H__

#include <linux/ioctl.h>
#define FDVT_IOC_MAGIC    'N'

#ifdef CONFIG_COMPAT
//64 bit 
#include <linux/fs.h>
#include <linux/compat.h>
#endif

typedef struct 
{
    unsigned int  *pAddr;
    unsigned int  *pData;
    unsigned int  u4Count;
} FDVTRegIO;

#ifdef CONFIG_COMPAT

typedef struct
{
    compat_uptr_t pAddr;
    compat_uptr_t pData;
    unsigned int  u4Count;
} compat_FDVTRegIO;


#endif


//below is control message
#define FDVT_IOC_INIT_SETPARA_CMD       _IO(FDVT_IOC_MAGIC, 0x00)
#define FDVT_IOC_STARTFD_CMD         _IO(FDVT_IOC_MAGIC, 0x01)
#define FDVT_IOC_G_WAITIRQ           _IOR(FDVT_IOC_MAGIC, 0x02, unsigned int )
#define FDVT_IOC_T_SET_FDCONF_CMD    _IOW(FDVT_IOC_MAGIC, 0x03, FDVTRegIO)
#define FDVT_IOC_G_READ_FDREG_CMD    _IOWR(FDVT_IOC_MAGIC, 0x04, FDVTRegIO)
#define FDVT_IOC_T_SET_SDCONF_CMD    _IOW(FDVT_IOC_MAGIC, 0x05, FDVTRegIO)
//#define FDVT_DESTROY_CMD                _IO(FDVT_IOC_MAGIC, 0x10)

#define FDVT_IOC_T_DUMPREG           _IO(FDVT_IOC_MAGIC, 0x80)

//#define FDVT_SET_CMD_CMD            _IOW(FDVT_IOC_MAGIC, 0x03, unsigned int)
//#define FDVT_SET_PWR_CMD            _IOW(FDVT_IOC_MAGIC, 0x04, unsigned int)
//#define FDVT_SET_ISR_CMD            _IOW(FDVT_IOC_MAGIC, 0x05, unsigned int)
//#define FDVT_GET_CACHECTRLADDR_CMD  _IOR(FDVT_IOC_MAGIC, 0x06, int)

#ifdef CONFIG_COMPAT

#define COMPAT_FDVT_IOC_INIT_SETPARA_CMD       _IO(FDVT_IOC_MAGIC, 0x00)
#define COMPAT_FDVT_IOC_STARTFD_CMD         _IO(FDVT_IOC_MAGIC, 0x01)
#define COMPAT_FDVT_IOC_G_WAITIRQ           _IOR(FDVT_IOC_MAGIC, 0x02, unsigned int )
#define COMPAT_FDVT_IOC_T_SET_FDCONF_CMD    _IOW(FDVT_IOC_MAGIC, 0x03, compat_FDVTRegIO)
#define COMPAT_FDVT_IOC_G_READ_FDREG_CMD    _IOWR(FDVT_IOC_MAGIC, 0x04, compat_FDVTRegIO)
#define COMPAT_FDVT_IOC_T_SET_SDCONF_CMD    _IOW(FDVT_IOC_MAGIC, 0x05, compat_FDVTRegIO)
#define COMPAT_FDVT_IOC_T_DUMPREG           _IO(FDVT_IOC_MAGIC, 0x80)

#endif


#endif //__CAMERA_FDVT_H__


























