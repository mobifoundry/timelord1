/*
� Copyright 2008 Nokia Corporation. All rights reserved.

IMPORTANT:  The Nokia software ("WRTKit and Example Widget files") is supplied to you by Nokia
Corporation (�Nokia�) in consideration of your agreement to the following terms. Your use, installation
and/or redistribution of the WRTKit and Example Widget files constitutes acceptance of these terms. If
you do not agree with these terms, please do not use, install, or redistribute the WRTKit and Example
Widget files.

In consideration of your agreement to abide by the following terms, and subject to these terms, Nokia
grants you a personal, non-exclusive license, under Nokia�s copyrights in the WRTKit and Example
Widget files, to use, reproduce, and redistribute the WRTKit and Example files, in text form (for HTML,
CSS, or JavaScript files) or binary form (for associated images), for the sole purpose of creating S60
Widgets.

If you redistribute the WRTKit and Example files, you must retain this entire notice in all such
redistributions of the WRTKit and Example files.

You may not use the name, trademarks, service marks or logos of Nokia to endorse or promote products
that include the WRTKit and Example files without the prior written explicit agreement with Nokia.
Except as expressly stated in this notice, no other rights or licenses, express or implied, are granted by
Nokia herein, including but not limited to any patent rights that may be infringed by your products that
incorporate the WRTKit and Example files or by other works in which the WRTKit and Example files
may be incorporated.

The WRTKit and Example files are provided on an "AS IS" basis.  NOKIA MAKES NO
WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION THE IMPLIED
WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE, REGARDING THE EXAMPLES OR ITS USE AND OPERATION
ALONE OR IN COMBINATION WITH YOUR PRODUCTS.

IN NO EVENT SHALL NOKIA BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION, AND/OR
DISTRIBUTION OF THE EXAMPLES, HOWEVER CAUSED AND WHETHER UNDER THEORY
OF CONTRACT, TORT (INCLUDING NEGLIGENCE), STRICT LIABILITY OR OTHERWISE,
EVEN IF NOKIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

///////////////////////////////////////////////////////////////////////////////
// Logger utility class that uses the Firebug console class.

// Constructor (everything is static so this is empty).
function Logger() {
    // Set default logger level.
    this.level = this.LOG_LEVEL_OFF;
}

// Logger levels.
Logger.prototype.LOG_LEVEL_DEBUG = 0;
Logger.prototype.LOG_LEVEL_INFO = 1;
Logger.prototype.LOG_LEVEL_WARN = 2;
Logger.prototype.LOG_LEVEL_ERROR = 3;
Logger.prototype.LOG_LEVEL_OFF = 4;

Logger.prototype.level = null;
Logger.prototype.filter = null;

// Disable logging on other browsers except Firefox.
Logger.prototype.enabled = (navigator.userAgent.indexOf("Firefox") != -1);

// Dumps an objects properties and methods to the console.
Logger.prototype.dump = function(obj) {
    if (this.enabled) {
        console.dir(obj);
    }
}

// Dumps a stracktrace to the console.
Logger.prototype.trace = function() {
    if (this.enabled) {
        console.trace();
    }
}

// Prints a debug message to the console.
Logger.prototype.debug = function(str) {
    if (this.enabled && this.level <= this.LOG_LEVEL_DEBUG) {
        if (this.filter == null) {
            console.debug(str);
        } else {
            var show = false;
            for (i in this.filter) {
                if (str.indexOf(this.filter[i]) >= 0) {
                    show = true;
                    break;
                }
            }
            if (show) {
                console.debug(str);
            }
        }
    }
}

// Prints an info message to the console.
Logger.prototype.info = function(str) {
    if (this.enabled && this.level <= this.LOG_LEVEL_INFO) {
        console.info(str);
    }
}

// Prints a warning message to the console.
Logger.prototype.warn = function(str) {
    if (this.enabled && this.level <= this.LOG_LEVEL_WARN) {
        console.warn(str);
    }
}

// Prints an error message to the console.
Logger.prototype.error = function(str) {
    if (this.enabled && this.level <= this.LOG_LEVEL_ERROR) {
        console.error(str);
    }
}
