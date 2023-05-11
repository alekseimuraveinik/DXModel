
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTradeSideEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum || defined(INCLUDE_DXTradeSideEnum))
#define DXTradeSideEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXTradeSideEnum : PSBaseEnum
@property (readonly, class, strong) DXTradeSideEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXTradeSideEnum *BUY NS_SWIFT_NAME(BUY);
@property (readonly, class, strong) DXTradeSideEnum *SELL NS_SWIFT_NAME(SELL);
@property (readonly, class, strong) DXTradeSideEnum *BUY_TO_OPEN NS_SWIFT_NAME(BUY_TO_OPEN);
@property (readonly, class, strong) DXTradeSideEnum *SELL_TO_CLOSE NS_SWIFT_NAME(SELL_TO_CLOSE);
@property (readonly, class, strong) DXTradeSideEnum *SELL_TO_OPEN NS_SWIFT_NAME(SELL_TO_OPEN);
@property (readonly, class, strong) DXTradeSideEnum *BUY_TO_CLOSE NS_SWIFT_NAME(BUY_TO_CLOSE);

+ (DXTradeSideEnum *)UNDEFINED;

+ (DXTradeSideEnum *)BUY;

+ (DXTradeSideEnum *)SELL;

+ (DXTradeSideEnum *)BUY_TO_OPEN;

+ (DXTradeSideEnum *)SELL_TO_CLOSE;

+ (DXTradeSideEnum *)SELL_TO_OPEN;

+ (DXTradeSideEnum *)BUY_TO_CLOSE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXTradeSideEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXTradeSideEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXTradeSideEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXTradeSideEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXTradeSideEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXTradeSideEnum)

inline DXTradeSideEnum *DXTradeSideEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, UNDEFINED, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_BUY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_BUY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, BUY, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_SELL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_SELL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, SELL, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_BUY_TO_OPEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_BUY_TO_OPEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, BUY_TO_OPEN, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_SELL_TO_CLOSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_SELL_TO_CLOSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, SELL_TO_CLOSE, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_SELL_TO_OPEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_SELL_TO_OPEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, SELL_TO_OPEN, DXTradeSideEnum *)

inline DXTradeSideEnum *DXTradeSideEnum_get_BUY_TO_CLOSE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_BUY_TO_CLOSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeSideEnum, BUY_TO_CLOSE, DXTradeSideEnum *)

FOUNDATION_EXPORT void DXTradeSideEnum_initWithNSString_withInt_(DXTradeSideEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXTradeSideEnum *new_DXTradeSideEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeSideEnum *create_DXTradeSideEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXTradeSideEnum_init(DXTradeSideEnum *self);

FOUNDATION_EXPORT DXTradeSideEnum *new_DXTradeSideEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeSideEnum *create_DXTradeSideEnum_init(void);

FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXTradeSideEnum *DXTradeSideEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXTradeSideEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTradeSideEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradeTradeSideEnum DXTradeSideEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeSideEnum")
