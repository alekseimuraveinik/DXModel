
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOperandTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum || defined(INCLUDE_DXOperandTypeEnum))
#define DXOperandTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOperandTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXOperandTypeEnum *QUOTE NS_SWIFT_NAME(QUOTE);
@property (readonly, class, strong) DXOperandTypeEnum *TRADE NS_SWIFT_NAME(TRADE);
@property (readonly, class, strong) DXOperandTypeEnum *SUMMARY NS_SWIFT_NAME(SUMMARY);
@property (readonly, class, strong) DXOperandTypeEnum *GREEKS NS_SWIFT_NAME(GREEKS);
@property (readonly, class, strong) DXOperandTypeEnum *UNDERLYING NS_SWIFT_NAME(UNDERLYING);
@property (readonly, class, strong) DXOperandTypeEnum *PROFILE NS_SWIFT_NAME(PROFILE);
@property (readonly, class, strong) DXOperandTypeEnum *VALUE NS_SWIFT_NAME(VALUE);
@property (readonly, class, strong) DXOperandTypeEnum *VALUE_PERCENT NS_SWIFT_NAME(VALUE_PERCENT);

+ (DXOperandTypeEnum *)QUOTE;

+ (DXOperandTypeEnum *)TRADE;

+ (DXOperandTypeEnum *)SUMMARY;

+ (DXOperandTypeEnum *)GREEKS;

+ (DXOperandTypeEnum *)UNDERLYING;

+ (DXOperandTypeEnum *)PROFILE;

+ (DXOperandTypeEnum *)VALUE;

+ (DXOperandTypeEnum *)VALUE_PERCENT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOperandTypeEnum *)change;

- (DXOperandTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOperandTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOperandTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOperandTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOperandTypeEnum)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_QUOTE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_QUOTE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, QUOTE, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_TRADE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_TRADE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, TRADE, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_SUMMARY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_SUMMARY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, SUMMARY, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_GREEKS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_GREEKS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, GREEKS, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_UNDERLYING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_UNDERLYING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, UNDERLYING, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_PROFILE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_PROFILE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, PROFILE, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, VALUE, DXOperandTypeEnum *)

inline DXOperandTypeEnum *DXOperandTypeEnum_get_VALUE_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_VALUE_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOperandTypeEnum, VALUE_PERCENT, DXOperandTypeEnum *)

FOUNDATION_EXPORT void DXOperandTypeEnum_initWithNSString_withInt_(DXOperandTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOperandTypeEnum *new_DXOperandTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOperandTypeEnum *create_DXOperandTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOperandTypeEnum_init(DXOperandTypeEnum *self);

FOUNDATION_EXPORT DXOperandTypeEnum *new_DXOperandTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOperandTypeEnum *create_DXOperandTypeEnum_init(void);

FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOperandTypeEnum *DXOperandTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOperandTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOperandTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum DXOperandTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionOperandTypeEnum")
