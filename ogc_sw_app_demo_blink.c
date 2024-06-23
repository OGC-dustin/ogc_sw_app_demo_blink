/*
 * OGC.Engineering
 * ogc_app_demo_blink.c
 * dustin ( at ) ogc.engineering
 *
 * Demonstration application for blinking a status indicator ( binary and multicolor )
 *
 * [ ] Multi OS support with bare metal fallback ( main function )
 * [ ] Binary indicator support
 * [ ] Multi color support
 */

#include "ogc_app_demo_indicator_status.h"

/* support for using the NRTP OS library */
#ifdef USE_OGC_OS_NRTPS
#include "ogc_os_ntrps.h"

#endif

/* support for using the OODA OS library */
#ifdef USE_OGC_OS_OODA
#include "ogc_os_ooda.h"

#endif

/* support for using the State Machine OS library */
#ifdef USE_OGC_OS_STATE
#include "ogc_os_state.h"

#endif

#ifndef __main__
int main( void )
{

}
#endif

