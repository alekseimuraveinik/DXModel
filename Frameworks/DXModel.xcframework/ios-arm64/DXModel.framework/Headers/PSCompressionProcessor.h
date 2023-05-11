
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompressionProcessor_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor || defined(INCLUDE_PSCompressionProcessor))
#define PSCompressionProcessor_

@class PSCompressionMethod;
@protocol JavaUtilList;
@protocol PSConnection;

@protocol PSCompressionProcessor < JavaObject >

- (id<JavaUtilList>)supportedMethodsWithPSCompressionMethod:(PSCompressionMethod *)desired;

- (jboolean)isSupportedWithPSCompressionMethod:(PSCompressionMethod *)method;

- (id<PSConnection>)processWithPSConnection:(id<PSConnection>)connection
                    withPSCompressionMethod:(PSCompressionMethod *)method;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCompressionProcessor)

J2OBJC_TYPE_LITERAL_HEADER(PSCompressionProcessor)

#define ComDevexpertsPipestoneCommonIoZipedCompressionProcessor PSCompressionProcessor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionProcessor")
