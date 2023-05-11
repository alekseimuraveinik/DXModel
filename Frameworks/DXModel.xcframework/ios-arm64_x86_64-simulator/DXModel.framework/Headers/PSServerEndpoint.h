
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoServerEndpoint")
#ifdef RESTRICT_ComDevexpertsPipestoneClientNetworkIoServerEndpoint
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoServerEndpoint 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoServerEndpoint 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneClientNetworkIoServerEndpoint

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSServerEndpoint_) && (INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoServerEndpoint || defined(INCLUDE_PSServerEndpoint))
#define PSServerEndpoint_

@protocol PSTransport;

@interface PSServerEndpoint : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (id<PSTransport>)newTransport OBJC_METHOD_FAMILY_NONE;

+ (PSServerEndpoint *)parseWithNSString:(NSString *)url;

@end

J2OBJC_EMPTY_STATIC_INIT(PSServerEndpoint)

FOUNDATION_EXPORT void PSServerEndpoint_init(PSServerEndpoint *self);

FOUNDATION_EXPORT PSServerEndpoint *PSServerEndpoint_parseWithNSString_(NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(PSServerEndpoint)

@compatibility_alias ComDevexpertsPipestoneClientNetworkIoServerEndpoint PSServerEndpoint;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneClientNetworkIoServerEndpoint")
