/* tinydtls.h.  Generated from tinydtls.h.in by configure.  */
/*******************************************************************************
 *
 * Copyright (c) 2011, 2012, 2013, 2014, 2015 Olaf Bergmann (TZI) and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v. 1.0 which accompanies this distribution.
 *
 * The Eclipse Public License is available at http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at 
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * Contributors:
 *    Olaf Bergmann  - initial API and implementation
 *    Hauke Mehrtens - memory optimization, ECC integration
 *
 *******************************************************************************/

/**
 * @file tinydtls.h
 * @brief public tinydtls API
 */

#ifndef _DTLS_TINYDTLS_H_
#define _DTLS_TINYDTLS_H_

/** Defined to 1 if tinydtls is built with support for ECC */
#undef DTLS_EC
//#define DTLS_ECC 1

/** Defined to 1 if tinydtls is built with support for PSK */
#define DTLS_PSK 1

/** Defined to 1 if tinydtls is built for Contiki OS */
/* #undef WITH_CONTIKI */

#endif /* _DTLS_TINYDTLS_H_ */

/*
 *  Some testings were made with RIOT and GNRC. 
 *  However, due  untracked problem for generating the first DTLS flight 
 *  I  (rfuentess) dropped them for now and returned to Sockets (RIOT support
 *  both of them).  This generates two instances for RIOT.
 *  
 *  The pair of defines here  will have the major impact in session.c 
 *  Where WITH_RIOT_GNRC will generate   similar approach than WITH_CONTIKI
 *  meanwhile WITH_RIOT_SOCKETS will be compiling like a Linux version 
 *  with the sockets.
 * 
 *  NOTE: The previous RIOT_VERSION is defined by RIOT. 
 */

#undef  WITH_RIOT_GNRC
#define WITH_RIOT_SOCKETS

#if (defined(WITH_RIOT_GNRC) && (defined(WITH_RIOT_SOCKETS)
#error "TinyDTLS for RIOT can only be compiled with the use of GNRC OR sockets."
#elif !(defined(WITH_RIOT_GNRC) && !(defined(WITH_RIOT_SOCKETS) && RIOT_VERSION
#error "RIOT is being used with TinyDTLS but WITH_RIOT_GNRC or WITH_RIOT_SOCKETS need be configured"
#endif

