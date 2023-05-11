
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoTransport")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkIoTransport
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoTransport 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoTransport 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkIoTransport

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSTransport_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoTransport || defined(INCLUDE_PSTransport))
#define PSTransport_

@protocol PSConnection;

@protocol PSTransport < JavaObject >

- (id<PSConnection>)connect;

@end

J2OBJC_EMPTY_STATIC_INIT(PSTransport)

J2OBJC_TYPE_LITERAL_HEADER(PSTransport)

#define ComDevexpertsPipestoneClientNetworkIoTransport PSTransport

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoTransport")
