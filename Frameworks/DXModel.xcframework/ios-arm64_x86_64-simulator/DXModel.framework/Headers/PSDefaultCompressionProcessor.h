
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSDefaultCompressionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor || defined(INCLUDE_PSDefaultCompressionProcessor))
#define PSDefaultCompressionProcessor_

#define RESTRICT_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor 1
#define INCLUDE_PSCompressionProcessor 1
#include "PSCompressionProcessor.h"

@class PSCompressionMethod;
@protocol JavaUtilList;
@protocol PSConnection;

@interface PSDefaultCompressionProcessor : NSObject < PSCompressionProcessor >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)isSupportedWithPSCompressionMethod:(PSCompressionMethod *)method;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                    withPSCompressionMethod:(PSCompressionMethod *)method;

- (id<JavaUtilList>)supportedMethodsWithPSCompressionMethod:(PSCompressionMethod *)desired;

@end

J2OBJC_EMPTY_STATIC_INIT(PSDefaultCompressionProcessor)

FOUNDATION_EXPORT void PSDefaultCompressionProcessor_init(PSDefaultCompressionProcessor *self);

FOUNDATION_EXPORT PSDefaultCompressionProcessor *new_PSDefaultCompressionProcessor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSDefaultCompressionProcessor *create_PSDefaultCompressionProcessor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSDefaultCompressionProcessor)

@compatibility_alias ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor PSDefaultCompressionProcessor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedDefaultCompressionProcessor")
