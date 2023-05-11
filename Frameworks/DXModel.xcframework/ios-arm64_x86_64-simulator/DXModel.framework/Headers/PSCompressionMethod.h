
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionMethod")
#ifdef RESTRICT_ComDevexpertsPipestoneCommonIoZipedCompressionMethod
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionMethod 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionMethod 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneCommonIoZipedCompressionMethod

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCompressionMethod_) && (INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionMethod || defined(INCLUDE_PSCompressionMethod))
#define PSCompressionMethod_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@class PSCompactInputStream;
@class PSCompactOutputStream;

typedef NS_ENUM(NSUInteger, PSCompressionMethod_Enum) {
  PSCompressionMethod_Enum_NONE = 0,
  PSCompressionMethod_Enum_ZLIB = 1,
};

@interface PSCompressionMethod : JavaLangEnum

@property (readonly, class, nonnull) PSCompressionMethod *NONE NS_SWIFT_NAME(NONE);
@property (readonly, class, nonnull) PSCompressionMethod *ZLIB NS_SWIFT_NAME(ZLIB);
+ (PSCompressionMethod * __nonnull)NONE;

+ (PSCompressionMethod * __nonnull)ZLIB;

#pragma mark Public

+ (PSCompressionMethod *)readWithPSCompactInputStream:(PSCompactInputStream *)inArg;

+ (PSCompressionMethod *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

- (void)writeWithPSCompactOutputStream:(PSCompactOutputStream *)outArg;

#pragma mark Package-Private

- (PSCompressionMethod_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(PSCompressionMethod)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT PSCompressionMethod *PSCompressionMethod_values_[];

inline PSCompressionMethod *PSCompressionMethod_get_NONE(void);
J2OBJC_ENUM_CONSTANT(PSCompressionMethod, NONE)

inline PSCompressionMethod *PSCompressionMethod_get_ZLIB(void);
J2OBJC_ENUM_CONSTANT(PSCompressionMethod, ZLIB)

FOUNDATION_EXPORT PSCompressionMethod *PSCompressionMethod_readWithPSCompactInputStream_(PSCompactInputStream *inArg);

FOUNDATION_EXPORT IOSObjectArray *PSCompressionMethod_values(void);

FOUNDATION_EXPORT PSCompressionMethod *PSCompressionMethod_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT PSCompressionMethod *PSCompressionMethod_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(PSCompressionMethod)

@compatibility_alias ComDevexpertsPipestoneCommonIoZipedCompressionMethod PSCompressionMethod;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneCommonIoZipedCompressionMethod")
