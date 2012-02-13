/******************************************************************************
Copyright (c) 2011, Google Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.
    * Neither the name of the <ORGANIZATION> nor the names of its contributors 
    may be used to endorse or promote products derived from this software 
    without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

#pragma once

/*typedef struct {
  char* pattern;
  TCHAR* name;
} CDN_PROVIDER;*/
typedef struct {
  CStringA pattern;
  CStringA name;
} CDN_PROVIDER;

typedef struct {
  CStringA response_field;
  CStringA pattern;
  CStringA name;
} CDN_PROVIDER_HEADER;

CDN_PROVIDER cdnList[] = {
  {".akamai.net", "Akamai"},
  {".akamaiedge.net", "Akamai"},
  {".llnwd.net", "Limelight"},
  {"edgecastcdn.net", "Edgecast"},
  {"hwcdn.net", "Highwinds"},
  {".panthercdn.com", "Panther"},
  {".simplecdn.net", "Simple CDN"},
  {".instacontent.net", "Mirror Image"},
  {".footprint.net", "Level 3"},
  {".ay1.b.yahoo.com", "Yahoo"},
  {".yimg.", "Yahoo"},
  {".google.", "Google"},
  {"googlesyndication.", "Google"},
  {"youtube.", "Google"},
  {".googleusercontent.com", "Google"},
  {".internapcdn.net", "Internap"},
  {".cloudfront.net", "Amazon CloudFront"},
  {".netdna-cdn.com", "MaxCDN"},
  {".netdna-ssl.com", "MaxCDN"},
  {".netdna.com", "MaxCDN"},
  {".cotcdn.net", "Cotendo CDN"},
  {".cachefly.net", "Cachefly"},
  {"bo.lt", "BO.LT"},
  {".cloudflare.com", "Cloudflare"},
  {".afxcdn.net", "afxcdn.net"},
  {".lxdns.com", "lxdns.com"},
  {".att-dsa.net", "AT&T"},
  {".vo.msecnd.net", "Windows Azure"},
  {".voxcdn.net", "VoxCDN"},
  {".bluehatnetwork.com", "Blue Hat Network"},
  {".swiftcdn1.com", "SwiftCDN"},
  {".cdngc.net", "CDNetworks"},
  {".fastly.net", "Fastly"},
  {".gslb.taobao.com", "Taobao"},
  {".gslb.tbcache.com", "Alimama"},
  {".mirror-image.net", "Mirror Image"},
  {"END_MARKER", "END_MARKER"}
};

CDN_PROVIDER_HEADER cdnHeaderList[] = {
  {"server", "cloudflare", "Cloudflare"},
};
