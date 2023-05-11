
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderSizeFormatter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderSizeFormatter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderSizeFormatter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderSizeFormatter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderSizeFormatter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETSizeFormatter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderSizeFormatter || defined(INCLUDE_DXMARKETSizeFormatter))
#define DXMARKETSizeFormatter_

@class DXInstrumentTO;

@interface DXMARKETSizeFormatter : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

+ (NSString *)formatQuantityWithLong:(jlong)quantity
                        withNSString:(NSString *)currency
                  withDXInstrumentTO:(DXInstrumentTO *)instrument;

+ (NSString *)formatSizeWithLong:(jlong)quantity
                    withNSString:(NSString *)currency
              withDXInstrumentTO:(DXInstrumentTO *)instrument;

+ (NSString *)formatSpreadBetQuantityWithLong:(jlong)quantity;

+ (NSString *)formatSpreadBetSizeWithLong:(jlong)quantity
                             withNSString:(NSString *)currency;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETSizeFormatter)

FOUNDATION_EXPORT void DXMARKETSizeFormatter_init(DXMARKETSizeFormatter *self);

FOUNDATION_EXPORT DXMARKETSizeFormatter *new_DXMARKETSizeFormatter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETSizeFormatter *create_DXMARKETSizeFormatter_init(void);

FOUNDATION_EXPORT NSString *DXMARKETSizeFormatter_formatSizeWithLong_withNSString_withDXInstrumentTO_(jlong quantity, NSString *currency, DXInstrumentTO *instrument);

FOUNDATION_EXPORT NSString *DXMARKETSizeFormatter_formatSpreadBetSizeWithLong_withNSString_(jlong quantity, NSString *currency);

FOUNDATION_EXPORT NSString *DXMARKETSizeFormatter_formatQuantityWithLong_withNSString_withDXInstrumentTO_(jlong quantity, NSString *currency, DXInstrumentTO *instrument);

FOUNDATION_EXPORT NSString *DXMARKETSizeFormatter_formatSpreadBetQuantityWithLong_(jlong quantity);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETSizeFormatter)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderSizeFormatter DXMARKETSizeFormatter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderSizeFormatter")
