
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETInstrumentUtils_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils || defined(INCLUDE_DXMARKETInstrumentUtils))
#define DXMARKETInstrumentUtils_

@interface DXMARKETInstrumentUtils : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (NSString *)getLeverageRatioWithLong:(jlong)leverage;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETInstrumentUtils)

FOUNDATION_EXPORT void DXMARKETInstrumentUtils_init(DXMARKETInstrumentUtils *self);

FOUNDATION_EXPORT DXMARKETInstrumentUtils *new_DXMARKETInstrumentUtils_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETInstrumentUtils *create_DXMARKETInstrumentUtils_init(void);

FOUNDATION_EXPORT NSString *DXMARKETInstrumentUtils_getLeverageRatioWithLong_(jlong leverage);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETInstrumentUtils)

@compatibility_alias ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils DXMARKETInstrumentUtils;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentUtils")
