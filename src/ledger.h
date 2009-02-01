/*
 * Copyright (c) 2003-2009, John Wiegley.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * - Neither the name of New Artisans LLC nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file   ledger.h
 * @author John Wiegley
 *
 * @mainpage Ledger Accounting Tool
 *
 * A command-line tool for general double-entry accounting.
 */
#ifndef _LEDGER_H
#define _LEDGER_H

#include <utils.h>
#include <option.h>

#include <value.h>

#include <expr.h>

#include <journal.h>
#include <iterators.h>
#include <compare.h>

#include <textual.h>
#include <cache.h>
#include <xml.h>
#include <csv.h>
#include <emacs.h>
#include <qif.h>
#include <gnucash.h>
#include <ofx.h>

#include <session.h>
#include <report.h>
#include <help.h>

#include <derive.h>
#include <reconcile.h>
#include <quotes.h>

#if defined(HAVE_BOOST_PYTHON)
#include <pyinterp.h>
#define LEDGER_SESSION_T python_interpreter_t
#else
#define LEDGER_SESSION_T session_t
#endif

#endif // _LEDGER_H