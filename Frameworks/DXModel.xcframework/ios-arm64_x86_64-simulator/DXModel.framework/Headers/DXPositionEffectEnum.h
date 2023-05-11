
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionEffectEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum || defined(INCLUDE_DXPositionEffectEnum))
#define DXPositionEffectEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXPositionEffectEnum : PSBaseEnum
@property (readonly, class, strong) DXPositionEffectEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXPositionEffectEnum *OPENING NS_SWIFT_NAME(OPENING);
@property (readonly, class, strong) DXPositionEffectEnum *CLOSING NS_SWIFT_NAME(CLOSING);

+ (DXPositionEffectEnum *)UNDEFINED;

+ (DXPositionEffectEnum *)OPENING;

+ (DXPositionEffectEnum *)CLOSING;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXPositionEffectEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionEffectEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXPositionEffectEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXPositionEffectEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXPositionEffectEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXPositionEffectEnum)

inline DXPositionEffectEnum *DXPositionEffectEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionEffectEnum *DXPositionEffectEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionEffectEnum, UNDEFINED, DXPositionEffectEnum *)

inline DXPositionEffectEnum *DXPositionEffectEnum_get_OPENING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionEffectEnum *DXPositionEffectEnum_OPENING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionEffectEnum, OPENING, DXPositionEffectEnum *)

inline DXPositionEffectEnum *DXPositionEffectEnum_get_CLOSING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionEffectEnum *DXPositionEffectEnum_CLOSING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionEffectEnum, CLOSING, DXPositionEffectEnum *)

FOUNDATION_EXPORT void DXPositionEffectEnum_initWithNSString_withInt_(DXPositionEffectEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXPositionEffectEnum *new_DXPositionEffectEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionEffectEnum *create_DXPositionEffectEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXPositionEffectEnum_init(DXPositionEffectEnum *self);

FOUNDATION_EXPORT DXPositionEffectEnum *new_DXPositionEffectEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionEffectEnum *create_DXPositionEffectEnum_init(void);

FOUNDATION_EXPORT DXPositionEffectEnum *DXPositionEffectEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXPositionEffectEnum *DXPositionEffectEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXPositionEffectEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionEffectEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradePositionEffectEnum DXPositionEffectEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradePositionEffectEnum")
