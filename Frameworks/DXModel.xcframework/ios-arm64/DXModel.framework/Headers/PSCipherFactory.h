
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCipherFactory_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory || defined(INCLUDE_PSCipherFactory))
#define PSCipherFactory_

@class IOSByteArray;
@protocol PSAsymmetricBlockCipher;
@protocol PSBufferedBlockCipher;

@protocol PSCipherFactory < JavaObject >

- (id<PSAsymmetricBlockCipher>)createAsymmetricBlockCipherWithNSString:(NSString *)type
                                                          withNSString:(NSString *)key
                                                           withBoolean:(jboolean)forEncryption;

- (id<PSBufferedBlockCipher>)createBufferedBlockCipherWithNSString:(NSString *)type
                                                     withByteArray:(IOSByteArray *)key
                                                       withBoolean:(jboolean)forEncryption;

@end

@interface PSCipherFactory : NSObject
@property (readonly, copy, class) NSString *ENCRYPTION_RSA NS_SWIFT_NAME(ENCRYPTION_RSA);
@property (readonly, copy, class) NSString *ENCRYPTION_NONE NS_SWIFT_NAME(ENCRYPTION_NONE);

+ (NSString *)ENCRYPTION_RSA;

+ (NSString *)ENCRYPTION_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(PSCipherFactory)

inline NSString *PSCipherFactory_get_ENCRYPTION_RSA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSCipherFactory_ENCRYPTION_RSA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCipherFactory, ENCRYPTION_RSA, NSString *)

inline NSString *PSCipherFactory_get_ENCRYPTION_NONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *PSCipherFactory_ENCRYPTION_NONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCipherFactory, ENCRYPTION_NONE, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(PSCipherFactory)

#define ComDevexpertsPipestoneCommonUtilCryptoCipherFactory PSCipherFactory

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonUtilCryptoCipherFactory")
