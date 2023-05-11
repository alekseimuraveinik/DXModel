
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransportErrorListener_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener || defined(INCLUDE_PSTransportErrorListener))
#define PSTransportErrorListener_

@class JavaIoIOException;

@protocol PSTransportErrorListener < JavaObject >

- (void)onNetworkErrorWithJavaIoIOException:(JavaIoIOException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(PSTransportErrorListener)

J2OBJC_TYPE_LITERAL_HEADER(PSTransportErrorListener)

#define ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener PSTransportErrorListener

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkProtocolTransportErrorListener")
