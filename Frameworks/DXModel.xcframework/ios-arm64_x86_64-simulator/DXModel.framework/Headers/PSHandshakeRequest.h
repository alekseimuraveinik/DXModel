
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonProtocolHandshakeRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSHandshakeRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeRequest || defined(INCLUDE_PSHandshakeRequest))
#define PSHandshakeRequest_

@class PSClientInfo;
@class PSCompactInputStream;
@class PSCompactOutputStream;
@protocol JavaUtilList;

@interface PSHandshakeRequest : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)compression
                              withJavaUtilList:(id<JavaUtilList>)encryption
                                       withInt:(jint)apiVersion
                                  withNSString:(NSString *)checksum
                              withPSClientInfo:(PSClientInfo *)clientInfo;

- (jint)getApiVersion;

- (NSString *)getChecksum;

- (PSClientInfo *)getClientInfo;

- (id<JavaUtilList>)getCompressionMethods;

- (id<JavaUtilList>)getEncryption;

+ (PSHandshakeRequest *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

- (NSString *)description;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSHandshakeRequest)

FOUNDATION_EXPORT void PSHandshakeRequest_initWithJavaUtilList_withJavaUtilList_withInt_withNSString_withPSClientInfo_(PSHandshakeRequest *self, id<JavaUtilList> compression, id<JavaUtilList> encryption, jint apiVersion, NSString *checksum, PSClientInfo *clientInfo);

FOUNDATION_EXPORT PSHandshakeRequest *new_PSHandshakeRequest_initWithJavaUtilList_withJavaUtilList_withInt_withNSString_withPSClientInfo_(id<JavaUtilList> compression, id<JavaUtilList> encryption, jint apiVersion, NSString *checksum, PSClientInfo *clientInfo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSHandshakeRequest *create_PSHandshakeRequest_initWithJavaUtilList_withJavaUtilList_withInt_withNSString_withPSClientInfo_(id<JavaUtilList> compression, id<JavaUtilList> encryption, jint apiVersion, NSString *checksum, PSClientInfo *clientInfo);

FOUNDATION_EXPORT PSHandshakeRequest *PSHandshakeRequest_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(PSHandshakeRequest)

@compatibility_alias ComDevexpertsPipestoneCommonProtocolHandshakeRequest PSHandshakeRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonProtocolHandshakeRequest")
