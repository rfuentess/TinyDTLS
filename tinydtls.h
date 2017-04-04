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

#if !defined(CONTIKI) && !defined(RIOT_VERSION)
#  include "dtls_config.h"
#elif defined(WITH_RIOT_GNRC) && defined(WITH_RIOT_SOCKETS)
#  error "TinyDTLS for RIOT can only be compiled with the use of GNRC OR sockets."
#elif !(defined(WITH_RIOT_GNRC)) && !(defined(WITH_RIOT_SOCKETS)) && defined(RIOT_VERSION)
#  error "TinyDTLS must be configured for RIOT with WITH_RIOT_GNRC or WITH_RIOT_SOCKETS"
#elif defined(RIOT_VERSION)
#  include "platform-specific/riot_boards.h"
#elif defined(CONTIKI)
#  include "platform-specific/platform.h"
#endif /* !CONTIKI && !RIOT_VERSION */

#if !defined(DTLS_ECC) && !defined(DTLS_PSK)
#error "TinyDTLS requires at least one Cipher suite!"
#endif

#endif /* _DTLS_TINYDTLS_H_ */
