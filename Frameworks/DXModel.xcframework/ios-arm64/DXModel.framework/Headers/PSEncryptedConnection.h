
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSEncryptedConnection_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection || defined(INCLUDE_PSEncryptedConnection))
#define PSEncryptedConnection_

#define RESTRICT_ComDevexpertsPipestoneCommonIoConnectionImpl 1
#define INCLUDE_PSConnectionImpl 1
#include "PSConnectionImpl.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@protocol PSCipherFactory;
@protocol PSConnection;

@interface PSEncryptedConnection : PSConnectionImpl

#pragma mark Public

- (instancetype __nonnull)initWithPSCipherFactory:(id<PSCipherFactory>)cipherFactory
                                 withPSConnection:(id<PSConnection>)conn
                                     withNSString:(NSString *)encryptionType
                                    withByteArray:(IOSByteArray *)key;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)arg0
                             withJavaIoOutputStream:(JavaIoOutputStream *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSEncryptedConnection)

FOUNDATION_EXPORT void PSEncryptedConnection_initWithPSCipherFactory_withPSConnection_withNSString_withByteArray_(PSEncryptedConnection *self, id<PSCipherFactory> cipherFactory, id<PSConnection> conn, NSString *encryptionType, IOSByteArray *key);

FOUNDATION_EXPORT PSEncryptedConnection *new_PSEncryptedConnection_initWithPSCipherFactory_withPSConnection_withNSString_withByteArray_(id<PSCipherFactory> cipherFactory, id<PSConnection> conn, NSString *encryptionType, IOSByteArray *key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSEncryptedConnection *create_PSEncryptedConnection_initWithPSCipherFactory_withPSConnection_withNSString_withByteArray_(id<PSCipherFactory> cipherFactory, id<PSConnection> conn, NSString *encryptionType, IOSByteArray *key);

J2OBJC_TYPE_LITERAL_HEADER(PSEncryptedConnection)

@compatibility_alias ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection PSEncryptedConnection;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoEncryptedEncryptedConnection")
