// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=7e87acb36c494058615248f36c7536368d3d5fb5$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_request_capi.h"
#include "include/cef_request.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefRequestCToCpp
    : public CefCToCppRefCounted<CefRequestCToCpp, CefRequest, cef_request_t> {
 public:
  CefRequestCToCpp();
  virtual ~CefRequestCToCpp();

  // CefRequest methods.
  bool IsReadOnly() override;
  CefString GetURL() override;
  void SetURL(const CefString& url) override;
  CefString GetMethod() override;
  void SetMethod(const CefString& method) override;
  void SetReferrer(const CefString& referrer_url,
                   ReferrerPolicy policy) override;
  CefString GetReferrerURL() override;
  ReferrerPolicy GetReferrerPolicy() override;
  CefRefPtr<CefPostData> GetPostData() override;
  void SetPostData(CefRefPtr<CefPostData> postData) override;
  void GetHeaderMap(HeaderMap& headerMap) override;
  void SetHeaderMap(const HeaderMap& headerMap) override;
  CefString GetHeaderByName(const CefString& name) override;
  void SetHeaderByName(const CefString& name,
                       const CefString& value,
                       bool overwrite) override;
  void Set(const CefString& url,
           const CefString& method,
           CefRefPtr<CefPostData> postData,
           const HeaderMap& headerMap) override;
  int GetFlags() override;
  void SetFlags(int flags) override;
  CefString GetFirstPartyForCookies() override;
  void SetFirstPartyForCookies(const CefString& url) override;
  ResourceType GetResourceType() override;
  TransitionType GetTransitionType() override;
  uint64 GetIdentifier() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_REQUEST_CTOCPP_H_