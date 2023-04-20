#include "include/fc_native_video_thumbnail_for_us/fc_native_video_thumbnail_for_us_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "fc_native_video_thumbnail_for_us_plugin.h"

void FcNativeVideoThumbnailForUsPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  fc_native_video_thumbnail_for_us::FcNativeVideoThumbnailPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
