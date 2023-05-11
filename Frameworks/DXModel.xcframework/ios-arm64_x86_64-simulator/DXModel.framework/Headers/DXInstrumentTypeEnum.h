
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum || defined(INCLUDE_DXInstrumentTypeEnum))
#define DXInstrumentTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXInstrumentTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXInstrumentTypeEnum *CURRENCY NS_SWIFT_NAME(CURRENCY);
@property (readonly, class, strong) DXInstrumentTypeEnum *STOCK NS_SWIFT_NAME(STOCK);
@property (readonly, class, strong) DXInstrumentTypeEnum *FOREX NS_SWIFT_NAME(FOREX);
@property (readonly, class, strong) DXInstrumentTypeEnum *FUTURES NS_SWIFT_NAME(FUTURES);
@property (readonly, class, strong) DXInstrumentTypeEnum *PRODUCT NS_SWIFT_NAME(PRODUCT);
@property (readonly, class, strong) DXInstrumentTypeEnum *INDEX NS_SWIFT_NAME(INDEX);
@property (readonly, class, strong) DXInstrumentTypeEnum *CFD NS_SWIFT_NAME(CFD);
@property (readonly, class, strong) DXInstrumentTypeEnum *OPTION NS_SWIFT_NAME(OPTION);
@property (readonly, class, strong) DXInstrumentTypeEnum *SPREAD_BET NS_SWIFT_NAME(SPREAD_BET);
@property (readonly, class, strong) DXInstrumentTypeEnum *CFD_FUTURES NS_SWIFT_NAME(CFD_FUTURES);
@property (readonly, class, strong) DXInstrumentTypeEnum *SB_FUTURES NS_SWIFT_NAME(SB_FUTURES);
@property (readonly, class, strong) DXInstrumentTypeEnum *FX_OPTION NS_SWIFT_NAME(FX_OPTION);
@property (readonly, class, strong) DXInstrumentTypeEnum *FX_FORWARD NS_SWIFT_NAME(FX_FORWARD);
@property (readonly, class, strong) DXInstrumentTypeEnum *CFD_OPTION NS_SWIFT_NAME(CFD_OPTION);
@property (readonly, class, strong) DXInstrumentTypeEnum *SB_OPTION NS_SWIFT_NAME(SB_OPTION);
@property (readonly, class, strong) DXInstrumentTypeEnum *CFD_STOCK NS_SWIFT_NAME(CFD_STOCK);
@property (readonly, class, strong) DXInstrumentTypeEnum *SB_STOCK NS_SWIFT_NAME(SB_STOCK);
@property (readonly, class, strong) DXInstrumentTypeEnum *CFD_FOREX NS_SWIFT_NAME(CFD_FOREX);
@property (readonly, class, strong) DXInstrumentTypeEnum *SB_FOREX NS_SWIFT_NAME(SB_FOREX);
@property (readonly, class, strong) DXInstrumentTypeEnum *SPREAD NS_SWIFT_NAME(SPREAD);
@property (readonly, class, strong) DXInstrumentTypeEnum *WARRANT NS_SWIFT_NAME(WARRANT);
@property (readonly, class, strong) DXInstrumentTypeEnum *ETF NS_SWIFT_NAME(ETF);
@property (readonly, class, strong) DXInstrumentTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);

+ (DXInstrumentTypeEnum *)CURRENCY;

+ (DXInstrumentTypeEnum *)STOCK;

+ (DXInstrumentTypeEnum *)FOREX;

+ (DXInstrumentTypeEnum *)FUTURES;

+ (DXInstrumentTypeEnum *)PRODUCT;

+ (DXInstrumentTypeEnum *)INDEX;

+ (DXInstrumentTypeEnum *)CFD;

+ (DXInstrumentTypeEnum *)OPTION;

+ (DXInstrumentTypeEnum *)SPREAD_BET;

+ (DXInstrumentTypeEnum *)CFD_FUTURES;

+ (DXInstrumentTypeEnum *)SB_FUTURES;

+ (DXInstrumentTypeEnum *)FX_OPTION;

+ (DXInstrumentTypeEnum *)FX_FORWARD;

+ (DXInstrumentTypeEnum *)CFD_OPTION;

+ (DXInstrumentTypeEnum *)SB_OPTION;

+ (DXInstrumentTypeEnum *)CFD_STOCK;

+ (DXInstrumentTypeEnum *)SB_STOCK;

+ (DXInstrumentTypeEnum *)CFD_FOREX;

+ (DXInstrumentTypeEnum *)SB_FOREX;

+ (DXInstrumentTypeEnum *)SPREAD;

+ (DXInstrumentTypeEnum *)WARRANT;

+ (DXInstrumentTypeEnum *)ETF;

+ (DXInstrumentTypeEnum *)UNDEFINED;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXInstrumentTypeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXInstrumentTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXInstrumentTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXInstrumentTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXInstrumentTypeEnum)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CURRENCY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CURRENCY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CURRENCY, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_STOCK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_STOCK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, STOCK, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_FOREX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_FOREX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, FOREX, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_FUTURES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_FUTURES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, FUTURES, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_PRODUCT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_PRODUCT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, PRODUCT, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_INDEX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_INDEX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, INDEX, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CFD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CFD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CFD, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_OPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_OPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, OPTION, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SPREAD_BET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SPREAD_BET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SPREAD_BET, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CFD_FUTURES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CFD_FUTURES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CFD_FUTURES, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SB_FUTURES(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SB_FUTURES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SB_FUTURES, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_FX_OPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_FX_OPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, FX_OPTION, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_FX_FORWARD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_FX_FORWARD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, FX_FORWARD, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CFD_OPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CFD_OPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CFD_OPTION, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SB_OPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SB_OPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SB_OPTION, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CFD_STOCK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CFD_STOCK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CFD_STOCK, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SB_STOCK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SB_STOCK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SB_STOCK, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_CFD_FOREX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_CFD_FOREX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, CFD_FOREX, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SB_FOREX(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SB_FOREX;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SB_FOREX, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_SPREAD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_SPREAD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, SPREAD, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_WARRANT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_WARRANT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, WARRANT, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_ETF(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_ETF;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, ETF, DXInstrumentTypeEnum *)

inline DXInstrumentTypeEnum *DXInstrumentTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTypeEnum, UNDEFINED, DXInstrumentTypeEnum *)

FOUNDATION_EXPORT void DXInstrumentTypeEnum_initWithNSString_withInt_(DXInstrumentTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXInstrumentTypeEnum *new_DXInstrumentTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTypeEnum *create_DXInstrumentTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXInstrumentTypeEnum_init(DXInstrumentTypeEnum *self);

FOUNDATION_EXPORT DXInstrumentTypeEnum *new_DXInstrumentTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTypeEnum *create_DXInstrumentTypeEnum_init(void);

FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXInstrumentTypeEnum *DXInstrumentTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXInstrumentTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum DXInstrumentTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTypeEnum")
