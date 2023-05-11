
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoPipedPipedConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPipedConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedConnection || defined(INCLUDE_PSPipedConnection))
#define PSPipedConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnection 1
#define INCLUDE_PSConnection 1
#include "PSConnection.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;

@interface PSPipedConnection : NSObject < PSConnection >

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)size;

- (void)close;

- (JavaIoInputStream *)getInputStream;

- (JavaIoOutputStream *)getOutputStream;

#pragma mark Protected

- (void)onFlush;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSPipedConnection)

FOUNDATION_EXPORT void PSPipedConnection_initWithInt_(PSPipedConnection *self, jint size);

FOUNDATION_EXPORT PSPipedConnection *new_PSPipedConnection_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPipedConnection *create_PSPipedConnection_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(PSPipedConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoPipedPipedConnection PSPipedConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoPipedPipedConnection")
