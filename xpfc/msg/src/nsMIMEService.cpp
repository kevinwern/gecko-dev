/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */

#include "nsMIMEService.h"
#include "nsxpfcCIID.h"
#include "mime.h"
#include "nsMIMEMessage.h"

static NS_DEFINE_IID(kISupportsIID,     NS_ISUPPORTS_IID);
static NS_DEFINE_IID(kMIMEServiceIID,   NS_IMIME_SERVICE_IID);

nsMIMEService :: nsMIMEService()
{
  NS_INIT_REFCNT();
}

nsMIMEService :: ~nsMIMEService()  
{
}

NS_IMPL_ADDREF(nsMIMEService)
NS_IMPL_RELEASE(nsMIMEService)
NS_IMPL_QUERY_INTERFACE(nsMIMEService, kMIMEServiceIID)

nsresult nsMIMEService::Init()
{
  return NS_OK;
}

