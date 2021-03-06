/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/browser/extensions/brave_component_extension_resource_manager.h"

#include "brave/browser/resources/grit/brave_extension_resources_map.h"

namespace extensions {

BraveComponentExtensionResourceManager::
BraveComponentExtensionResourceManager() {
  AddComponentResourceEntries(
      kBraveExtension,
      kBraveExtensionSize);
}

BraveComponentExtensionResourceManager::
~BraveComponentExtensionResourceManager() {}

}  // namespace extensions
