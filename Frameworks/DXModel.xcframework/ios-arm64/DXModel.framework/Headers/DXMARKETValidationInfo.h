
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETValidationInfo_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo || defined(INCLUDE_DXMARKETValidationInfo))
#define DXMARKETValidationInfo_

@interface DXMARKETValidationInfo : NSObject
@property (readonly, class, strong) DXMARKETValidationInfo *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMARKETValidationInfo *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)error
                              withNSString:(NSString *)hint;

- (jboolean)isEqual:(id)o;

- (NSString *)getError;

- (NSString *)getHint;

- (jboolean)hasError;

- (NSUInteger)hash;

- (void)setErrorWithNSString:(NSString *)error;

- (void)setHintWithNSString:(NSString *)hint;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(DXMARKETValidationInfo)

inline DXMARKETValidationInfo *DXMARKETValidationInfo_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMARKETValidationInfo *DXMARKETValidationInfo_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETValidationInfo, EMPTY, DXMARKETValidationInfo *)

FOUNDATION_EXPORT void DXMARKETValidationInfo_initWithNSString_withNSString_(DXMARKETValidationInfo *self, NSString *error, NSString *hint);

FOUNDATION_EXPORT DXMARKETValidationInfo *new_DXMARKETValidationInfo_initWithNSString_withNSString_(NSString *error, NSString *hint) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETValidationInfo *create_DXMARKETValidationInfo_initWithNSString_withNSString_(NSString *error, NSString *hint);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETValidationInfo)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo DXMARKETValidationInfo;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseValueValidationInfo")
