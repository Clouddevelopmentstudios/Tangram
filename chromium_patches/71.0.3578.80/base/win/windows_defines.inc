// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file verifies no poisonous defines from windows headers are present.
// If you add more macros here, add them to windows_undefines.inc too

// This will generate an error if it was defined to something different, or
// if it is defined to something different after.
// Preprocessor will also nicely point to header that defined it differently.
#ifndef StrCat
#define StrCat StrCat
#endif

