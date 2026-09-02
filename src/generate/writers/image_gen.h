/////////////////////////////////////////////////////////////////////////////
// Purpose:   Functions for generating embedded images
// Author:    Ralph Walden
// Copyright: Copyright (c) 2020-2026 KeyWorks Software (Ralph Walden)
// License:   Apache License -- see ../../LICENSE
/////////////////////////////////////////////////////////////////////////////
// CR: [06-30-2026]

#ifndef IMAGE_GEN_H
#define IMAGE_GEN_H

#include <vector>

#include "../wxue_namespace/wxue_string.h"  // wxue::string

class Code;
class EmbeddedImage;
class Node;

std::vector<std::string> base64_encode(unsigned char const* data, size_t data_size,
                                       GenLang language = GenLang::python);

// C++ only. Returns true if the project's common_art_header file is set, exists, and
// contains a declaration for the given image -- either an `extern const unsigned char
// <name>[...]` statement or a `bundle_<name>(...)` bundle function. Used to decide whether
// a form should embed the image or reference the shared header instead.
bool CommonArtHeaderProvidesImage(const EmbeddedImage* embed);

// C++ only. Returns the `#include "..."` statement for the project's common_art_header
// file computed relative to the form's output directory. Returns an empty string if the
// property isn't set or the file doesn't exist.
wxue::string GetCommonArtHeaderInclude(Node* form_node);

// C++ only. If the image described by parts is declared in the project's common_art_header
// file, returns the bundle function call for it (`wxue_img::bundle_<name>(...)`). Returns
// an empty string if the image isn't in the header or the header isn't set.
wxue::string CommonArtHeaderBundleName(const wxue::StringVector* parts);

// Note: GenerateBundleParameter is now a Code class method.
// See code.h for the declaration.

#endif  // IMAGE_GEN_H
