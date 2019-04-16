/*
 * Swurl
 * Copyright (c) 2019 Steven Mattera
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above 
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

#include <string>
#include <map>

#include "WebResponse.hpp"

namespace swurl {
    typedef enum {
        GET,
        POST,
        PUT,
        DELETE
    } WebRequestMethod;

    class WebRequest {
        public:
            WebRequestMethod method;
            std::string url;
            std::map<std::string, std::string> headers;
            bool sslVerifyHost;
            WebResponse response;

            WebRequest(std::string url);
            WebRequest(WebRequestMethod method, std::string url);
            WebRequest(WebRequestMethod method, std::string url, std::map<std::string, std::string> headers);
    };
}
