
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXFinancingModeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum || defined(INCLUDE_DXFinancingModeEnum))
#define DXFinancingModeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXFinancingModeEnum : PSBaseEnum
@property (readonly, class, strong) DXFinancingModeEnum *SWAP_POINTS NS_SWIFT_NAME(SWAP_POINTS);
@property (readonly, class, strong) DXFinancingModeEnum *INTEREST_RATES NS_SWIFT_NAME(INTEREST_RATES);

+ (DXFinancingModeEnum *)SWAP_POINTS;

+ (DXFinancingModeEnum *)INTEREST_RATES;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXFinancingModeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXFinancingModeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXFinancingModeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXFinancingModeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXFinancingModeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXFinancingModeEnum)

inline DXFinancingModeEnum *DXFinancingModeEnum_get_SWAP_POINTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXFinancingModeEnum *DXFinancingModeEnum_SWAP_POINTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXFinancingModeEnum, SWAP_POINTS, DXFinancingModeEnum *)

inline DXFinancingModeEnum *DXFinancingModeEnum_get_INTEREST_RATES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXFinancingModeEnum *DXFinancingModeEnum_INTEREST_RATES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXFinancingModeEnum, INTEREST_RATES, DXFinancingModeEnum *)

FOUNDATION_EXPORT void DXFinancingModeEnum_initWithNSString_withInt_(DXFinancingModeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXFinancingModeEnum *new_DXFinancingModeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFinancingModeEnum *create_DXFinancingModeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXFinancingModeEnum_init(DXFinancingModeEnum *self);

FOUNDATION_EXPORT DXFinancingModeEnum *new_DXFinancingModeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXFinancingModeEnum *create_DXFinancingModeEnum_init(void);

FOUNDATION_EXPORT DXFinancingModeEnum *DXFinancingModeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXFinancingModeEnum *DXFinancingModeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXFinancingModeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXFinancingModeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum DXFinancingModeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFinancingFinancingModeEnum")
